// Copyright Epic Games, Inc. All Rights Reserved.

#include "Gameplay/CTFFlag.h"
#include "GameFramework/CTFPlayerState.h"
#include "GameFramework/CTFGameState.h"
#include "CaptureTheFlagGASCharacter.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"
#include "Engine/World.h"
#include "GameFramework/Character.h"
#include "AbilitySystemComponent.h"
#include "GameplayEffect.h"

ACTFFlag::ACTFFlag()
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
	bAlwaysRelevant = true;

	// Create components
	RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
	RootComponent = RootSceneComponent;

	FlagMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FlagMesh"));
	FlagMesh->SetupAttachment(RootComponent);
	FlagMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	FlagMesh->SetIsReplicated(true);

	InteractionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionSphere"));
	InteractionSphere->SetupAttachment(RootComponent);
	InteractionSphere->SetSphereRadius(InteractionRadius);
	InteractionSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	InteractionSphere->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	InteractionSphere->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	InteractionSphere->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
	InteractionSphere->SetIsReplicated(false); // Only server needs collision

	// Initialize default values
	CurrentState = EFlagState::AtBase;
	Carrier = nullptr;
	BaseLocation = FVector::ZeroVector;
	ReturnTimer = 0.0f;
	DropTime = 0.0f;
	AutoReturnTime = 30.0f;
	InteractionRadius = 150.0f;
	ValidationTimer = 0.0f; // Fixed: Initialize per-instance timer

	// Bind overlap events
	InteractionSphere->OnComponentBeginOverlap.AddDynamic(this, &ACTFFlag::OnInteractionSphereBeginOverlap);
}

void ACTFFlag::BeginPlay()
{
	Super::BeginPlay();

	// Cache game state
	CachedGameState = GetWorld()->GetGameState<ACTFGameState>();
	
	// Register with game state
	if (HasAuthority() && IsValid(CachedGameState))
	{
		CachedGameState->RegisterFlag(this);
	}

	// Set base location to current location if not set
	if (HasAuthority() && BaseLocation.IsZero())
	{
		SetBaseLocation(GetActorLocation());
	}

	// Update interaction radius
	UpdateInteractionRadius();
}

void ACTFFlag::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (HasAuthority())
	{
		if (IsDropped())
		{
			UpdateReturnTimer(DeltaTime);
		}
		
		// Validate state periodically (every 5 seconds)
		// Fixed: Use per-instance timer instead of static
		ValidationTimer += DeltaTime;
		if (ValidationTimer >= 5.0f)
		{
			ValidateState();
			ValidationTimer = 0.0f;
		}
	}
}

void ACTFFlag::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACTFFlag, CurrentState);
	DOREPLIFETIME(ACTFFlag, Carrier);
	DOREPLIFETIME(ACTFFlag, BaseLocation);
	DOREPLIFETIME(ACTFFlag, ReturnTimer);
	DOREPLIFETIME(ACTFFlag, OwningTeam);
}

void ACTFFlag::SetFlagState(EFlagState NewState)
{
	if (!HasAuthority() || CurrentState == NewState)
	{
		return;
	}

	const EFlagState OldState = CurrentState;
	CurrentState = NewState;

	// Handle state change logic
	switch (NewState)
	{
		case EFlagState::AtBase:
			DetachFromCarrier();
			SetActorLocation(BaseLocation);
			ReturnTimer = 0.0f;
			break;

		case EFlagState::Carried:
			AttachToCarrier();
			ReturnTimer = 0.0f;
			break;

		case EFlagState::Dropped:
			DetachFromCarrier();
			DropTime = GetWorld()->GetTimeSeconds();
			ReturnTimer = AutoReturnTime;
			break;
	}

	OnStateChanged(OldState, NewState);
}

