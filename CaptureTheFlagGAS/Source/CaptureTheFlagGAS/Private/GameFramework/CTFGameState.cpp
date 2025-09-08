// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameFramework/CTFGameState.h"
#include "GameFramework/CTFPlayerState.h"
#include "Gameplay/CTFFlag.h"
#include "Net/UnrealNetwork.h"
#include "Engine/World.h"
#include "GameFramework/GameMode.h"
#include "GameFramework/GameModeBase.h"

ACTFGameState::ACTFGameState()
{
	// TECHNICAL TEST - MINIMAL GAMESTATE
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;
	
	// Simple initialization
	CurrentGamePhase = EGamePhase::InProgress;  // Start directly in progress
	MatchStartTime = 0.0f;
	GameFlag = nullptr;
	
	UE_LOG(LogTemp, Error, TEXT("=== CTFGameState CREATED - SIMPLIFIED FOR TEST ==="));
}

void ACTFGameState::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Error, TEXT("CTFGameState BeginPlay - TECHNICAL TEST VERSION"));
	
	// Initialize simple team info
	RedTeamInfo.TeamName = FText::FromString("Red Team");
	RedTeamInfo.TeamColor = FLinearColor::Red;
	RedTeamInfo.Score = 0;
	RedTeamInfo.MaxPlayers = 16;
	
	BlueTeamInfo.TeamName = FText::FromString("Blue Team");
	BlueTeamInfo.TeamColor = FLinearColor::Blue;  
	BlueTeamInfo.Score = 0;
	BlueTeamInfo.MaxPlayers = 16;
	
	// Set game phase to in progress immediately
	SetGamePhase(EGamePhase::InProgress);
}

void ACTFGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(ACTFGameState, RedTeamInfo);
	DOREPLIFETIME(ACTFGameState, BlueTeamInfo);
	DOREPLIFETIME(ACTFGameState, CurrentGamePhase);
	DOREPLIFETIME(ACTFGameState, MatchStartTime);
	DOREPLIFETIME(ACTFGameState, GameConfig);
}

// Simplified essential functions only
void ACTFGameState::SetGamePhase(EGamePhase NewPhase)
{
	if (HasAuthority())
	{
		CurrentGamePhase = NewPhase;
		UE_LOG(LogTemp, Error, TEXT("GameState: Phase set to %d"), static_cast<int32>(NewPhase));
		GamePhaseChanged.Broadcast(NewPhase);
	}
}

const FTeamInfo& ACTFGameState::GetTeamInfo(ETeam Team) const
{
	switch (Team)
	{
		case ETeam::Red:
			return RedTeamInfo;
		case ETeam::Blue:
			return BlueTeamInfo;
		default:
			return RedTeamInfo; // Default fallback
	}
}

void ACTFGameState::SetGameConfig(const FGameConfig& NewConfig)
{
	if (HasAuthority())
	{
		GameConfig = NewConfig;
		UE_LOG(LogTemp, Warning, TEXT("GameState: Config set"));
	}
}

// Team management implementations
ETeam ACTFGameState::GetSmallestTeam() const 
{ 
	const int32 RedCount = GetTeamPlayerCount(ETeam::Red);
	const int32 BlueCount = GetTeamPlayerCount(ETeam::Blue);
	
	return (RedCount <= BlueCount) ? ETeam::Red : ETeam::Blue;
}

bool ACTFGameState::CanJoinTeam(ETeam Team) const 
{ 
	if (Team == ETeam::None || Team == ETeam::Spectator)
	{
		return true;
	}
	
	const int32 TeamCount = GetTeamPlayerCount(Team);
	const int32 MaxPlayers = (Team == ETeam::Red) ? RedTeamInfo.MaxPlayers : BlueTeamInfo.MaxPlayers;
	
	return TeamCount < MaxPlayers;
}

int32 ACTFGameState::GetTeamPlayerCount(ETeam Team) const 
{ 
	int32 Count = 0;
	
	for (APlayerState* PlayerState : PlayerArray)
	{
		if (ACTFPlayerState* CTFPlayerState = Cast<ACTFPlayerState>(PlayerState))
		{
			if (CTFPlayerState->GetTeam() == Team)
			{
				Count++;
			}
		}
	}
	
	return Count;
}

