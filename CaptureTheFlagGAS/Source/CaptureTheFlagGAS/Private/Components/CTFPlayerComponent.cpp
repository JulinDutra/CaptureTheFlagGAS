// Copyright Epic Games, Inc. All Rights Reserved.

#include "Components/CTFPlayerComponent.h"
#include "Gameplay/CTFFlag.h"
#include "Gameplay/CTFCaptureZone.h"
#include "GameFramework/CTFPlayerState.h"
#include "GameFramework/CTFGameState.h"
#include "GAS/CTFAttributeSet.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "AbilitySystemComponent.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

UCTFPlayerComponent::UCTFPlayerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.TickInterval = 0.1f; // Tick every 100ms
}

void UCTFPlayerComponent::BeginPlay()
{
	Super::BeginPlay();
	
	// Cache owner pawn
	OwnerPawn = Cast<APawn>(GetOwner());
	if (!IsValid(OwnerPawn))
	{
		UE_LOG(LogTemp, Error, TEXT("CTFPlayerComponent must be attached to a Pawn"));
		return;
	}

	// Initialize component when ready
	InitializeComponent();
}

void UCTFPlayerComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UnbindFromEvents();
	Super::EndPlay(EndPlayReason);
}

void UCTFPlayerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bIsInitialized)
	{
		UpdateHealthTracking();
	}
}

void UCTFPlayerComponent::InitializeComponent()
{
	if (bIsInitialized || !IsValid(OwnerPawn))
	{
		return;
	}

	// Wait for PlayerState to be replicated
	if (!IsValid(OwnerPawn->GetPlayerState()))
	{
		// Retry initialization next tick
		GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
		{
			InitializeComponent();
		});
		return;
	}

	CacheReferences();
	BindToEvents();
	
	bIsInitialized = true;
	UE_LOG(LogTemp, Log, TEXT("CTFPlayerComponent initialized for %s"), *OwnerPawn->GetName());
}

ETeam UCTFPlayerComponent::GetTeam() const
{
	return IsValid(CachedPlayerState) ? CachedPlayerState->GetTeam() : ETeam::None;
}

FLinearColor UCTFPlayerComponent::GetTeamColor() const
{
	return IsValid(CachedPlayerState) ? CachedPlayerState->GetTeamColor() : FLinearColor::White;
}

bool UCTFPlayerComponent::IsOnSameTeam(const UCTFPlayerComponent* OtherComponent) const
{
	if (!IsValid(OtherComponent) || !IsValid(CachedPlayerState))
	{
		return false;
	}

	return CachedPlayerState->IsOnSameTeam(OtherComponent->GetCTFPlayerState());
}

bool UCTFPlayerComponent::IsEnemyOf(const UCTFPlayerComponent* OtherComponent) const
{
	if (!IsValid(OtherComponent) || !IsValid(CachedPlayerState))
	{
		return false;
	}

	return CachedPlayerState->IsEnemyOf(OtherComponent->GetCTFPlayerState());
}

bool UCTFPlayerComponent::HasFlag() const
{
	return IsValid(CachedPlayerState) && CachedPlayerState->HasFlag();
}

ACTFFlag* UCTFPlayerComponent::GetCarriedFlag() const
{
	return IsValid(CachedPlayerState) ? CachedPlayerState->GetCarriedFlag() : nullptr;
}

bool UCTFPlayerComponent::TryPickupFlag(ACTFFlag* Flag)
{
	if (!IsValid(Flag) || !IsValid(CachedPlayerState))
	{
		return false;
	}

	const bool bSuccess = Flag->TryPickUp(CachedPlayerState);
	if (bSuccess)
	{
		OnFlagPickedUp.Broadcast(Flag);
		OnFlagPickedUpEvent(Flag);
	}

	return bSuccess;
}

void UCTFPlayerComponent::DropFlag()
{
	if (!HasFlag())
	{
		return;
	}

	ACTFFlag* DroppedFlag = GetCarriedFlag();
	if (IsValid(CachedPlayerState))
	{
		CachedPlayerState->DropFlag();
		
		if (IsValid(DroppedFlag))
		{
			OnFlagDropped.Broadcast(DroppedFlag);
			OnFlagDroppedEvent(DroppedFlag);
		}
	}
}

