// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameFramework/CTFPlayerController.h"
#include "Components/CTFPlayerComponent.h"
#include "Gameplay/CTFFlag.h"
#include "Gameplay/CTFCaptureZone.h"
#include "GameFramework/CTFPlayerState.h"
#include "GameFramework/Pawn.h"
#include "Engine/World.h"

ACTFPlayerController::ACTFPlayerController()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ACTFPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	// Cache player component when ready
	if (IsValid(GetPawn()))
	{
		CachePlayerComponent();
	}
}

void ACTFPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// Bind CTF-specific inputs - can be overridden in Blueprint
	if (IsValid(InputComponent))
	{
		// These can be bound to Enhanced Input in Blueprint or overridden
		InputComponent->BindAction("Interact", IE_Pressed, this, &ACTFPlayerController::HandleInteractPressed);
		InputComponent->BindAction("DropFlag", IE_Pressed, this, &ACTFPlayerController::HandleDropFlagPressed);
	}
}

void ACTFPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	
	// Cache component reference when possessing pawn
	CachePlayerComponent();
}

void ACTFPlayerController::OnUnPossess()
{
	// Clean up event bindings
	UnbindFromPlayerComponentEvents();
	CachedPlayerComponent = nullptr;
	bIsInitialized = false;
	
	Super::OnUnPossess();
}

void ACTFPlayerController::HandleInteractPressed()
{
	if (IsValid(CachedPlayerComponent))
	{
		CachedPlayerComponent->DoInteract();
	}
}

void ACTFPlayerController::HandleDropFlagPressed()
{
	if (IsValid(CachedPlayerComponent))
	{
		CachedPlayerComponent->DropFlag();
	}
}

bool ACTFPlayerController::HasFlag() const
{
	return IsValid(CachedPlayerComponent) ? CachedPlayerComponent->HasFlag() : false;
}

ACTFFlag* ACTFPlayerController::GetCarriedFlag() const
{
	return IsValid(CachedPlayerComponent) ? CachedPlayerComponent->GetCarriedFlag() : nullptr;
}

ETeam ACTFPlayerController::GetTeam() const
{
	return IsValid(CachedPlayerComponent) ? CachedPlayerComponent->GetTeam() : ETeam::None;
}

bool ACTFPlayerController::IsInCaptureZone() const
{
	return IsValid(CachedPlayerComponent) ? CachedPlayerComponent->IsInCaptureZone() : false;
}

ACTFCaptureZone* ACTFPlayerController::GetCurrentCaptureZone() const
{
	return IsValid(CachedPlayerComponent) ? CachedPlayerComponent->GetCurrentCaptureZone() : nullptr;
}

float ACTFPlayerController::GetHealth() const
{
	return IsValid(CachedPlayerComponent) ? CachedPlayerComponent->GetHealth() : 0.0f;
}

float ACTFPlayerController::GetHealthPercentage() const
{
	return IsValid(CachedPlayerComponent) ? CachedPlayerComponent->GetHealthPercentage() : 0.0f;
}

bool ACTFPlayerController::IsAlive() const
{
	return IsValid(CachedPlayerComponent) ? CachedPlayerComponent->IsAlive() : false;
}

ACTFFlag* ACTFPlayerController::FindNearestInteractableFlag(float MaxDistance) const
{
	return IsValid(CachedPlayerComponent) ? CachedPlayerComponent->FindNearestInteractableFlag(MaxDistance) : nullptr;
}

FString ACTFPlayerController::GetInteractionPrompt() const
{
	if (!IsValid(CachedPlayerComponent))
	{
		return FString();
	}

	// Check if in capture zone and can capture
	if (IsInCaptureZone() && CachedPlayerComponent->CanCaptureFlag())
	{
		return FString(TEXT("Press [E] to Capture Flag"));
	}

	// Check for nearby flags
	if (ACTFFlag* NearbyFlag = FindNearestInteractableFlag(InteractionDistance))
	{
		const FString FlagTeam = (NearbyFlag->GetOwningTeam() == ETeam::Red) ? TEXT("Red") : TEXT("Blue");
		return FString::Printf(TEXT("Press [E] to Pick Up %s Flag"), *FlagTeam);
	}

	// Check if has flag and can drop
	if (HasFlag())
	{
		return FString(TEXT("Press [Q] to Drop Flag"));
	}

	return FString();
}

ACTFPlayerState* ACTFPlayerController::GetCTFPlayerState() const
{
	return GetPlayerState<ACTFPlayerState>();
}

void ACTFPlayerController::CachePlayerComponent()
{
	if (!IsValid(GetPawn()))
	{
		return;
	}

	// Try to get CTF player component from pawn
	UCTFPlayerComponent* PlayerComp = GetPawn()->FindComponentByClass<UCTFPlayerComponent>();
	if (IsValid(PlayerComp))
	{
		CachedPlayerComponent = PlayerComp;
		BindToPlayerComponentEvents();
		bIsInitialized = true;
		
		UE_LOG(LogTemp, Log, TEXT("CTFPlayerController cached player component for %s"), *GetPawn()->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("CTFPlayerController could not find CTFPlayerComponent on pawn %s"), 
			   *GetPawn()->GetName());
		
		// Try again next tick
		GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
		{
			CachePlayerComponent();
		});
	}
}