TArray<ACTFPlayerState*> ACTFGameState::GetPlayersOnTeam(ETeam Team) const 
{ 
	TArray<ACTFPlayerState*> TeamPlayers;
	
	for (APlayerState* PlayerState : PlayerArray)
	{
		if (ACTFPlayerState* CTFPlayerState = Cast<ACTFPlayerState>(PlayerState))
		{
			if (CTFPlayerState->GetTeam() == Team)
			{
				TeamPlayers.Add(CTFPlayerState);
			}
		}
	}
	
	return TeamPlayers;
}

void ACTFGameState::RegisterFlag(ACTFFlag* Flag) 
{ 
	if (IsValid(Flag))
	{
		GameFlag = Flag; 
		AllFlags.AddUnique(Flag);
		UE_LOG(LogTemp, Log, TEXT("Flag registered with GameState"));
	}
}

ACTFFlag* ACTFGameState::GetTeamFlag(ETeam Team) const 
{ 
	// For now, using single flag CTF
	return GameFlag; 
}

TArray<ACTFFlag*> ACTFGameState::GetAllFlags() const 
{ 
	TArray<ACTFFlag*> ValidFlags;
	for (ACTFFlag* Flag : AllFlags)
	{
		if (IsValid(Flag))
		{
			ValidFlags.Add(Flag);
		}
	}
	return ValidFlags; 
}

// Game event implementations
void ACTFGameState::OnFlagCaptured(ETeam CapturingTeam, ACTFPlayerState* CapturingPlayer) 
{
	if (!HasAuthority())
	{
		return;
	}
	
	// Add score to team
	AddTeamScore(CapturingTeam, 1);
	const int32 NewScore = GetTeamScore(CapturingTeam);
	
	// Broadcast events
	FlagCaptured.Broadcast(CapturingTeam, CapturingPlayer, NewScore);
	
	UE_LOG(LogTemp, Log, TEXT("Team %d scored! New score: %d"), static_cast<int32>(CapturingTeam), NewScore);
	
	// Check for match end
	CheckForMatchEnd();
}

void ACTFGameState::OnFlagDropped(ACTFPlayerState* DroppingPlayer, const FVector& DropLocation) 
{
	if (!HasAuthority())
	{
		return;
	}
	
	FlagDropped.Broadcast(DroppingPlayer, DropLocation);
	UE_LOG(LogTemp, Log, TEXT("Flag dropped by %s at location %s"), 
		   *DroppingPlayer->GetPlayerName(), *DropLocation.ToString());
}

void ACTFGameState::OnFlagReturned(ETeam Team) 
{
	if (!HasAuthority())
	{
		return;
	}
	
	FlagReturned.Broadcast(Team);
	UE_LOG(LogTemp, Log, TEXT("Team %d flag returned to base"), static_cast<int32>(Team));
}

void ACTFGameState::CheckForMatchEnd() 
{
	if (!HasAuthority())
	{
		return;
	}
	
	const int32 RedScore = GetTeamScore(ETeam::Red);
	const int32 BlueScore = GetTeamScore(ETeam::Blue);
	const int32 ScoreLimit = GameConfig.ScoreLimit;
	
	if (RedScore >= ScoreLimit || BlueScore >= ScoreLimit)
	{
		// Match should end - let the GameMode handle this
		if (AGameModeBase* GameModeBase = GetWorld()->GetAuthGameMode())
		{
			// Cast to AGameMode if possible
			if (AGameMode* GameMode = Cast<AGameMode>(GameModeBase))
			{
				UE_LOG(LogTemp, Log, TEXT("Score limit reached - requesting match end"));
				GameMode->EndMatch();
			}
		}
	}
}