bool UCTFPlayerComponent::TryCapture()
{
	if (!IsInCaptureZone() || !CanCaptureFlag())
	{
		return false;
	}

	return CurrentCaptureZone->TryCapture(CachedPlayerState);
}

void UCTFPlayerComponent::DoInteract()
{
	// Try to capture if in capture zone
	if (IsInCaptureZone() && CanCaptureFlag())
	{
		if (TryCapture())
		{
			return; // Successfully captured
		}
	}

	// Try to pickup nearby flag
	if (ACTFFlag* NearbyFlag = FindNearestInteractableFlag(InteractionDistance))
	{
		TryPickupFlag(NearbyFlag);
	}
}

ACTFFlag* UCTFPlayerComponent::FindNearestInteractableFlag(float MaxDistance) const
{
	if (!IsValid(OwnerPawn) || !IsValid(CachedGameState))
	{
		return nullptr;
	}

	const FVector PlayerLocation = OwnerPawn->GetActorLocation();
	ACTFFlag* NearestFlag = nullptr;
	float NearestDistance = MaxDistance;

	// Check all flags in the game
	TArray<ACTFFlag*> AllFlags = CachedGameState->GetAllFlags();
	for (ACTFFlag* Flag : AllFlags)
	{
		if (!IsValid(Flag) || !Flag->CanBePickedUpBy(CachedPlayerState))
		{
			continue;
		}

		const float Distance = FVector::Dist(PlayerLocation, Flag->GetActorLocation());
		if (Distance < NearestDistance)
		{
			NearestDistance = Distance;
			NearestFlag = Flag;
		}
	}

	return NearestFlag;
}

ACTFCaptureZone* UCTFPlayerComponent::FindNearestCaptureZone(float MaxDistance) const
{
	if (!IsValid(OwnerPawn))
	{
		return nullptr;
	}

	const FVector PlayerLocation = OwnerPawn->GetActorLocation();
	ACTFCaptureZone* NearestZone = nullptr;
	float NearestDistance = MaxDistance;

	// Find all capture zones
	TArray<AActor*> CaptureZones;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACTFCaptureZone::StaticClass(), CaptureZones);

	for (AActor* Actor : CaptureZones)
	{
		ACTFCaptureZone* Zone = Cast<ACTFCaptureZone>(Actor);
		if (!IsValid(Zone))
		{
			continue;
		}

		const float Distance = FVector::Dist(PlayerLocation, Zone->GetActorLocation());
		if (Distance < NearestDistance)
		{
			NearestDistance = Distance;
			NearestZone = Zone;
		}
	}

	return NearestZone;
}

float UCTFPlayerComponent::GetHealth() const
{
	if (IsValid(CachedASC))
	{
		const UCTFAttributeSet* AttributeSet = CachedASC->GetSet<UCTFAttributeSet>();
		if (IsValid(AttributeSet))
		{
			return AttributeSet->GetHealth();
		}
	}
	return 100.0f; // Default health
}

float UCTFPlayerComponent::GetMaxHealth() const
{
	if (IsValid(CachedASC))
	{
		const UCTFAttributeSet* AttributeSet = CachedASC->GetSet<UCTFAttributeSet>();
		if (IsValid(AttributeSet))
		{
			return AttributeSet->GetMaxHealth();
		}
	}
	return 100.0f; // Default max health
}

float UCTFPlayerComponent::GetHealthPercentage() const
{
	const float Health = GetHealth();
	const float MaxHealth = GetMaxHealth();
	return MaxHealth > 0.0f ? (Health / MaxHealth) : 0.0f;
}

bool UCTFPlayerComponent::IsAlive() const
{
	return GetHealth() > 0.0f;
}

bool UCTFPlayerComponent::CanCaptureFlag() const
{
	if (!IsValid(CurrentCaptureZone) || !IsValid(CachedPlayerState))
	{
		return false;
	}

	return CurrentCaptureZone->CanPlayerCapture(CachedPlayerState);
}

void UCTFPlayerComponent::CacheReferences()
{
	if (IsValid(OwnerPawn))
	{
		CachedPlayerState = OwnerPawn->GetPlayerState<ACTFPlayerState>();
		if (IsValid(CachedPlayerState))
		{
			CachedASC = CachedPlayerState->GetAbilitySystemComponent();
		}
	}

	if (UWorld* World = GetWorld())
	{
		CachedGameState = World->GetGameState<ACTFGameState>();
	}
}