bool ACTFFlag::CanBePickedUpBy(const ACTFPlayerState* Player) const
{
	if (!IsValid(Player) || !IsValid(CachedGameState))
	{
		return false;
	}

	// Flag must be available (at base or dropped)
	if (IsCarried())
	{
		return false;
	}

	// Player must be alive and have a valid pawn
	if (!IsValid(Player->GetPawn()) || Player->GetPawn()->IsPendingKillPending())
	{
		return false;
	}

	// Player cannot already be carrying a flag
	if (Player->HasFlag())
	{
		return false;
	}

	// Game must be in progress
	if (!CachedGameState->IsMatchInProgress())
	{
		return false;
	}

	// Player must be on a team
	const ETeam PlayerTeam = Player->GetTeam();
	return (PlayerTeam == ETeam::Red || PlayerTeam == ETeam::Blue);
}

bool ACTFFlag::TryPickUp(ACTFPlayerState* Player)
{
	// Fixed: Add authority check
	if (!HasAuthority())
	{
		UE_LOG(LogTemp, Warning, TEXT("TryPickUp called on client - authority required"));
		return false;
	}

	// Use new validation system
	if (!ValidateCapture(Player))
	{
		return false;
	}

	// Set carrier and change state
	SetCarrier(Player);
	SetFlagState(EFlagState::Carried);

	// Broadcast events
	OnFlagPickedUp.Broadcast(this, Player);
	OnPickedUpEvent(Player);

	UE_LOG(LogTemp, Log, TEXT("Flag picked up by player %s from team %d"), 
		   *Player->GetName(), static_cast<int32>(Player->GetTeam()));

	return true;
}

void ACTFFlag::OnDropped(ACTFPlayerState* DroppingPlayer)
{
	if (!HasAuthority())
	{
		return;
	}

	const FVector DropLocation = GetActorLocation();

	// Clear carrier and change state
	SetCarrier(nullptr);
	SetFlagState(EFlagState::Dropped);

	// Broadcast events
	if (IsValid(CachedGameState))
	{
		CachedGameState->OnFlagDropped(DroppingPlayer, DropLocation);
	}

	OnFlagDropped.Broadcast(this, DropLocation);
	OnDroppedEvent(DropLocation);
}

void ACTFFlag::ReturnToBase()
{
	if (!HasAuthority())
	{
		return;
	}

	// Clear carrier and change state
	SetCarrier(nullptr);
	SetFlagState(EFlagState::AtBase);

	// Broadcast events
	if (IsValid(CachedGameState))
	{
		CachedGameState->OnFlagReturned(OwningTeam);
	}

	OnFlagReturned.Broadcast(this);
	OnReturnedEvent();
}

void ACTFFlag::ReturnToCenter()
{
	if (!HasAuthority())
	{
		return;
	}

	UE_LOG(LogTemp, Log, TEXT("Flag returning to center (CTF rule compliance)"));
	
	// Clear carrier and change state
	SetCarrier(nullptr);
	SetFlagState(EFlagState::AtBase);

	// Broadcast events
	if (IsValid(CachedGameState))
	{
		CachedGameState->OnFlagReturned(ETeam::None); // None = center
	}

	OnFlagReturned.Broadcast(this);
	OnReturnedEvent();
}

bool ACTFFlag::TryCapture(ACTFPlayerState* CapturingPlayer)
{
	if (!HasAuthority() || !IsValid(CapturingPlayer) || !IsValid(CachedGameState))
	{
		return false;
	}

	// Flag must be carried by the capturing player
	if (!IsCarried() || GetCarrier() != CapturingPlayer)
	{
		return false;
	}

	const ETeam CapturingTeam = CapturingPlayer->GetTeam();

	// Add capture stat and team score
	CapturingPlayer->AddCapture();
	CachedGameState->OnFlagCaptured(CapturingTeam, CapturingPlayer);

	// Return flag to base
	ReturnToBase();

	// Broadcast events
	OnFlagCaptured.Broadcast(this, CapturingTeam, CapturingPlayer);
	OnCapturedEvent(CapturingTeam, CapturingPlayer);

	return true;
}

