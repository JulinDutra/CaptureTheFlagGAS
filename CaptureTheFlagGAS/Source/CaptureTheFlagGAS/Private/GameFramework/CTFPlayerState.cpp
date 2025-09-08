// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameFramework/CTFPlayerState.h"
#include "GameFramework/CTFGameState.h"
#include "Gameplay/CTFFlag.h"
#include "GAS/CTFAttributeSet.h"
#include "AbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"
#include "Engine/World.h"

ACTFPlayerState::ACTFPlayerState()
{
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;
	SetNetUpdateFrequency(100.0f);

	// Initialize default values
	CurrentTeam = ETeam::None;
	PreviousTeam = ETeam::None;
	CarriedFlag = nullptr;
	RespawnTime = 0.0f;
	FlagPickupTime = 0.0f;

	// Create Ability System Components
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UCTFAttributeSet>(TEXT("AttributeSet"));

	// Initialize stats
	PlayerStats.Reset();
}

void ACTFPlayerState::BeginPlay()
{
	Super::BeginPlay();
	InitializeAbilitySystem();
}

void ACTFPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACTFPlayerState, CurrentTeam);
	DOREPLIFETIME(ACTFPlayerState, PreviousTeam); // Fixed: Replicate PreviousTeam
	DOREPLIFETIME(ACTFPlayerState, PlayerStats);
	DOREPLIFETIME(ACTFPlayerState, CarriedFlag);
	DOREPLIFETIME(ACTFPlayerState, RespawnTime);
}

UAbilitySystemComponent* ACTFPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

void ACTFPlayerState::InitializeAbilitySystem()
{
	if (AbilitySystemComponent && AttributeSet)
	{
		AbilitySystemComponent->InitStats(UCTFAttributeSet::StaticClass(), nullptr);
	}
}

void ACTFPlayerState::SetTeam(ETeam NewTeam)
{
	if (!HasAuthority())
	{
		return;
	}

	if (CurrentTeam != NewTeam)
	{
		PreviousTeam = CurrentTeam;
		CurrentTeam = NewTeam;
		TeamChanged.Broadcast(PreviousTeam, NewTeam);
	}
}

bool ACTFPlayerState::IsOnSameTeam(const ACTFPlayerState* OtherPlayer) const
{
	if (!IsValid(OtherPlayer) || CurrentTeam == ETeam::None || CurrentTeam == ETeam::Spectator)
	{
		return false;
	}

	return CurrentTeam == OtherPlayer->GetTeam();
}

bool ACTFPlayerState::IsEnemyOf(const ACTFPlayerState* OtherPlayer) const
{
	if (!IsValid(OtherPlayer) || CurrentTeam == ETeam::None || CurrentTeam == ETeam::Spectator)
	{
		return false;
	}

	const ETeam OtherTeam = OtherPlayer->GetTeam();
	return (OtherTeam != ETeam::None && OtherTeam != ETeam::Spectator && CurrentTeam != OtherTeam);
}

FLinearColor ACTFPlayerState::GetTeamColor() const
{
	switch (CurrentTeam)
	{
		case ETeam::Red:
			return CTFTeamColors::RedTeam;
		case ETeam::Blue:
			return CTFTeamColors::BlueTeam;
		default:
			return CTFTeamColors::NeutralColor;
	}
}

void ACTFPlayerState::AddCapture()
{
	if (!HasAuthority())
	{
		return;
	}

	PlayerStats.Captures++;
	UpdateStats();
}

void ACTFPlayerState::AddReturn()
{
	if (!HasAuthority())
	{
		return;
	}

	PlayerStats.Returns++;
	UpdateStats();
}

void ACTFPlayerState::AddKill()
{
	if (!HasAuthority())
	{
		return;
	}

	PlayerStats.Kills++;
	UpdateStats();
}

void ACTFPlayerState::AddDeath()
{
	if (!HasAuthority())
	{
		return;
	}

	PlayerStats.Deaths++;
	UpdateStats();

	// Drop flag if carrying one
	if (HasFlag())
	{
		DropFlag();
	}
}

void ACTFPlayerState::AddFlagTime(float TimeWithFlag)
{
	if (!HasAuthority())
	{
		return;
	}

	PlayerStats.TimeWithFlag += TimeWithFlag;
	UpdateStats();
}

void ACTFPlayerState::ResetStats()
{
	if (!HasAuthority())
	{
		return;
	}

	PlayerStats.Reset();
	UpdateStats();
}

void ACTFPlayerState::UpdateStats()
{
	StatsChanged.Broadcast(PlayerStats);
}