void UCTFPlayerComponent::BindToEvents()
{
	if (IsValid(CachedPlayerState))
	{
		CachedPlayerState->TeamChanged.AddDynamic(this, &UCTFPlayerComponent::HandleTeamChanged);
		CachedPlayerState->FlagStatusChanged.AddDynamic(this, &UCTFPlayerComponent::HandleFlagStatusChanged);
	}

	// Bind to capture zone events with retry logic
	BindToCaptureZones();
	
	// Set up timer to retry binding if no zones found initially
	if (BoundCaptureZones.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No capture zones found during initial binding - setting retry timer"));
		GetWorld()->GetTimerManager().SetTimer(RetryBindingTimerHandle, this, &UCTFPlayerComponent::BindToCaptureZones, 1.0f, true);
	}
}

void UCTFPlayerComponent::BindToCaptureZones()
{
	// Find and bind to capture zone events
	TArray<AActor*> CaptureZones;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACTFCaptureZone::StaticClass(), CaptureZones);

	for (AActor* Actor : CaptureZones)
	{
		if (ACTFCaptureZone* Zone = Cast<ACTFCaptureZone>(Actor))
		{
			// Avoid duplicate bindings
			if (!BoundCaptureZones.Contains(Zone))
			{
				Zone->OnPlayerEnteredZone.AddDynamic(this, &UCTFPlayerComponent::HandlePlayerEnteredZone);
				Zone->OnPlayerExitedZone.AddDynamic(this, &UCTFPlayerComponent::HandlePlayerExitedZone);
				BoundCaptureZones.Add(Zone);
				UE_LOG(LogTemp, Error, TEXT("🔗 ZONE FOUND: Team %d zone at location %s"), 
					   static_cast<int32>(Zone->GetOwningTeam()), *Zone->GetActorLocation().ToString());
			}
		}
	}
	
	UE_LOG(LogTemp, Warning, TEXT("CTFPlayerComponent bound to %d capture zones (total found: %d)"), BoundCaptureZones.Num(), CaptureZones.Num());
	
	// Stop retry timer if we found zones
	if (BoundCaptureZones.Num() > 0 && GetWorld()->GetTimerManager().IsTimerActive(RetryBindingTimerHandle))
	{
		GetWorld()->GetTimerManager().ClearTimer(RetryBindingTimerHandle);
		UE_LOG(LogTemp, Log, TEXT("Stopped retry binding timer - zones found"));
	}
}

void UCTFPlayerComponent::UnbindFromEvents()
{
	// Clear retry timer
	if (GetWorld() && GetWorld()->GetTimerManager().IsTimerActive(RetryBindingTimerHandle))
	{
		GetWorld()->GetTimerManager().ClearTimer(RetryBindingTimerHandle);
	}

	if (IsValid(CachedPlayerState))
	{
		CachedPlayerState->TeamChanged.RemoveDynamic(this, &UCTFPlayerComponent::HandleTeamChanged);
		CachedPlayerState->FlagStatusChanged.RemoveDynamic(this, &UCTFPlayerComponent::HandleFlagStatusChanged);
	}

	// Unbind from capture zones using cached list
	for (ACTFCaptureZone* Zone : BoundCaptureZones)
	{
		if (IsValid(Zone))
		{
			Zone->OnPlayerEnteredZone.RemoveDynamic(this, &UCTFPlayerComponent::HandlePlayerEnteredZone);
			Zone->OnPlayerExitedZone.RemoveDynamic(this, &UCTFPlayerComponent::HandlePlayerExitedZone);
		}
	}
	BoundCaptureZones.Empty();
}

void UCTFPlayerComponent::UpdateHealthTracking()
{
	const float CurrentHealth = GetHealth();
	if (LastHealth != CurrentHealth)
	{
		// Check for death
		if (LastHealth > 0.0f && CurrentHealth <= 0.0f)
		{
			HandleDeath();
		}
		// Check for respawn
		else if (LastHealth <= 0.0f && CurrentHealth > 0.0f)
		{
			HandleRespawn();
		}

		// Broadcast health change
		OnHealthChanged.Broadcast(LastHealth, CurrentHealth);
		OnHealthChangedEvent(LastHealth, CurrentHealth);

		LastHealth = CurrentHealth;
	}
}

