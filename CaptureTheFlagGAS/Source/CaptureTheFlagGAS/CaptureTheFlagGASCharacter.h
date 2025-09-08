// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "AttributeSet.h"
#include "Logging/LogMacros.h"
#include "Core/CTFTypes.h"
#include "CaptureTheFlagGASCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class UInputAction;
struct FInputActionValue;
class UAbilitySystemComponent;
class UCTFAttributeSet;
class ACTFPlayerState;
class ACTFGameState;
class ACTFFlag;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

/**
 *  A basic first person character
 */
UCLASS(BlueprintType, Blueprintable)
class CAPTURETHEFLAGGAS_API ACaptureTheFlagGASCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

	/** Pawn mesh: first person view (arms; seen only by self) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USkeletalMeshComponent> FirstPersonMesh;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCameraComponent> FirstPersonCameraComponent;

protected:

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, Category ="Input")
	TObjectPtr<UInputAction> JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, Category ="Input")
	TObjectPtr<UInputAction> MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, Category ="Input")
	TObjectPtr<UInputAction> LookAction;

	/** Mouse Look Input Action */
	UPROPERTY(EditAnywhere, Category ="Input")
	TObjectPtr<UInputAction> MouseLookAction;

	UPROPERTY(EditAnywhere, Category ="Input")
	TObjectPtr<UInputAction> InteractAction;
	
public:
	ACaptureTheFlagGASCharacter();

protected:
	virtual void BeginPlay() override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
	virtual void Tick(float DeltaTime) override;

	// IAbilitySystemInterface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

protected:

	/** Called from Input Actions for movement input */
	void MoveInput(const FInputActionValue& Value);

	/** Called from Input Actions for looking input */
	void LookInput(const FInputActionValue& Value);

	/** Handles aim inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoAim(float Yaw, float Pitch);

	/** Handles move inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoMove(float Right, float Forward);

	/** Handles jump start inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoJumpStart();

	/** Handles jump end inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoJumpEnd();

protected:

	/** Set up input action bindings */
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	

public:

	/** Returns the first person mesh **/
	TObjectPtr<USkeletalMeshComponent> GetFirstPersonMesh() const { return FirstPersonMesh; }

	/** Returns first person camera component **/
	TObjectPtr<UCameraComponent> GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	// Component Access - Delegated to CTFPlayerComponent
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "CTF Components")
	class UCTFPlayerComponent* GetCTFPlayerComponent() const;

	// Combat
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void OnKilled(ACaptureTheFlagGASCharacter* Killer);

	UFUNCTION(BlueprintCallable, Category = "Combat")
	void OnRespawn();

	// Attribute Access
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Attributes")
	float GetHealth() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Attributes")
	float GetMaxHealth() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Attributes")
	float GetHealthPercentage() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Attributes")
	bool IsAlive() const;

	// Events
	UFUNCTION(BlueprintImplementableEvent, Category = "Events")
	void OnTeamChanged(ETeam NewTeam);

	UFUNCTION(BlueprintImplementableEvent, Category = "Events")
	void OnFlagStatusChanged(bool bHasFlag);

	UFUNCTION(BlueprintImplementableEvent, Category = "Events")
	void OnHealthChanged(float NewHealth, float MaxHealth);

protected:
	// Input Handling (declared above with the input functions)
	void InteractInput(const FInputActionValue& Value);

	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoInteract();

	// CTF Player Component
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CTF Components")
	TObjectPtr<class UCTFPlayerComponent> CTFPlayerComponent;

	// GAS Components (owned by PlayerState)
	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<const UCTFAttributeSet> AttributeSet;

	// Cached References
	UPROPERTY()
	TObjectPtr<ACTFPlayerState> CTFPlayerState;

	UPROPERTY()
	TObjectPtr<ACTFGameState> CTFGameState;

	// Configuration
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Interaction", meta = (ClampMin = "100.0", ClampMax = "1000.0"))
	float InteractionRange = 200.0f;

private:
	// Internal Functions
	void InitializeAbilitySystem();
	void InitializeCTFComponent();
	void UpdateMovementSpeed();
	void SetupAttributeChangeCallbacks();

	// Attribute Change Callbacks (simplified)
	void OnHealthAttributeChanged();
	void OnMovementSpeedAttributeChanged();

};

