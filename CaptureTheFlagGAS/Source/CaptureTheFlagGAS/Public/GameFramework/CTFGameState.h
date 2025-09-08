// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "Core/CTFTypes.h"
#include "CTFGameState.generated.h"

class ACTFFlag;
class ACTFPlayerState;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnScoreChangedDelegate, ETeam, Team, int32, NewScore);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGamePhaseChangedDelegate, EGamePhase, NewPhase);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnFlagCapturedDelegate, ETeam, CapturingTeam, ACTFPlayerState*, CapturingPlayer, int32, NewScore);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFlagDroppedDelegate, ACTFPlayerState*, DroppingPlayer, FVector, DropLocation);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFlagReturnedDelegate, ETeam, Team);

UCLASS()
class CAPTURETHEFLAGGAS_API ACTFGameState : public AGameState
{
	GENERATED_BODY()

public:
	ACTFGameState();

protected:
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	// Team Management
	UFUNCTION(BlueprintCallable, Category = "Teams")
	const FTeamInfo& GetTeamInfo(ETeam Team) const;

	UFUNCTION(BlueprintCallable, Category = "Teams")
	void SetTeamScore(ETeam Team, int32 NewScore);

	UFUNCTION(BlueprintCallable, Category = "Teams")
	void AddTeamScore(ETeam Team, int32 ScoreToAdd = 1);

	UFUNCTION(BlueprintCallable, Category = "Teams")
	int32 GetTeamScore(ETeam Team) const;

	UFUNCTION(BlueprintCallable, Category = "Teams")
	int32 GetTeamPlayerCount(ETeam Team) const;

	UFUNCTION(BlueprintCallable, Category = "Teams")
	TArray<ACTFPlayerState*> GetPlayersOnTeam(ETeam Team) const;

	UFUNCTION(BlueprintCallable, Category = "Teams")
	ETeam GetSmallestTeam() const;

	UFUNCTION(BlueprintCallable, Category = "Teams")
	bool CanJoinTeam(ETeam Team) const;

	// Game State Management
	UFUNCTION(BlueprintCallable, Category = "Game State")
	void SetGamePhase(EGamePhase NewPhase);

	UFUNCTION(BlueprintCallable, Category = "Game State")
	EGamePhase GetGamePhase() const { return CurrentGamePhase; }

	UFUNCTION(BlueprintCallable, Category = "Game State")
	bool IsMatchInProgress() const { return CurrentGamePhase == EGamePhase::InProgress; }

	UFUNCTION(BlueprintCallable, Category = "Game State")
	float GetRemainingTime() const;

	// Game Configuration
	UFUNCTION(BlueprintCallable, Category = "Configuration")
	const FGameConfig& GetGameConfig() const { return GameConfig; }

	UFUNCTION(BlueprintCallable, Category = "Configuration")
	void SetGameConfig(const FGameConfig& NewConfig);

	// Flag Management
	UFUNCTION(BlueprintCallable, Category = "Flag")
	void RegisterFlag(ACTFFlag* Flag);

	UFUNCTION(BlueprintCallable, Category = "Flag")
	ACTFFlag* GetFlag() const { return GameFlag.Get(); }
	
	UFUNCTION(BlueprintCallable, Category = "Flag")
	ACTFFlag* GetTeamFlag(ETeam Team) const;
	
	UFUNCTION(BlueprintCallable, Category = "Flag")
	TArray<ACTFFlag*> GetAllFlags() const;

	// Game Events
	UFUNCTION(BlueprintCallable, Category = "Game Events")
	void OnFlagCaptured(ETeam CapturingTeam, ACTFPlayerState* CapturingPlayer);

	UFUNCTION(BlueprintCallable, Category = "Game Events")
	void OnFlagDropped(ACTFPlayerState* DroppingPlayer, const FVector& DropLocation);

	UFUNCTION(BlueprintCallable, Category = "Game Events")
	void OnFlagReturned(ETeam Team);

	UFUNCTION(BlueprintCallable, Category = "Game Events")
	void CheckForMatchEnd();

	// Utility Functions
	UFUNCTION(BlueprintCallable, Category = "Utility")
	void ResetMatch();

	UFUNCTION(BlueprintCallable, Category = "Utility")
	ETeam GetWinningTeam() const;

	UFUNCTION(BlueprintCallable, Category = "Utility")
	bool IsTeamWinning(ETeam Team) const;
	
	// Cleanup Functions
	UFUNCTION(BlueprintCallable, Category = "Cleanup")
	void OnPlayerDisconnected(ACTFPlayerState* Player);

public:
	// Event Delegates
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnScoreChangedDelegate ScoreChanged;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnGamePhaseChangedDelegate GamePhaseChanged;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnFlagCapturedDelegate FlagCaptured;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnFlagDroppedDelegate FlagDropped;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnFlagReturnedDelegate FlagReturned;

protected:
	// Replicated Properties
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Teams")
	FTeamInfo RedTeamInfo;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Teams")
	FTeamInfo BlueTeamInfo;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Game State")
	EGamePhase CurrentGamePhase;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Game State")
	float MatchStartTime;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Configuration")
	FGameConfig GameConfig;

	// Game Objects
	UPROPERTY(BlueprintReadOnly, Category = "Flag")
	TObjectPtr<ACTFFlag> GameFlag;
	
	UPROPERTY(BlueprintReadOnly, Category = "Flag")
	TArray<TObjectPtr<ACTFFlag>> AllFlags;

	// Internal State
	UPROPERTY()
	TMap<ETeam, FTeamInfo> TeamInfoMap;

private:
	// Replication Functions
	UFUNCTION()
	void OnRep_RedTeamInfo();

	UFUNCTION()
	void OnRep_BlueTeamInfo();

	UFUNCTION()
	void OnRep_GamePhase();

	// Helper Functions
	void InitializeTeams();
	void UpdateTeamInfo();
	FTeamInfo& GetMutableTeamInfo(ETeam Team);
};