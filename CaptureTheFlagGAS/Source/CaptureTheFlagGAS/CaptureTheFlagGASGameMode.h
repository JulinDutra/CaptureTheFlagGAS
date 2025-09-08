// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "Core/CTFTypes.h"
#include "CaptureTheFlagGASGameMode.generated.h"

class ACTFPlayerState;
class ACTFGameState;
class ACTFFlag;
class APlayerStart;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerJoinedTeamDelegate, ACTFPlayerState*, Player, ETeam, Team);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMatchStateChangedDelegate, EGamePhase, NewPhase);

/**
 *  CTF GameMode with team management and multiplayer support
 */
UCLASS(BlueprintType, Blueprintable)
class CAPTURETHEFLAGGAS_API ACaptureTheFlagGASGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ACaptureTheFlagGASGameMode();

protected:
	virtual void BeginPlay() override;
	virtual void PostLogin(APlayerController* NewPlayer) override;
	virtual void Logout(AController* Exiting) override;
	virtual void HandleMatchIsWaitingToStart() override;
	virtual void HandleMatchHasStarted() override;
	virtual void HandleMatchHasEnded() override;
	virtual bool ReadyToStartMatch_Implementation() override;
	virtual bool ReadyToEndMatch_Implementation() override;
	virtual void RestartGame() override;

	virtual AActor* ChoosePlayerStart_Implementation(AController* Player) override;
	virtual UClass* GetDefaultPawnClassForController_Implementation(AController* InController) override;
	virtual APlayerController* GetPlayerControllerClass(AController* InController);
	
	// Default classes for component-based architecture
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default Classes")
	TSubclassOf<class ACTFPlayerController> CTFPlayerControllerClass;
	virtual void ChangeName(AController* Controller, const FString& NewName, bool bNameChange) override;

	virtual void InitGameState() override;
	virtual APawn* SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, const FTransform& SpawnTransform) override;

	// Team Management
	UFUNCTION(BlueprintCallable, Category = "Team Management")
	void AssignPlayerToTeam(ACTFPlayerState* Player, ETeam Team);

	UFUNCTION(BlueprintCallable, Category = "Team Management")
	ETeam SelectTeamForPlayer(ACTFPlayerState* Player);

	UFUNCTION(BlueprintCallable, Category = "Team Management")
	bool CanStartMatch() const;

	UFUNCTION(BlueprintCallable, Category = "Team Management")
	void BalanceTeams();

	// Match Management
	virtual void StartMatch() override;
	virtual void EndMatch() override;

	UFUNCTION(BlueprintCallable, Category = "Match Management")
	void ResetMatch();

	UFUNCTION(BlueprintCallable, Category = "Match Management")
	void CheckMatchEnd();

	// Spawning
	UFUNCTION(BlueprintCallable, Category = "Spawning")
	APlayerStart* GetTeamPlayerStart(ETeam Team) const;

	UFUNCTION(BlueprintCallable, Category = "Spawning")
	void RespawnPlayer(AController* Controller);

	UFUNCTION(BlueprintCallable, Category = "Spawning")
	bool CanRespawnPlayer(ACTFPlayerState* Player) const;

	// Flag Management
	UFUNCTION(BlueprintCallable, Category = "Flag Management")
	void InitializeFlags();

	UFUNCTION(BlueprintCallable, Category = "Flag Management")
	void ResetFlags();

public:
	// Event Delegates
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnPlayerJoinedTeamDelegate PlayerJoinedTeam;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnMatchStateChangedDelegate MatchStateChanged;

	// Configuration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Configuration")
	FGameConfig GameConfiguration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Configuration", meta = (ClampMin = "1", ClampMax = "32"))
	int32 MinPlayersToStart = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Configuration")
	bool bAutoBalanceTeams = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Configuration")
	bool bAllowSpectators = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flag Configuration")
	TSubclassOf<ACTFFlag> FlagClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flag Configuration")
	FVector FlagSpawnLocation = FVector::ZeroVector;

protected:
	// Cached References
	UPROPERTY()
	TObjectPtr<ACTFGameState> CTFGameState;

	UPROPERTY()
	TObjectPtr<ACTFFlag> GameFlag;

	// Player Start Arrays
	UPROPERTY()
	TArray<TObjectPtr<APlayerStart>> RedTeamStarts;

	UPROPERTY()
	TArray<TObjectPtr<APlayerStart>> BlueTeamStarts;

	UPROPERTY()
	TArray<TObjectPtr<APlayerStart>> SpectatorStarts;

	UPROPERTY()
	TArray<TObjectPtr<APlayerStart>> NeutralStarts;

private:
	// Internal Functions
	void CachePlayerStarts();
	void ClassifyPlayerStart(APlayerStart* PlayerStart);
	ETeam GetPlayerStartTeam(APlayerStart* PlayerStart) const;

	// Timers
	FTimerHandle MatchStartTimerHandle;
	FTimerHandle RespawnTimerHandle;
};