void ACTFPlayerState::SetCarriedFlag(ACTFFlag* Flag)
{
	if (!HasAuthority())
	{
		return;
	}

	const bool bWasCarrying = HasFlag();
	CarriedFlag = Flag;
	const bool bIsCarrying = HasFlag();

	if (bWasCarrying != bIsCarrying)
	{
		FlagStatusChanged.Broadcast(bIsCarrying);

		if (bIsCarrying)
		{
			FlagPickupTime = GetWorld()->GetTimeSeconds();
		}
		else if (bWasCarrying && !bIsCarrying)
		{
			// Calculate time with flag
			const float TimeWithFlag = GetWorld()->GetTimeSeconds() - FlagPickupTime;
			AddFlagTime(TimeWithFlag);
		}
	}
}

void ACTFPlayerState::DropFlag()
{
	if (!HasAuthority() || !HasFlag())
	{
		return;
	}

	if (IsValid(CarriedFlag))
	{
		CarriedFlag->OnDropped(this);
	}

	SetCarriedFlag(nullptr);
}

void ACTFPlayerState::SetRespawnTime(float Time)
{
	if (!HasAuthority())
	{
		return;
	}

	RespawnTime = Time;
}

bool ACTFPlayerState::CanRespawn() const
{
	return GetRespawnCountdown() <= 0.0f;
}

float ACTFPlayerState::GetRespawnCountdown() const
{
	if (RespawnTime <= 0.0f)
	{
		return 0.0f;
	}

	const float CurrentTime = GetWorld()->GetTimeSeconds();
	return FMath::Max(0.0f, RespawnTime - CurrentTime);
}

float ACTFPlayerState::GetKillDeathRatio() const
{
	if (PlayerStats.Deaths == 0)
	{
		return PlayerStats.Kills > 0 ? static_cast<float>(PlayerStats.Kills) : 0.0f;
	}

	return static_cast<float>(PlayerStats.Kills) / static_cast<float>(PlayerStats.Deaths);
}

int32 ACTFPlayerState::GetTotalScore() const
{
	// Weighted scoring: Captures are worth more than kills
	return (PlayerStats.Captures * 10) + (PlayerStats.Returns * 5) + PlayerStats.Kills;
}

bool ACTFPlayerState::IsAlive() const
{
	return !GetPawn() || !GetPawn()->IsPendingKillPending();
}

void ACTFPlayerState::OnPlayerKilled()
{
	if (!HasAuthority())
	{
		return;
	}

	AddDeath();

	// Set respawn timer
	if (const ACTFGameState* CTFGameState = GetWorld()->GetGameState<ACTFGameState>())
	{
		const float RespawnDelay = CTFGameState->GetGameConfig().RespawnDelay;
		SetRespawnTime(GetWorld()->GetTimeSeconds() + RespawnDelay);
	}
}

void ACTFPlayerState::OnPlayerRespawned()
{
	if (!HasAuthority())
	{
		return;
	}

	SetRespawnTime(0.0f);
}

void ACTFPlayerState::HandlePlayerDeath()
{
	if (!HasAuthority())
	{
		return;
	}

	UE_LOG(LogTemp, Log, TEXT("HandlePlayerDeath called for %s"), *GetPlayerName());
	
	// CTF Rule: When a player dies, they drop the flag at their current location
	if (HasFlag())
	{
		UE_LOG(LogTemp, Log, TEXT("Player %s died with flag - auto-dropping at death location"), *GetPlayerName());
		
		// Get player's death location
		FVector DeathLocation = FVector::ZeroVector;
		if (APawn* PlayerPawn = GetPawn())
		{
			DeathLocation = PlayerPawn->GetActorLocation();
		}
		
		// Drop the flag at death location
		if (ACTFFlag* Flag = GetCarriedFlag())
		{
			// Set flag location to death location before dropping
			Flag->SetActorLocation(DeathLocation);
			Flag->OnDropped(this);
		}
		
		// Clear carried flag reference
		SetCarriedFlag(nullptr);
	}

	// Call original death handling
	OnPlayerKilled();
}

// Replication Functions
void ACTFPlayerState::OnRep_Team()
{
	// Fixed: Don't overwrite PreviousTeam - it's now replicated
	TeamChanged.Broadcast(PreviousTeam, CurrentTeam);
	UE_LOG(LogTemp, Log, TEXT("Team changed from %d to %d for player %s"), 
		   static_cast<int32>(PreviousTeam), static_cast<int32>(CurrentTeam), *GetPlayerName());
}

void ACTFPlayerState::OnRep_Stats()
{
	StatsChanged.Broadcast(PlayerStats);
}

void ACTFPlayerState::OnRep_CarriedFlag()
{
	FlagStatusChanged.Broadcast(HasFlag());
}

void ACTFPlayerState::OnRep_RespawnTime()
{
	// Respawn time changed, no specific action needed on client
}