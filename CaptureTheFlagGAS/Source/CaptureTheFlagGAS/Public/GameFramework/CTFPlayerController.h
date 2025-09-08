// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Core/CTFTypes.h"
#include "CTFPlayerController.generated.h"

class UCTFPlayerComponent;
class ACTFFlag;
class ACTFCaptureZone;
class ACTFPlayerState;

UCLASS(BlueprintType, Blueprintable)
class CAPTURETHEFLAGGAS_API ACTFPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ACTFPlayerController();

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;

public:
	// Input Actions
	UFUNCTION(BlueprintCallable, Category = "CTF Controller|Input")
	void HandleInteractPressed();

	UFUNCTION(BlueprintCallable, Category = "CTF Controller|Input")
	void HandleDropFlagPressed();

	// CTF Functionality
	UFUNCTION(BlueprintCallable, Category = "CTF Controller|CTF")
	bool HasFlag() const;

	UFUNCTION(BlueprintCallable, Category = "CTF Controller|CTF")
	ACTFFlag* GetCarriedFlag() const;

	UFUNCTION(BlueprintCallable, Category = "CTF Controller|CTF")
	ETeam GetTeam() const;

	UFUNCTION(BlueprintCallable, Category = "CTF Controller|CTF")
	bool IsInCaptureZone() const;

	UFUNCTION(BlueprintCallable, Category = "CTF Controller|CTF")
	ACTFCaptureZone* GetCurrentCaptureZone() const;

	// Player Stats
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CTF Controller|Stats")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CTF Controller|Stats")
	float GetHealthPercentage() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CTF Controller|Stats")
	bool IsAlive() const;

	// Interaction Helpers
	UFUNCTION(BlueprintCallable, Category = "CTF Controller|Interaction")
	ACTFFlag* FindNearestInteractableFlag(float MaxDistance = 200.0f) const;

	UFUNCTION(BlueprintCallable, Category = "CTF Controller|Interaction")
	FString GetInteractionPrompt() const;

	// Component Access
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CTF Controller|Components")
	UCTFPlayerComponent* GetCTFPlayerComponent() const { return CachedPlayerComponent; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CTF Controller|Components")
	ACTFPlayerState* GetCTFPlayerState() const;

	// Configuration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CTF Controller|Config")
	float InteractionDistance = 200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CTF Controller|Config")
	bool bShowInteractionPrompts = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CTF Controller|Config")
	bool bAutoDropFlagOnDeath = true;

	// Events for Blueprint
	UFUNCTION(BlueprintImplementableEvent, Category = "CTF Controller|Events")
	void OnFlagPickedUpEvent(ACTFFlag* Flag);

	UFUNCTION(BlueprintImplementableEvent, Category = "CTF Controller|Events")
	void OnFlagDroppedEvent(ACTFFlag* Flag);

	UFUNCTION(BlueprintImplementableEvent, Category = "CTF Controller|Events")
	void OnEnteredCaptureZoneEvent(ACTFCaptureZone* Zone);

	UFUNCTION(BlueprintImplementableEvent, Category = "CTF Controller|Events")
	void OnExitedCaptureZoneEvent(ACTFCaptureZone* Zone);

	UFUNCTION(BlueprintImplementableEvent, Category = "CTF Controller|Events")
	void OnTeamChangedEvent(ETeam OldTeam, ETeam NewTeam);

	UFUNCTION(BlueprintImplementableEvent, Category = "CTF Controller|Events")
	void OnHealthChangedEvent(float OldHealth, float NewHealth);

protected:
	// Cached References
	UPROPERTY()
	TObjectPtr<UCTFPlayerComponent> CachedPlayerComponent;

	// Internal Functions
	void CachePlayerComponent();
	void BindToPlayerComponentEvents();
	void UnbindFromPlayerComponentEvents();

	// Event Handlers
	UFUNCTION()
	void HandleFlagPickedUp(ACTFFlag* Flag);

	UFUNCTION()
	void HandleFlagDropped(ACTFFlag* Flag);

	UFUNCTION()
	void HandleEnteredCaptureZone(ACTFCaptureZone* Zone);

	UFUNCTION()
	void HandleExitedCaptureZone(ACTFCaptureZone* Zone);

	UFUNCTION()
	void HandleTeamChanged(ETeam OldTeam, ETeam NewTeam);

	UFUNCTION()
	void HandleHealthChanged(float OldHealth, float NewHealth);

private:
	bool bIsInitialized = false;
};