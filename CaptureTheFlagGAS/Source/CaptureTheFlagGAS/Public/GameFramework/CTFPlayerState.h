// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "Core/CTFTypes.h"
#include "CTFPlayerState.generated.h"

class UAbilitySystemComponent;
class UCTFAttributeSet;
class ACTFFlag;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTeamChangedDelegate, ETeam, OldTeam, ETeam, NewTeam);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStatsChangedDelegate, const FPlayerStats&, NewStats);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFlagStatusChangedDelegate, bool, bHasFlag);

UCLASS()
class CAPTURETHEFLAGGAS_API ACTFPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ACTFPlayerState();

protected:
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	// IAbilitySystemInterface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	// Team Management
	UFUNCTION(BlueprintCallable, Category = "Team")
	void SetTeam(ETeam NewTeam);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Team")
	ETeam GetTeam() const { return CurrentTeam; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Team")
	bool IsOnTeam(ETeam Team) const { return CurrentTeam == Team; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Team")
	bool IsOnSameTeam(const ACTFPlayerState* OtherPlayer) const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Team")
	bool IsEnemyOf(const ACTFPlayerState* OtherPlayer) const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Team")
	FLinearColor GetTeamColor() const;

	// Stats Management
	UFUNCTION(BlueprintCallable, Category = "Stats")
	const FPlayerStats& GetStats() const { return PlayerStats; }

	UFUNCTION(BlueprintCallable, Category = "Stats")
	void AddCapture();

	UFUNCTION(BlueprintCallable, Category = "Stats")
	void AddReturn();

	UFUNCTION(BlueprintCallable, Category = "Stats")
	void AddKill();

	UFUNCTION(BlueprintCallable, Category = "Stats")
	void AddDeath();

	UFUNCTION(BlueprintCallable, Category = "Stats")
	void AddFlagTime(float TimeWithFlag);

	UFUNCTION(BlueprintCallable, Category = "Stats")
	void ResetStats();

	// Flag Management
	UFUNCTION(BlueprintCallable, Category = "Flag")
	void SetCarriedFlag(ACTFFlag* Flag);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Flag")
	ACTFFlag* GetCarriedFlag() const { return CarriedFlag.Get(); }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Flag")
	bool HasFlag() const { return CarriedFlag != nullptr; }

	UFUNCTION(BlueprintCallable, Category = "Flag")
	void DropFlag();

	// Respawn Management
	UFUNCTION(BlueprintCallable, Category = "Respawn")
	void SetRespawnTime(float Time);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Respawn")
	float GetRespawnTime() const { return RespawnTime; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Respawn")
	bool CanRespawn() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Respawn")
	float GetRespawnCountdown() const;

	// Utility Functions
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Utility")
	float GetKillDeathRatio() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Utility")
	int32 GetTotalScore() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Utility")
	bool IsAlive() const;

	UFUNCTION(BlueprintCallable, Category = "Utility")
	void OnPlayerKilled();

	UFUNCTION(BlueprintCallable, Category = "Utility")
	void OnPlayerRespawned();

	// CTF Rule Compliance - Auto drop flag on death
	UFUNCTION(BlueprintCallable, Category = "CTF Rules")
	void HandlePlayerDeath();

public:
	// Event Delegates
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnTeamChangedDelegate TeamChanged;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnStatsChangedDelegate StatsChanged;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnFlagStatusChangedDelegate FlagStatusChanged;

protected:
	// Ability System Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ability System")
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ability System")
	TObjectPtr<UCTFAttributeSet> AttributeSet;

	// Replicated Properties
	UPROPERTY(ReplicatedUsing = OnRep_Team, BlueprintReadOnly, Category = "Team")
	ETeam CurrentTeam;

	UPROPERTY(ReplicatedUsing = OnRep_Stats, BlueprintReadOnly, Category = "Stats")
	FPlayerStats PlayerStats;

	UPROPERTY(ReplicatedUsing = OnRep_CarriedFlag, BlueprintReadOnly, Category = "Flag")
	TObjectPtr<ACTFFlag> CarriedFlag;

	UPROPERTY(ReplicatedUsing = OnRep_RespawnTime, BlueprintReadOnly, Category = "Respawn")
	float RespawnTime;

	// Internal State
	UPROPERTY()
	float FlagPickupTime;
	
	// Track previous team for race condition fix
	UPROPERTY()
	ETeam PreviousTeam;

private:
	// Replication Functions
	UFUNCTION()
	void OnRep_Team();

	UFUNCTION()
	void OnRep_Stats();

	UFUNCTION()
	void OnRep_CarriedFlag();

	UFUNCTION()
	void OnRep_RespawnTime();

	// Internal Functions
	void InitializeAbilitySystem();
	void UpdateStats();
};