void ACTFGameState::ResetMatch() 
{
	if (!HasAuthority())
	{
		return;
	}
	
	// Reset team scores
	SetTeamScore(ETeam::Red, 0);
	SetTeamScore(ETeam::Blue, 0);
	
	// Reset game phase
	SetGamePhase(EGamePhase::WaitingToStart);
	
	// Reset match start time
	MatchStartTime = GetWorld()->GetTimeSeconds();
	
	UE_LOG(LogTemp, Log, TEXT("Match reset"));
}

// Team score management
void ACTFGameState::SetTeamScore(ETeam Team, int32 NewScore)
{
	if (!HasAuthority())
	{
		return;
	}
	
	FTeamInfo& TeamInfo = GetMutableTeamInfo(Team);
	const int32 OldScore = TeamInfo.Score;
	TeamInfo.Score = FMath::Max(0, NewScore);
	
	if (OldScore != TeamInfo.Score)
	{
		ScoreChanged.Broadcast(Team, TeamInfo.Score);
		UE_LOG(LogTemp, Log, TEXT("Team %d score set to %d"), static_cast<int32>(Team), TeamInfo.Score);
	}
}

void ACTFGameState::AddTeamScore(ETeam Team, int32 ScoreToAdd)
{
	if (!HasAuthority())
	{
		return;
	}
	
	const int32 CurrentScore = GetTeamScore(Team);
	SetTeamScore(Team, CurrentScore + ScoreToAdd);
}

int32 ACTFGameState::GetTeamScore(ETeam Team) const
{
	const FTeamInfo& TeamInfo = GetTeamInfo(Team);
	return TeamInfo.Score;
}

float ACTFGameState::GetRemainingTime() const
{
	if (GameConfig.TimeLimit <= 0.0f)
	{
		return -1.0f; // No time limit
	}
	
	const float ElapsedGameTime = GetWorld()->GetTimeSeconds() - MatchStartTime;
	return FMath::Max(0.0f, GameConfig.TimeLimit - ElapsedGameTime);
}

ETeam ACTFGameState::GetWinningTeam() const
{
	const int32 RedScore = GetTeamScore(ETeam::Red);
	const int32 BlueScore = GetTeamScore(ETeam::Blue);
	
	if (RedScore > BlueScore)
	{
		return ETeam::Red;
	}
	else if (BlueScore > RedScore)
	{
		return ETeam::Blue;
	}
	
	return ETeam::None; // Tie
}

bool ACTFGameState::IsTeamWinning(ETeam Team) const
{
	return GetWinningTeam() == Team;
}

void ACTFGameState::OnPlayerDisconnected(ACTFPlayerState* Player)
{
	if (!IsValid(Player))
	{
		return;
	}
	
	// If player was carrying flag, drop it
	if (Player->HasFlag())
	{
		ACTFFlag* CarriedFlag = Player->GetCarriedFlag();
		if (IsValid(CarriedFlag))
		{
			CarriedFlag->OnDropped(Player);
		}
	}
	
	UE_LOG(LogTemp, Log, TEXT("Player %s disconnected"), *Player->GetPlayerName());
}

// Helper functions
void ACTFGameState::InitializeTeams()
{
	RedTeamInfo = FTeamInfo(FText::FromString("Red Team"), CTFTeamColors::RedTeam);
	BlueTeamInfo = FTeamInfo(FText::FromString("Blue Team"), CTFTeamColors::BlueTeam);
}

void ACTFGameState::UpdateTeamInfo()
{
	// Update team info based on current player counts and scores
}

FTeamInfo& ACTFGameState::GetMutableTeamInfo(ETeam Team)
{
	switch (Team)
	{
		case ETeam::Red:
			return RedTeamInfo;
		case ETeam::Blue:
			return BlueTeamInfo;
		default:
			return RedTeamInfo; // Default fallback
	}
}

// Replication functions
void ACTFGameState::OnRep_RedTeamInfo()
{
	// Handle UI updates for red team info changes
}

void ACTFGameState::OnRep_BlueTeamInfo()
{
	// Handle UI updates for blue team info changes
}

void ACTFGameState::OnRep_GamePhase()
{
	GamePhaseChanged.Broadcast(CurrentGamePhase);
}