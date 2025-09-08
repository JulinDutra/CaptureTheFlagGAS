// Copyright Epic Games, Inc. All Rights Reserved.

#include "Gameplay/CTFCaptureZone.h"
#include "Gameplay/CTFFlag.h"
#include "GameFramework/CTFPlayerState.h"
#include "GameFramework/CTFGameState.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Net/UnrealNetwork.h"
#include "Engine/World.h"

ACTFCaptureZone::ACTFCaptureZone()
{
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;
	SetReplicateMovement(false);

	// Create components
	RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
	RootComponent = RootSceneComponent;

	// Zone mesh for visual representation
	ZoneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ZoneMesh"));
	ZoneMesh->SetupAttachment(RootComponent);
	ZoneMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	ZoneMesh->SetCanEverAffectNavigation(false);

	// Capture collision sphere
	CaptureCollision = CreateDefaultSubobject<USphereComponent>(TEXT("CaptureCollision"));
	CaptureCollision->SetupAttachment(RootComponent);
	CaptureCollision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CaptureCollision->SetCollisionObjectType(ECC_WorldStatic);
	CaptureCollision->SetCollisionResponseToAllChannels(ECR_Ignore);
	CaptureCollision->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	CaptureCollision->SetSphereRadius(CaptureRadius);
	CaptureCollision->SetCanEverAffectNavigation(false);

	// Particle effect
	ZoneEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ZoneEffect"));
	ZoneEffect->SetupAttachment(RootComponent);
	ZoneEffect->SetAutoActivate(true);
}

void ACTFCaptureZone::BeginPlay()
{
	Super::BeginPlay();

	// Cache game state
	CachedGameState = GetWorld()->GetGameState<ACTFGameState>();

	// Update collision radius to match configuration
	if (IsValid(CaptureCollision))
	{
		CaptureCollision->SetSphereRadius(CaptureRadius);
	}

	// Bind overlap events
	if (IsValid(CaptureCollision))
	{
		CaptureCollision->OnComponentBeginOverlap.AddDynamic(this, &ACTFCaptureZone::OnCaptureCollisionBeginOverlap);
		CaptureCollision->OnComponentEndOverlap.AddDynamic(this, &ACTFCaptureZone::OnCaptureCollisionEndOverlap);
	}

	// Update visuals
	UpdateZoneVisuals();
}

void ACTFCaptureZone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACTFCaptureZone, PlayersInZone);
	DOREPLIFETIME(ACTFCaptureZone, OwningTeam);
}

bool ACTFCaptureZone::CanPlayerCapture(ACTFPlayerState* Player) const
{
	FString DummyReason;
	return ValidateCaptureConditions(Player, DummyReason);
}

bool ACTFCaptureZone::TryCapture(ACTFPlayerState* Player)
{
	if (!HasAuthority())
	{
		UE_LOG(LogTemp, Warning, TEXT("TryCapture called on client - authority required"));
		return false;
	}

	FString FailReason;
	if (!ValidateCaptureConditions(Player, FailReason))
	{
		UE_LOG(LogTemp, Warning, TEXT("Capture failed: %s"), *FailReason);
		OnCaptureFailed(Player, FailReason);
		return false;
	}

	// Get enemy flag and perform capture
	ACTFFlag* EnemyFlag = GetEnemyFlag();
	if (!IsValid(EnemyFlag))
	{
		OnCaptureFailed(Player, TEXT("Enemy flag not found"));
		return false;
	}

	// Award points to team
	if (IsValid(CachedGameState))
	{
		const ETeam PlayerTeam = Player->GetTeam();
		CachedGameState->AddTeamScore(PlayerTeam, 1);
		const int32 NewScore = CachedGameState->GetTeamScore(PlayerTeam);

		// Award capture to player
		Player->AddCapture();

		// Return flag to center (CTF rule compliance)
		EnemyFlag->ReturnToCenter();

		// Broadcast events
		OnFlagCaptured.Broadcast(PlayerTeam, Player, NewScore);
		OnCaptureSuccess(PlayerTeam, Player, NewScore);

		UE_LOG(LogTemp, Log, TEXT("Flag captured by %s for team %d! New score: %d"), 
			   *Player->GetName(), static_cast<int32>(PlayerTeam), NewScore);

		return true;
	}

	return false;
}

bool ACTFCaptureZone::IsPlayerInZone(ACTFPlayerState* Player) const
{
	return PlayersInZone.Contains(Player);
}

void ACTFCaptureZone::OnCaptureCollisionBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!HasAuthority())
	{
		return;
	}

	if (APawn* Pawn = Cast<APawn>(OtherActor))
	{
		if (ACTFPlayerState* PlayerState = Pawn->GetPlayerState<ACTFPlayerState>())
		{
			AddPlayerToZone(PlayerState);
		}
	}
}

