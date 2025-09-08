// Copyright Epic Games, Inc. All Rights Reserved.

#include "GAS/CTFAttributeSet.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "Net/UnrealNetwork.h"
#include "Engine/Engine.h"

UCTFAttributeSet::UCTFAttributeSet()
{
	// Initialize default values
	InitHealth(100.0f);
	InitMaxHealth(100.0f);
	InitHealthRegenRate(2.0f);
	InitMovementSpeed(600.0f);
	InitMovementSpeedMultiplier(1.0f);
	InitFlagSpeedMultiplier(0.8f); // Flag carriers move 20% slower
}

void UCTFAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	// Health cannot exceed MaxHealth and cannot go below 0
	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxHealth());
	}

	// MaxHealth cannot go below 1
	if (Attribute == GetMaxHealthAttribute())
	{
		NewValue = FMath::Max(NewValue, 1.0f);
	}

	// Movement speed cannot go below 0
	if (Attribute == GetMovementSpeedAttribute())
	{
		NewValue = FMath::Max(NewValue, 0.0f);
	}

	// Multipliers should be clamped within reasonable bounds
	if (Attribute == GetMovementSpeedMultiplierAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.1f, 3.0f);
	}

	if (Attribute == GetFlagSpeedMultiplierAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.1f, 1.5f);
	}

	// Regen rate can be negative for damage over time
	if (Attribute == GetHealthRegenRateAttribute())
	{
		NewValue = FMath::Clamp(NewValue, -50.0f, 50.0f);
	}
}

void UCTFAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	FGameplayEffectContextHandle Context = Data.EffectSpec.GetContext();
	UAbilitySystemComponent* SourceASC = Context.GetOriginalInstigatorAbilitySystemComponent();
	const FGameplayTagContainer& SourceTags = *Data.EffectSpec.CapturedSourceTags.GetAggregatedTags();

	// Get the Target actor
	AActor* TargetActor = nullptr;
	AController* TargetController = nullptr;
	if (Data.Target.AbilityActorInfo.IsValid() && Data.Target.AbilityActorInfo->AvatarActor.IsValid())
	{
		TargetActor = Data.Target.AbilityActorInfo->AvatarActor.Get();
		TargetController = Data.Target.AbilityActorInfo->PlayerController.Get();
	}

	// Handle Damage
	if (Data.EvaluatedData.Attribute == GetDamageAttribute())
	{
		const float LocalDamage = GetDamage();
		SetDamage(0.0f); // Clear the meta attribute

		if (LocalDamage > 0.0f)
		{
			const float NewHealth = GetHealth() - LocalDamage;
			SetHealth(FMath::Clamp(NewHealth, 0.0f, GetMaxHealth()));

			if (GetHealth() <= 0.0f)
			{
				// Handle death logic here if needed
				// This could trigger a gameplay event or ability
			}
		}
	}

	// Handle Healing
	if (Data.EvaluatedData.Attribute == GetHealingAttribute())
	{
		const float LocalHealing = GetHealing();
		SetHealing(0.0f); // Clear the meta attribute

		if (LocalHealing > 0.0f)
		{
			const float NewHealth = GetHealth() + LocalHealing;
			SetHealth(FMath::Clamp(NewHealth, 0.0f, GetMaxHealth()));
		}
	}

	// Ensure Health is always between 0 and MaxHealth
	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		SetHealth(FMath::Clamp(GetHealth(), 0.0f, GetMaxHealth()));
	}

	// When MaxHealth changes, adjust current Health proportionally
	if (Data.EvaluatedData.Attribute == GetMaxHealthAttribute())
	{
		const float CurrentHealth = GetHealth();
		const float NewMaxHealth = GetMaxHealth();

		// If current health exceeds new max health, clamp it
		if (CurrentHealth > NewMaxHealth)
		{
			SetHealth(NewMaxHealth);
		}
	}
}

void UCTFAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UCTFAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UCTFAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UCTFAttributeSet, HealthRegenRate, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UCTFAttributeSet, MovementSpeed, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UCTFAttributeSet, MovementSpeedMultiplier, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UCTFAttributeSet, FlagSpeedMultiplier, COND_None, REPNOTIFY_Always);
}

void UCTFAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCTFAttributeSet, Health, OldHealth);
}

void UCTFAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCTFAttributeSet, MaxHealth, OldMaxHealth);
}

void UCTFAttributeSet::OnRep_HealthRegenRate(const FGameplayAttributeData& OldHealthRegenRate)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCTFAttributeSet, HealthRegenRate, OldHealthRegenRate);
}

void UCTFAttributeSet::OnRep_MovementSpeed(const FGameplayAttributeData& OldMovementSpeed)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCTFAttributeSet, MovementSpeed, OldMovementSpeed);
}

void UCTFAttributeSet::OnRep_MovementSpeedMultiplier(const FGameplayAttributeData& OldMovementSpeedMultiplier)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCTFAttributeSet, MovementSpeedMultiplier, OldMovementSpeedMultiplier);
}

void UCTFAttributeSet::OnRep_FlagSpeedMultiplier(const FGameplayAttributeData& OldFlagSpeedMultiplier)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCTFAttributeSet, FlagSpeedMultiplier, OldFlagSpeedMultiplier);
}

void UCTFAttributeSet::AdjustAttributeForMaxChange(const FGameplayAttributeData& AffectedAttribute,
												  const FGameplayAttributeData& MaxAttribute,
												  float NewMaxValue,
												  const FGameplayAttribute& AffectedAttributeProperty) const
{
	UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
	const float CurrentMaxValue = MaxAttribute.GetCurrentValue();
	if (!FMath::IsNearlyEqual(CurrentMaxValue, NewMaxValue) && AbilityComp)
	{
		// Change current value to maintain the current Val / Max percent
		const float CurrentValue = AffectedAttribute.GetCurrentValue();
		float NewDelta = (CurrentMaxValue > 0.0f) ? (CurrentValue * NewMaxValue / CurrentMaxValue) - CurrentValue : NewMaxValue;

		AbilityComp->ApplyModToAttributeUnsafe(AffectedAttributeProperty, EGameplayModOp::Additive, NewDelta);
	}
}

void UCTFAttributeSet::ClampAttribute(const FGameplayAttribute& Attribute, float MinValue, float MaxValue) const
{
	UAbilitySystemComponent* AbilityComp = GetOwningAbilitySystemComponent();
	if (AbilityComp)
	{
		const float CurrentValue = Attribute.GetNumericValue(this);
		const float ClampedValue = FMath::Clamp(CurrentValue, MinValue, MaxValue);
		
		if (!FMath::IsNearlyEqual(CurrentValue, ClampedValue))
		{
			AbilityComp->ApplyModToAttributeUnsafe(Attribute, EGameplayModOp::Override, ClampedValue);
		}
	}
}