void ACTFFlag::SetCarrier(ACTFPlayerState* NewCarrier)
{
	if (!HasAuthority())
	{
		return;
	}

	// Clear old carrier
	if (IsValid(Carrier))
	{
		Carrier->SetCarriedFlag(nullptr);
		
		// Remove flag carrier effect
		if (IsValid(FlagCarrierEffect) && IsValid(Carrier->GetAbilitySystemComponent()))
		{
			Carrier->GetAbilitySystemComponent()->RemoveActiveGameplayEffectBySourceEffect(
				FlagCarrierEffect, Carrier->GetAbilitySystemComponent()
			);
		}
	}

	Carrier = NewCarrier;

	// Set new carrier
	if (IsValid(Carrier))
	{
		Carrier->SetCarriedFlag(this);
		
		// Apply flag carrier effect
		if (IsValid(FlagCarrierEffect) && IsValid(Carrier->GetAbilitySystemComponent()))
		{
			const FGameplayEffectContextHandle EffectContext = Carrier->GetAbilitySystemComponent()->MakeEffectContext();
			const FGameplayEffectSpecHandle SpecHandle = Carrier->GetAbilitySystemComponent()->MakeOutgoingSpec(
				FlagCarrierEffect, 1.0f, EffectContext
			);
			
			if (SpecHandle.IsValid())
			{
				Carrier->GetAbilitySystemComponent()->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
			}
		}
	}
}

void ACTFFlag::SetBaseLocation(const FVector& Location)
{
	if (HasAuthority())
	{
		BaseLocation = Location;
		
		if (IsAtBase())
		{
			SetActorLocation(BaseLocation);
		}
	}
}

float ACTFFlag::GetDistanceFromBase() const
{
	return FVector::Dist(GetActorLocation(), BaseLocation);
}

float ACTFFlag::GetReturnProgress() const
{
	if (AutoReturnTime <= 0.0f)
	{
		return 0.0f;
	}

	return 1.0f - (ReturnTimer / AutoReturnTime);
}

void ACTFFlag::ResetFlag()
{
	if (HasAuthority())
	{
		SetCarrier(nullptr);
		SetFlagState(EFlagState::AtBase);
	}
}

void ACTFFlag::UpdateReturnTimer(float DeltaTime)
{
	if (IsDropped() && ReturnTimer > 0.0f)
	{
		ReturnTimer -= DeltaTime;
		
		if (ReturnTimer <= 0.0f)
		{
			ReturnToBase();
		}
	}
}

void ACTFFlag::AttachToCarrier()
{
	if (IsValid(Carrier) && IsValid(Carrier->GetPawn()))
	{
		if (ACharacter* CarrierCharacter = Cast<ACharacter>(Carrier->GetPawn()))
		{
			// Attach to character's mesh (could be customized per character type)
			FAttachmentTransformRules AttachRules(EAttachmentRule::SnapToTarget, false);
			AttachToComponent(CarrierCharacter->GetMesh(), AttachRules, TEXT("hand_r"));
		}
	}
}

void ACTFFlag::DetachFromCarrier()
{
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
}

void ACTFFlag::UpdateInteractionRadius()
{
	if (IsValid(InteractionSphere))
	{
		InteractionSphere->SetSphereRadius(InteractionRadius);
	}
}

void ACTFFlag::OnInteractionSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
											  UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
											  bool bFromSweep, const FHitResult& SweepResult)
{
	if (!HasAuthority() || !IsValid(OtherActor))
	{
		return;
	}

	// Try to get player state from the overlapping actor
	APawn* OverlappingPawn = Cast<APawn>(OtherActor);
	if (!IsValid(OverlappingPawn))
	{
		return;
	}

	ACTFPlayerState* PlayerState = OverlappingPawn->GetPlayerState<ACTFPlayerState>();
	if (!IsValid(PlayerState))
	{
		return;
	}

	// Try to pick up the flag
	TryPickUp(PlayerState);
}

// Replication Functions
void ACTFFlag::OnRep_FlagState()
{
	// Handle visual changes based on state
	switch (CurrentState)
	{
		case EFlagState::AtBase:
			SetActorLocation(BaseLocation);
			SetActorHiddenInGame(false);
			break;

		case EFlagState::Carried:
			AttachToCarrier();
			SetActorHiddenInGame(false);
			break;

		case EFlagState::Dropped:
			DetachFromCarrier();
			SetActorHiddenInGame(false);
			break;
	}
}

void ACTFFlag::OnRep_Carrier()
{
	if (IsCarried())
	{
		AttachToCarrier();
	}
	else
	{
		DetachFromCarrier();
	}
}

