// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Core/CTFTypes.h"
#include "CTFFlag.generated.h"

class ACTFPlayerState;
class ACTFGameState;
class UGameplayEffect;
class USphereComponent;
class UStaticMeshComponent;
class USceneComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFlagPickedUpDelegate, ACTFFlag*, Flag, ACTFPlayerState*, Player);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFlagDroppedDelegate, ACTFFlag*, Flag, FVector, DropLocation);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFlagReturnedDelegate, ACTFFlag*, Flag);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFlagCapturedDelegate, ACTFFlag*, Flag, ETeam, CapturingTeam, ACTFPlayerState*, Player);

UCLASS(BlueprintType, Blueprintable)
class CAPTURETHEFLAGGAS_API ACTFFlag : public AActor
{
	GENERATED_BODY()

public:
	ACTFFlag();

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	// Flag State Management
	UFUNCTION(BlueprintCallable, Category = "Flag")
	void SetFlagState(EFlagState NewState);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Flag")
	EFlagState GetFlagState() const { return CurrentState; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Flag")
	bool IsAtBase() const { return CurrentState == EFlagState::AtBase; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Flag")
	bool IsCarried() const { return CurrentState == EFlagState::Carried; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Flag")
	bool IsDropped() const { return CurrentState == EFlagState::Dropped; }

	// Flag Interaction
	UFUNCTION(BlueprintCallable, Category = "Flag")
	bool CanBePickedUpBy(const ACTFPlayerState* Player) const;

	UFUNCTION(BlueprintCallable, Category = "Flag")
	bool TryPickUp(ACTFPlayerState* Player);

	UFUNCTION(BlueprintCallable, Category = "Flag")
	void OnDropped(ACTFPlayerState* DroppingPlayer);

	UFUNCTION(BlueprintCallable, Category = "Flag")
	void ReturnToBase();

	UFUNCTION(BlueprintCallable, Category = "Flag")
	void ReturnToCenter();

	UFUNCTION(BlueprintCallable, Category = "Flag")
	bool TryCapture(ACTFPlayerState* CapturingPlayer);

	// Carrier Management
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Flag")
	ACTFPlayerState* GetCarrier() const { return Carrier.Get(); }

	UFUNCTION(BlueprintCallable, Category = "Flag")
	void SetCarrier(ACTFPlayerState* NewCarrier);
	
	// Team Functions
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Flag")
	ETeam GetOwningTeam() const { return OwningTeam; }

	// Position Management
	UFUNCTION(BlueprintCallable, Category = "Flag")
	void SetBaseLocation(const FVector& Location);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Flag")
	FVector GetBaseLocation() const { return BaseLocation; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Flag")
	float GetDistanceFromBase() const;

	// Return Timer
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Flag")
	float GetReturnTimer() const { return ReturnTimer; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Flag")
	float GetReturnProgress() const;

	// Utility
	UFUNCTION(BlueprintCallable, Category = "Flag")
	void ResetFlag();

	UFUNCTION(BlueprintImplementableEvent, Category = "Flag")
	void OnStateChanged(EFlagState OldState, EFlagState NewState);

	UFUNCTION(BlueprintImplementableEvent, Category = "Flag")
	void OnPickedUpEvent(ACTFPlayerState* Player);

	UFUNCTION(BlueprintImplementableEvent, Category = "Flag")
	void OnDroppedEvent(FVector DropLocation);

	UFUNCTION(BlueprintImplementableEvent, Category = "Flag")
	void OnReturnedEvent();

	UFUNCTION(BlueprintImplementableEvent, Category = "Flag")
	void OnCapturedEvent(ETeam CapturingTeam, ACTFPlayerState* Player);

public:
	// Event Delegates
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FFlagPickedUpDelegate OnFlagPickedUp;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FFlagDroppedDelegate OnFlagDropped;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FFlagReturnedDelegate OnFlagReturned;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FFlagCapturedDelegate OnFlagCaptured;

protected:
	// Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<USceneComponent> RootSceneComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UStaticMeshComponent> FlagMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<USphereComponent> InteractionSphere;

	// Replicated Properties
	UPROPERTY(ReplicatedUsing = OnRep_FlagState, BlueprintReadOnly, Category = "Flag")
	EFlagState CurrentState;

	UPROPERTY(ReplicatedUsing = OnRep_Carrier, BlueprintReadOnly, Category = "Flag")
	TObjectPtr<ACTFPlayerState> Carrier;

	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Flag")
	FVector BaseLocation;

	UPROPERTY(ReplicatedUsing = OnRep_ReturnTimer, BlueprintReadOnly, Category = "Flag")
	float ReturnTimer;

	// Team Configuration
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Flag")
	ETeam OwningTeam = ETeam::Red;

	// Configuration
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configuration", meta = (ClampMin = "0.0", ClampMax = "120.0"))
	float AutoReturnTime = 30.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configuration", meta = (ClampMin = "50.0", ClampMax = "500.0"))
	float InteractionRadius = 150.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Configuration")
	TSubclassOf<UGameplayEffect> FlagCarrierEffect;

	// Internal State
	UPROPERTY()
	TObjectPtr<ACTFGameState> CachedGameState;

	UPROPERTY()
	float DropTime;

	// Fixed: Per-instance validation timer instead of static
	UPROPERTY()
	float ValidationTimer;

private:
	// Replication Functions
	UFUNCTION()
	void OnRep_FlagState();

	UFUNCTION()
	void OnRep_Carrier();

	UFUNCTION()
	void OnRep_ReturnTimer();

	// Internal Functions
	void UpdateReturnTimer(float DeltaTime);
	void AttachToCarrier();
	void DetachFromCarrier();
	void UpdateInteractionRadius();
	
	// Validation Functions
	UFUNCTION(BlueprintCallable, Category = "Flag")
	bool ValidateCapture(ACTFPlayerState* Player) const;
	
	UFUNCTION(BlueprintCallable, Category = "Flag")  
	void ValidateState();
	
	// Overlap Events
	UFUNCTION()
	void OnInteractionSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
										UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
										bool bFromSweep, const FHitResult& SweepResult);
};