void ACTFPlayerController::BindToPlayerComponentEvents()
{
	if (!IsValid(CachedPlayerComponent))
	{
		return;
	}

	// Bind to player component events
	CachedPlayerComponent->OnFlagPickedUp.AddDynamic(this, &ACTFPlayerController::HandleFlagPickedUp);
	CachedPlayerComponent->OnFlagDropped.AddDynamic(this, &ACTFPlayerController::HandleFlagDropped);
	CachedPlayerComponent->OnEnteredCaptureZone.AddDynamic(this, &ACTFPlayerController::HandleEnteredCaptureZone);
	CachedPlayerComponent->OnExitedCaptureZone.AddDynamic(this, &ACTFPlayerController::HandleExitedCaptureZone);
	CachedPlayerComponent->OnTeamChanged.AddDynamic(this, &ACTFPlayerController::HandleTeamChanged);
	CachedPlayerComponent->OnHealthChanged.AddDynamic(this, &ACTFPlayerController::HandleHealthChanged);
}

void ACTFPlayerController::UnbindFromPlayerComponentEvents()
{
	if (!IsValid(CachedPlayerComponent))
	{
		return;
	}

	// Unbind from player component events
	CachedPlayerComponent->OnFlagPickedUp.RemoveDynamic(this, &ACTFPlayerController::HandleFlagPickedUp);
	CachedPlayerComponent->OnFlagDropped.RemoveDynamic(this, &ACTFPlayerController::HandleFlagDropped);
	CachedPlayerComponent->OnEnteredCaptureZone.RemoveDynamic(this, &ACTFPlayerController::HandleEnteredCaptureZone);
	CachedPlayerComponent->OnExitedCaptureZone.RemoveDynamic(this, &ACTFPlayerController::HandleExitedCaptureZone);
	CachedPlayerComponent->OnTeamChanged.RemoveDynamic(this, &ACTFPlayerController::HandleTeamChanged);
	CachedPlayerComponent->OnHealthChanged.RemoveDynamic(this, &ACTFPlayerController::HandleHealthChanged);
}

void ACTFPlayerController::HandleFlagPickedUp(ACTFFlag* Flag)
{
	UE_LOG(LogTemp, Log, TEXT("Player %s picked up flag"), *GetName());
	
	// Broadcast Blueprint event
	OnFlagPickedUpEvent(Flag);
}

void ACTFPlayerController::HandleFlagDropped(ACTFFlag* Flag)
{
	UE_LOG(LogTemp, Log, TEXT("Player %s dropped flag"), *GetName());
	
	// Broadcast Blueprint event
	OnFlagDroppedEvent(Flag);
}

void ACTFPlayerController::HandleEnteredCaptureZone(ACTFCaptureZone* Zone)
{
	if (IsValid(Zone))
	{
		const FString ZoneTeam = (Zone->GetOwningTeam() == ETeam::Red) ? TEXT("Red") : TEXT("Blue");
		UE_LOG(LogTemp, Log, TEXT("Player %s entered %s capture zone"), *GetName(), *ZoneTeam);
	}
	
	// Broadcast Blueprint event
	OnEnteredCaptureZoneEvent(Zone);
}

void ACTFPlayerController::HandleExitedCaptureZone(ACTFCaptureZone* Zone)
{
	if (IsValid(Zone))
	{
		const FString ZoneTeam = (Zone->GetOwningTeam() == ETeam::Red) ? TEXT("Red") : TEXT("Blue");
		UE_LOG(LogTemp, Log, TEXT("Player %s exited %s capture zone"), *GetName(), *ZoneTeam);
	}
	
	// Broadcast Blueprint event
	OnExitedCaptureZoneEvent(Zone);
}

void ACTFPlayerController::HandleTeamChanged(ETeam OldTeam, ETeam NewTeam)
{
	const FString OldTeamStr = (OldTeam == ETeam::Red) ? TEXT("Red") : (OldTeam == ETeam::Blue) ? TEXT("Blue") : TEXT("None");
	const FString NewTeamStr = (NewTeam == ETeam::Red) ? TEXT("Red") : (NewTeam == ETeam::Blue) ? TEXT("Blue") : TEXT("None");
	
	UE_LOG(LogTemp, Log, TEXT("Player %s team changed from %s to %s"), *GetName(), *OldTeamStr, *NewTeamStr);
	
	// Broadcast Blueprint event
	OnTeamChangedEvent(OldTeam, NewTeam);
}

void ACTFPlayerController::HandleHealthChanged(float OldHealth, float NewHealth)
{
	UE_LOG(LogTemp, VeryVerbose, TEXT("Player %s health changed from %.1f to %.1f"), *GetName(), OldHealth, NewHealth);
	
	// Broadcast Blueprint event
	OnHealthChangedEvent(OldHealth, NewHealth);
}