void ACTFCaptureZone::OnCaptureCollisionEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (!HasAuthority())
	{
		return;
	}

	if (APawn* Pawn = Cast<APawn>(OtherActor))
	{
		if (ACTFPlayerState* PlayerState = Pawn->GetPlayerState<ACTFPlayerState>())
		{
			RemovePlayerFromZone(PlayerState);
		}
	}
}

void ACTFCaptureZone::AddPlayerToZone(ACTFPlayerState* Player)
{
	if (!IsValid(Player) || PlayersInZone.Contains(Player))
	{
		return;
	}

	PlayersInZone.Add(Player);
	
	OnPlayerEnteredZone.Broadcast(Player, OwningTeam);
	OnPlayerEntered(Player);
	
	UE_LOG(LogTemp, Warning, TEXT("Broadcasting OnPlayerEnteredZone for player %s, team %d"), 
		   *Player->GetName(), static_cast<int32>(OwningTeam));

	UE_LOG(LogTemp, Log, TEXT("Player %s entered %s capture zone"), 
		   *Player->GetName(), OwningTeam == ETeam::Red ? TEXT("Red") : TEXT("Blue"));
}

void ACTFCaptureZone::RemovePlayerFromZone(ACTFPlayerState* Player)
{
	if (!IsValid(Player) || !PlayersInZone.Contains(Player))
	{
		return;
	}

	PlayersInZone.Remove(Player);
	
	OnPlayerExitedZone.Broadcast(Player, OwningTeam);
	OnPlayerExited(Player);

	UE_LOG(LogTemp, Log, TEXT("Player %s exited %s capture zone"), 
		   *Player->GetName(), OwningTeam == ETeam::Red ? TEXT("Red") : TEXT("Blue"));
}

void ACTFCaptureZone::UpdateZoneVisuals()
{
	// Update mesh color/material based on team
	if (IsValid(ZoneMesh))
	{
		// This would be set up in Blueprint or with dynamic materials
		// ZoneMesh->SetMaterial(0, OwningTeam == ETeam::Red ? RedMaterial : BlueMaterial);
	}

	// Update particle effect
	if (IsValid(ZoneEffect))
	{
		// Configure effect based on team - would typically be done in Blueprint
	}
}

bool ACTFCaptureZone::ValidateCaptureConditions(ACTFPlayerState* Player, FString& OutReason) const
{
	// Basic player validation
	if (!IsValid(Player))
	{
		OutReason = TEXT("Invalid player");
		return false;
	}

	// Check if player is in the zone
	if (!IsPlayerInZone(Player))
	{
		OutReason = TEXT("Player not in capture zone");
		return false;
	}

	// Check team - player must be from enemy team
	const ETeam PlayerTeam = Player->GetTeam();
	if (PlayerTeam == OwningTeam || PlayerTeam == ETeam::None)
	{
		OutReason = FString::Printf(TEXT("Player team (%d) cannot capture own zone (%d)"), 
			static_cast<int32>(PlayerTeam), static_cast<int32>(OwningTeam));
		return false;
	}

	// Check if player has the flag (single flag CTF)
	if (bRequireEnemyFlag)
	{
		// In single flag CTF, anyone can carry the central flag
		if (!Player->HasFlag())
		{
			OutReason = TEXT("Player must be carrying the flag to capture");
			return false;
		}
		
		// Verify the player is actually carrying a flag
		ACTFFlag* CarriedFlag = Player->GetCarriedFlag();
		if (!IsValid(CarriedFlag))
		{
			OutReason = TEXT("Player's carried flag is invalid");
			return false;
		}
		
		UE_LOG(LogTemp, Log, TEXT("✅ Flag validation passed - player carrying flag"));
	}

	// Check if own flag is at base
	if (bRequireOwnFlagAtBase)
	{
		ACTFFlag* OwnFlag = GetOwnFlag();
		if (!IsValid(OwnFlag) || !OwnFlag->IsAtBase())
		{
			OutReason = TEXT("Own flag must be at base to capture");
			return false;
		}
	}

	// Check game state
	if (!IsValid(CachedGameState) || !CachedGameState->IsMatchInProgress())
	{
		OutReason = TEXT("Match not in progress");
		return false;
	}

	return true;
}

ACTFFlag* ACTFCaptureZone::GetEnemyFlag() const
{
	if (!IsValid(CachedGameState))
	{
		return nullptr;
	}

	// Get the flag belonging to this zone's team (enemy flag for capturing player)
	return CachedGameState->GetTeamFlag(OwningTeam);
}

ACTFFlag* ACTFCaptureZone::GetOwnFlag() const
{
	if (!IsValid(CachedGameState))
	{
		return nullptr;
	}

	// Get flag belonging to opposite team
	const ETeam OppositeTeam = (OwningTeam == ETeam::Red) ? ETeam::Blue : ETeam::Red;
	return CachedGameState->GetTeamFlag(OppositeTeam);
}