void UCTFPlayerComponent::HandleTeamChanged(ETeam OldTeam, ETeam NewTeam)
{
	OnTeamChanged.Broadcast(OldTeam, NewTeam);
	OnTeamChangedEvent(OldTeam, NewTeam);
}

void UCTFPlayerComponent::HandleFlagStatusChanged(bool bHasFlag)
{
	// Flag status changes are handled through pickup/drop events
}

void UCTFPlayerComponent::HandlePlayerEnteredZone(ACTFPlayerState* Player, ETeam ZoneTeam)
{
	UE_LOG(LogTemp, Error, TEXT("HandlePlayerEnteredZone called! Player: %s, ZoneTeam: %d"), 
		   Player ? *Player->GetName() : TEXT("NULL"), static_cast<int32>(ZoneTeam));
		   
	if (Player == CachedPlayerState)
	{
		// Find the zone that matches the team we just entered
		ACTFCaptureZone* EnteredZone = nullptr;
		for (ACTFCaptureZone* Zone : BoundCaptureZones)
		{
			if (IsValid(Zone) && Zone->GetOwningTeam() == ZoneTeam)
			{
				EnteredZone = Zone;
				break;
			}
		}
		
		if (IsValid(EnteredZone))
		{
			CurrentCaptureZone = EnteredZone;
			OnEnteredCaptureZone.Broadcast(EnteredZone);
			
			UE_LOG(LogTemp, Error, TEXT("✅ ZONE IDENTIFIED: Found zone for team %d"), static_cast<int32>(ZoneTeam));
			
			// Auto-try capture if configured and conditions are met
			if (bAutoTryCaptureInZone)
			{
				const ETeam PlayerTeam = Player->GetTeam();
				UE_LOG(LogTemp, Error, TEXT("🚩 CAPTURE ATTEMPT: Player %s (Team %d) entered zone owned by Team %d"), 
					   *Player->GetName(), static_cast<int32>(PlayerTeam), static_cast<int32>(ZoneTeam));
				
				// Show what's needed for capture
				if (PlayerTeam == ZoneTeam)
				{
					UE_LOG(LogTemp, Error, TEXT("❌ WRONG ZONE: You entered your own team's zone! Go to ENEMY zone to capture!"));
					UE_LOG(LogTemp, Error, TEXT("   Team %d players must go to Team %d zone to capture"), 
						   static_cast<int32>(PlayerTeam), static_cast<int32>(PlayerTeam == ETeam::Red ? ETeam::Blue : ETeam::Red));
				}
				else
				{
					UE_LOG(LogTemp, Error, TEXT("✅ CORRECT ZONE: Enemy zone entered - checking capture conditions..."));
					
					if (CanCaptureFlag())
					{
						UE_LOG(LogTemp, Error, TEXT("🏆 AUTO-ATTEMPTING CAPTURE!"));
						TryCapture();
					}
					else
					{
						UE_LOG(LogTemp, Error, TEXT("❌ CAPTURE BLOCKED - checking why..."));
						// Debug why capture failed
						FString FailReason;
						if (IsValid(CurrentCaptureZone))
						{
							CurrentCaptureZone->ValidateCaptureConditions(Player, FailReason);
							UE_LOG(LogTemp, Error, TEXT("💡 REASON: %s"), *FailReason);
						}
					}
				}
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("❌ ZONE NOT FOUND: Could not find zone for team %d in BoundCaptureZones (%d zones)"), 
				   static_cast<int32>(ZoneTeam), BoundCaptureZones.Num());
		}
	}
}

void UCTFPlayerComponent::HandlePlayerExitedZone(ACTFPlayerState* Player, ETeam ZoneTeam)
{
	if (Player == CachedPlayerState && IsValid(CurrentCaptureZone) && CurrentCaptureZone->GetOwningTeam() == ZoneTeam)
	{
		OnExitedCaptureZone.Broadcast(CurrentCaptureZone);
		CurrentCaptureZone = nullptr;
	}
}

void UCTFPlayerComponent::HandleDeath()
{
	// Auto-drop flag on death if configured
	if (bAutoDropFlagOnDeath && HasFlag())
	{
		DropFlag();
	}

	OnDeathEvent();
}

void UCTFPlayerComponent::HandleRespawn()
{
	OnRespawnEvent();
}