void ACTFFlag::OnRep_ReturnTimer()
{
	// Return timer replicated for UI purposes
}

// Validation Functions
bool ACTFFlag::ValidateCapture(ACTFPlayerState* Player) const
{
	// Authority validation
	if (!HasAuthority())
	{
		UE_LOG(LogTemp, Warning, TEXT("ValidateCapture: No authority"));
		return false;
	}
	
	// Player validation - Enhanced
	if (!IsValid(Player) || !Player->IsValidLowLevel())
	{
		UE_LOG(LogTemp, Warning, TEXT("ValidateCapture: Invalid or destroyed player"));
		return false;
	}

	// Player must have valid pawn
	if (!IsValid(Player->GetPawn()) || Player->GetPawn()->IsPendingKillPending())
	{
		UE_LOG(LogTemp, Warning, TEXT("ValidateCapture: Player has no valid pawn"));
		return false;
	}
	
	// Team validation - player must be from valid team
	const ETeam PlayerTeam = Player->GetTeam();
	if (PlayerTeam == ETeam::None || PlayerTeam == ETeam::Spectator)
	{
		UE_LOG(LogTemp, Warning, TEXT("ValidateCapture: Player not on valid team: %d"), static_cast<int32>(PlayerTeam));
		return false;
	}
	
	// For neutral flag, any team can pick up
	// For team-owned flag, only enemy team can pick up
	if (OwningTeam != ETeam::None && PlayerTeam == OwningTeam)
	{
		UE_LOG(LogTemp, Warning, TEXT("ValidateCapture: Player cannot pick up own team flag - Player: %d, Flag: %d"), 
			   static_cast<int32>(PlayerTeam), static_cast<int32>(OwningTeam));
		return false;
	}
	
	// State validation - flag must be pickupable
	if (CurrentState == EFlagState::Carried)
	{
		UE_LOG(LogTemp, Warning, TEXT("ValidateCapture: Flag already carried by %s"), 
			   IsValid(Carrier) ? *Carrier->GetPlayerName() : TEXT("Unknown"));
		return false;
	}
	
	// Player must not already have a flag
	if (Player->HasFlag())
	{
		UE_LOG(LogTemp, Warning, TEXT("ValidateCapture: Player %s already carrying flag"), *Player->GetPlayerName());
		return false;
	}

	// Game must be in progress
	if (IsValid(CachedGameState) && !CachedGameState->IsMatchInProgress())
	{
		UE_LOG(LogTemp, Warning, TEXT("ValidateCapture: Match not in progress"));
		return false;
	}
	
	return true;
}

void ACTFFlag::ValidateState()
{
	if (!HasAuthority())
	{
		return;
	}
	
	// Check for invalid carried state
	if (CurrentState == EFlagState::Carried)
	{
		if (!IsValid(Carrier) || !Carrier->IsValidLowLevel())
		{
			UE_LOG(LogTemp, Warning, TEXT("Flag in invalid carried state - carrier is invalid. Returning to base."));
			SetCarrier(nullptr);
			ReturnToBase();
			return;
		}
		
		// Check if carrier still has this flag
		if (Carrier->GetCarriedFlag() != this)
		{
			UE_LOG(LogTemp, Warning, TEXT("Flag thinks it's carried but carrier doesn't have it. Returning to base."));
			SetCarrier(nullptr);
			ReturnToBase();
			return;
		}
	}
	
	// Check for invalid carrier when not carried
	if (CurrentState != EFlagState::Carried && IsValid(Carrier))
	{
		UE_LOG(LogTemp, Warning, TEXT("Flag has carrier but is not in carried state. Clearing carrier."));
		SetCarrier(nullptr);
	}
	
	// Validate base location
	if (CurrentState == EFlagState::AtBase && !BaseLocation.IsZero())
	{
		const float DistanceFromBase = FVector::Dist(GetActorLocation(), BaseLocation);
		if (DistanceFromBase > 100.0f) // Allow some tolerance
		{
			UE_LOG(LogTemp, Warning, TEXT("Flag at base but location incorrect. Teleporting to base."));
			SetActorLocation(BaseLocation);
		}
	}
}