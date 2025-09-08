// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Core/CTFTypes.h"
#include "CTFPlayerComponent.generated.h"

class ACTFFlag;
class ACTFPlayerState;
class ACTFCaptureZone;
class UAbilitySystemComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerFlagPickedUpDelegate, ACTFFlag*, Flag);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerFlagDroppedDelegate, ACTFFlag*, Flag);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerTeamChangedDelegate, ETeam, OldTeam, ETeam, NewTeam);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHealthChangedDelegate, float, OldHealth, float, NewHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnteredCaptureZoneDelegate, ACTFCaptureZone*, Zone);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExitedCaptureZoneDelegate, ACTFCaptureZone*, Zone);

UCLASS(BlueprintType, Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class CAPTURETHEFLAGGAS_API UCTFPlayerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UCTFPlayerComponent();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	// Initialization
	UFUNCTION(BlueprintCallable, Category = "CTF Player")
	void InitializeComponent();

	UFUNCTION(BlueprintCallable, Category = "CTF Player")
	bool IsInitialized() const { return bIsInitialized; }

	// Team Management
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CTF Player|Team")
	ETeam GetTeam() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CTF Player|Team")
	FLinearColor GetTeamColor() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CTF Player|Team")
	bool IsOnSameTeam(const UCTFPlayerComponent* OtherComponent) const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CTF Player|Team")
	bool IsEnemyOf(const UCTFPlayerComponent* OtherComponent) const;

	// Flag Management
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CTF Player|Flag")
	bool HasFlag() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CTF Player|Flag")
	ACTFFlag* GetCarriedFlag() const;

	UFUNCTION(BlueprintCallable, Category = "CTF Player|Flag")
	bool TryPickupFlag(ACTFFlag* Flag);

	UFUNCTION(BlueprintCallable, Category = "CTF Player|Flag")
	void DropFlag();

	UFUNCTION(BlueprintCallable, Category = "CTF Player|Flag")
	bool TryCapture();

	// Interaction
	UFUNCTION(BlueprintCallable, Category = "CTF Player|Interaction")
	void DoInteract();

	UFUNCTION(BlueprintCallable, Category = "CTF Player|Interaction")
	ACTFFlag* FindNearestInteractableFlag(float MaxDistance = 200.0f) const;

	UFUNCTION(BlueprintCallable, Category = "CTF Player|Interaction")
	ACTFCaptureZone* FindNearestCaptureZone(float MaxDistance = 300.0f) const;

	// Health and Abilities
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CTF Player|Health")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CTF Player|Health")
	float GetMaxHealth() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CTF Player|Health")
	float GetHealthPercentage() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CTF Player|Health")
	bool IsAlive() const;

	// Capture Zone Tracking
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CTF Player|Capture")
	bool IsInCaptureZone() const { return CurrentCaptureZone != nullptr; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CTF Player|Capture")
	ACTFCaptureZone* GetCurrentCaptureZone() const { return CurrentCaptureZone; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CTF Player|Capture")
	bool CanCaptureFlag() const;

	// Events
	UPROPERTY(BlueprintAssignable, Category = "CTF Player|Events")
	FOnPlayerFlagPickedUpDelegate OnFlagPickedUp;

	UPROPERTY(BlueprintAssignable, Category = "CTF Player|Events")
	FOnPlayerFlagDroppedDelegate OnFlagDropped;

	UPROPERTY(BlueprintAssignable, Category = "CTF Player|Events")
	FOnPlayerTeamChangedDelegate OnTeamChanged;

	UPROPERTY(BlueprintAssignable, Category = "CTF Player|Events")
	FOnHealthChangedDelegate OnHealthChanged;

	UPROPERTY(BlueprintAssignable, Category = "CTF Player|Events")
	FOnEnteredCaptureZoneDelegate OnEnteredCaptureZone;

	UPROPERTY(BlueprintAssignable, Category = "CTF Player|Events")
	FOnExitedCaptureZoneDelegate OnExitedCaptureZone;

	// Blueprint Events
	UFUNCTION(BlueprintImplementableEvent, Category = "CTF Player|Events")
	void OnFlagPickedUpEvent(ACTFFlag* Flag);

	UFUNCTION(BlueprintImplementableEvent, Category = "CTF Player|Events")
	void OnFlagDroppedEvent(ACTFFlag* Flag);

	UFUNCTION(BlueprintImplementableEvent, Category = "CTF Player|Events")
	void OnTeamChangedEvent(ETeam OldTeam, ETeam NewTeam);

	UFUNCTION(BlueprintImplementableEvent, Category = "CTF Player|Events")
	void OnHealthChangedEvent(float OldHealth, float NewHealth);

	UFUNCTION(BlueprintImplementableEvent, Category = "CTF Player|Events")
	void OnDeathEvent();

	UFUNCTION(BlueprintImplementableEvent, Category = "CTF Player|Events")
	void OnRespawnEvent();

	// Configuration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CTF Player|Config")
	float InteractionDistance = 200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CTF Player|Config")
	bool bAutoDropFlagOnDeath = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CTF Player|Config")
	bool bAutoTryCaptureInZone = true;

	// Getters for cached references
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CTF Player|References")
	ACTFPlayerState* GetCTFPlayerState() const { return CachedPlayerState; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CTF Player|References")
	UAbilitySystemComponent* GetAbilitySystemComponent() const { return CachedASC; }

protected:
	// Internal state
	bool bIsInitialized = false;
	float LastHealth = -1.0f;

	// Cached references
	UPROPERTY()
	TObjectPtr<APawn> OwnerPawn;

	UPROPERTY()
	TObjectPtr<ACTFPlayerState> CachedPlayerState;

	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> CachedASC;

	UPROPERTY()
	TObjectPtr<class ACTFGameState> CachedGameState;

	UPROPERTY()
	TObjectPtr<ACTFCaptureZone> CurrentCaptureZone;

	// Track bound capture zones to avoid duplicate bindings
	UPROPERTY()
	TArray<TObjectPtr<ACTFCaptureZone>> BoundCaptureZones;

	// Timer for retry binding to capture zones
	FTimerHandle RetryBindingTimerHandle;

	// Internal functions
	void CacheReferences();
	void BindToEvents();
	void BindToCaptureZones();
	void UnbindFromEvents();
	void UpdateHealthTracking();

	// Event handlers
	UFUNCTION()
	void HandleTeamChanged(ETeam OldTeam, ETeam NewTeam);

	UFUNCTION()
	void HandleFlagStatusChanged(bool bHasFlag);

	UFUNCTION()
	void HandlePlayerEnteredZone(ACTFPlayerState* Player, ETeam ZoneTeam);

	UFUNCTION()
	void HandlePlayerExitedZone(ACTFPlayerState* Player, ETeam ZoneTeam);

	// Death handling
	void HandleDeath();
	void HandleRespawn();
};