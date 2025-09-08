// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "CTFAttributeSet.generated.h"

UCLASS()
class CAPTURETHEFLAGGAS_API UCTFAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UCTFAttributeSet();

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	// Health Attributes
	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_Health)
	FGameplayAttributeData Health;

	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;

	UPROPERTY(BlueprintReadOnly, Category = "Health", ReplicatedUsing = OnRep_HealthRegenRate)
	FGameplayAttributeData HealthRegenRate;

	// Movement Attributes
	UPROPERTY(BlueprintReadOnly, Category = "Movement", ReplicatedUsing = OnRep_MovementSpeed)
	FGameplayAttributeData MovementSpeed;

	UPROPERTY(BlueprintReadOnly, Category = "Movement", ReplicatedUsing = OnRep_MovementSpeedMultiplier)
	FGameplayAttributeData MovementSpeedMultiplier;

	// Flag Attributes
	UPROPERTY(BlueprintReadOnly, Category = "Flag", ReplicatedUsing = OnRep_FlagSpeedMultiplier)
	FGameplayAttributeData FlagSpeedMultiplier;

	// Damage Attributes (Meta attributes - not replicated)
	UPROPERTY(BlueprintReadOnly, Category = "Damage", meta = (HideFromLevelInfos))
	FGameplayAttributeData Damage;

	UPROPERTY(BlueprintReadOnly, Category = "Healing", meta = (HideFromLevelInfos))
	FGameplayAttributeData Healing;

	// Accessors
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UCTFAttributeSet, Health);
	GAMEPLAYATTRIBUTE_VALUE_GETTER(Health);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(Health);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(Health);

	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UCTFAttributeSet, MaxHealth);
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxHealth);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxHealth);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxHealth);

	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UCTFAttributeSet, HealthRegenRate);
	GAMEPLAYATTRIBUTE_VALUE_GETTER(HealthRegenRate);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(HealthRegenRate);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(HealthRegenRate);

	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UCTFAttributeSet, MovementSpeed);
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MovementSpeed);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MovementSpeed);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MovementSpeed);

	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UCTFAttributeSet, MovementSpeedMultiplier);
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MovementSpeedMultiplier);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MovementSpeedMultiplier);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MovementSpeedMultiplier);

	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UCTFAttributeSet, FlagSpeedMultiplier);
	GAMEPLAYATTRIBUTE_VALUE_GETTER(FlagSpeedMultiplier);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(FlagSpeedMultiplier);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(FlagSpeedMultiplier);

	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UCTFAttributeSet, Damage);
	GAMEPLAYATTRIBUTE_VALUE_GETTER(Damage);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(Damage);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(Damage);

	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(UCTFAttributeSet, Healing);
	GAMEPLAYATTRIBUTE_VALUE_GETTER(Healing);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(Healing);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(Healing);

protected:
	// Replication Functions
	UFUNCTION()
	virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);

	UFUNCTION()
	virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);

	UFUNCTION()
	virtual void OnRep_HealthRegenRate(const FGameplayAttributeData& OldHealthRegenRate);

	UFUNCTION()
	virtual void OnRep_MovementSpeed(const FGameplayAttributeData& OldMovementSpeed);

	UFUNCTION()
	virtual void OnRep_MovementSpeedMultiplier(const FGameplayAttributeData& OldMovementSpeedMultiplier);

	UFUNCTION()
	virtual void OnRep_FlagSpeedMultiplier(const FGameplayAttributeData& OldFlagSpeedMultiplier);

private:
	// Helper functions
	void AdjustAttributeForMaxChange(const FGameplayAttributeData& AffectedAttribute,
									const FGameplayAttributeData& MaxAttribute,
									float NewMaxValue,
									const FGameplayAttribute& AffectedAttributeProperty) const;

	void ClampAttribute(const FGameplayAttribute& Attribute, float MinValue, float MaxValue) const;
};