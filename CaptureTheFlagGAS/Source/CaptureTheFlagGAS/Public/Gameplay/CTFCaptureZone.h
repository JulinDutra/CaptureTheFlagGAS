// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Core/CTFTypes.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CTFCaptureZone.generated.h"

class ACTFFlag;
class ACTFPlayerState;
class UParticleSystemComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCaptureZoneFlagCapturedDelegate, ETeam, CapturingTeam, ACTFPlayerState*, Player, int32, NewScore);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerEnteredZoneDelegate, ACTFPlayerState*, Player, ETeam, ZoneTeam);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerExitedZoneDelegate, ACTFPlayerState*, Player, ETeam, ZoneTeam);

UCLASS(BlueprintType, Blueprintable)
class CAPTURETHEFLAGGAS_API ACTFCaptureZone : public AActor
{
	GENERATED_BODY()

public:
	ACTFCaptureZone();

protected:
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	// Configuration
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Zone")
	ETeam OwningTeam = ETeam::Red;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Zone", meta = (ClampMin = "50.0", ClampMax = "1000.0"))
	float CaptureRadius = 150.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Zone")
	bool bRequireEnemyFlag = true;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Capture Zone")
	bool bRequireOwnFlagAtBase = true;

	// Visual Components
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<USceneComponent> RootSceneComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UStaticMeshComponent> ZoneMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<USphereComponent> CaptureCollision;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UParticleSystemComponent> ZoneEffect;

	// Capture Logic
	UFUNCTION(BlueprintCallable, Category = "Capture Zone")
	bool CanPlayerCapture(ACTFPlayerState* Player) const;

	UFUNCTION(BlueprintCallable, Category = "Capture Zone")
	bool TryCapture(ACTFPlayerState* Player);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Capture Zone")
	ETeam GetOwningTeam() const { return OwningTeam; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Capture Zone")
	bool IsPlayerInZone(ACTFPlayerState* Player) const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Capture Zone")
	TArray<ACTFPlayerState*> GetPlayersInZone() const { return PlayersInZone; }

	UFUNCTION(BlueprintCallable, Category = "Capture Zone")
	bool ValidateCaptureConditions(ACTFPlayerState* Player, FString& OutReason) const;

	// Events
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnCaptureZoneFlagCapturedDelegate OnFlagCaptured;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnPlayerEnteredZoneDelegate OnPlayerEnteredZone;

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnPlayerExitedZoneDelegate OnPlayerExitedZone;

	// Blueprint Events
	UFUNCTION(BlueprintImplementableEvent, Category = "Capture Zone")
	void OnCaptureSuccess(ETeam CapturingTeam, ACTFPlayerState* Player, int32 NewScore);

	UFUNCTION(BlueprintImplementableEvent, Category = "Capture Zone")
	void OnCaptureFailed(ACTFPlayerState* Player, const FString& Reason);

	UFUNCTION(BlueprintImplementableEvent, Category = "Capture Zone")
	void OnPlayerEntered(ACTFPlayerState* Player);

	UFUNCTION(BlueprintImplementableEvent, Category = "Capture Zone")
	void OnPlayerExited(ACTFPlayerState* Player);

protected:
	// Replicated State
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Capture Zone")
	TArray<ACTFPlayerState*> PlayersInZone;

	// Overlap Events
	UFUNCTION()
	void OnCaptureCollisionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnCaptureCollisionEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	// Internal Functions
	void AddPlayerToZone(ACTFPlayerState* Player);
	void RemovePlayerFromZone(ACTFPlayerState* Player);
	void UpdateZoneVisuals();

	// Validation (now moved to public section)
	ACTFFlag* GetEnemyFlag() const;
	ACTFFlag* GetOwnFlag() const;

private:
	// Cached References
	UPROPERTY()
	TObjectPtr<class ACTFGameState> CachedGameState;
};