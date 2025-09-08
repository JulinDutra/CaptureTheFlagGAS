// Copyright Epic Games, Inc. All Rights Reserved.

#include "CaptureTheFlagGASGameMode.h"
#include "GameFramework/CTFGameState.h"
#include "GameFramework/CTFPlayerState.h"
#include "GameFramework/CTFPlayerController.h"
#include "CaptureTheFlagGASCharacter.h"
#include "Gameplay/CTFFlag.h"
#include "Engine/World.h"
#include "GameFramework/PlayerStart.h"
#include "EngineUtils.h"

ACaptureTheFlagGASGameMode::ACaptureTheFlagGASGameMode()
{
	// Set default classes - SIMPLIFIED
	GameStateClass = ACTFGameState::StaticClass();
	PlayerStateClass = ACTFPlayerState::StaticClass();
	PlayerControllerClass = ACTFPlayerController::StaticClass();
	DefaultPawnClass = ACaptureTheFlagGASCharacter::StaticClass();
	
	// TECHNICAL TEST - Minimal settings
	MinPlayersToStart = 1;
	bAutoBalanceTeams = false;
	bAllowSpectators = true;
}

void ACaptureTheFlagGASGameMode::BeginPlay()
{
	Super::BeginPlay();
	
	// Cache game state reference
	CTFGameState = GetGameState<ACTFGameState>();
	
	// Cache player starts
	CachePlayerStarts();
	
	// Initialize flags if configured
	if (IsValid(FlagClass) && !FlagSpawnLocation.IsZero())
	{
		InitializeFlags();
	}
	
	UE_LOG(LogTemp, Log, TEXT("CTF GameMode initialized"));
}

void ACaptureTheFlagGASGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	
	ACTFPlayerState* PlayerState = NewPlayer->GetPlayerState<ACTFPlayerState>();
	if (IsValid(PlayerState))
	{
		// Assign player to team
		ETeam SelectedTeam = SelectTeamForPlayer(PlayerState);
		
		// Handle failed team selection
		if (SelectedTeam == ETeam::None)
		{
			UE_LOG(LogTemp, Warning, TEXT("Failed to select team for player - assigning to Red as fallback"));
			SelectedTeam = ETeam::Red;
		}
		
		AssignPlayerToTeam(PlayerState, SelectedTeam);
		
		// Balance teams if enabled
		if (bAutoBalanceTeams)
		{
			BalanceTeams();
		}
	}
	
	UE_LOG(LogTemp, Log, TEXT("PostLogin - Player joined and assigned to team"));
}

bool ACaptureTheFlagGASGameMode::ReadyToStartMatch_Implementation()
{
	UE_LOG(LogTemp, Error, TEXT("ReadyToStartMatch - ALWAYS TRUE"));
	return true;  // Always ready for technical test
}

void ACaptureTheFlagGASGameMode::HandleMatchIsWaitingToStart()
{
	UE_LOG(LogTemp, Error, TEXT("HandleMatchIsWaitingToStart - SKIP TO PROGRESS"));
	// Skip waiting entirely - go straight to InProgress
	SetMatchState(MatchState::InProgress);
}

void ACaptureTheFlagGASGameMode::HandleMatchHasStarted()
{
	Super::HandleMatchHasStarted();
	UE_LOG(LogTemp, Error, TEXT("=== MATCH HAS STARTED SUCCESSFULLY ==="));
}

// Core functionality implementation
void ACaptureTheFlagGASGameMode::AssignPlayerToTeam(ACTFPlayerState* Player, ETeam Team)
{
	if (!IsValid(Player))
	{
		return;
	}

	Player->SetTeam(Team);
	PlayerJoinedTeam.Broadcast(Player, Team);
	UE_LOG(LogTemp, Log, TEXT("Player %s assigned to team %d"), *Player->GetPlayerName(), static_cast<int32>(Team));
}

ETeam ACaptureTheFlagGASGameMode::SelectTeamForPlayer(ACTFPlayerState* Player)
{
	if (!IsValid(Player) || !IsValid(CTFGameState))
	{
		UE_LOG(LogTemp, Error, TEXT("Cannot assign team - invalid Player or GameState"));
		return ETeam::None; // Fixed: Don't default to Red - let caller handle
	}

	// Auto-balance teams by selecting the team with fewer players
	const int32 RedTeamCount = CTFGameState->GetTeamPlayerCount(ETeam::Red);
	const int32 BlueTeamCount = CTFGameState->GetTeamPlayerCount(ETeam::Blue);

	UE_LOG(LogTemp, Log, TEXT("Team counts - Red: %d, Blue: %d"), RedTeamCount, BlueTeamCount);

	return (RedTeamCount <= BlueTeamCount) ? ETeam::Red : ETeam::Blue;
}

bool ACaptureTheFlagGASGameMode::CanStartMatch() const
{
	// Allow starting with at least MinPlayersToStart players
	// Fixed: Removed dangerous const_cast
	if (const UWorld* World = GetWorld())
	{
		int32 PlayerCount = 0;
		for (FConstPlayerControllerIterator Iterator = World->GetPlayerControllerIterator(); Iterator; ++Iterator)
		{
			if (Iterator->Get())
			{
				PlayerCount++;
			}
		}
		return PlayerCount >= MinPlayersToStart;
	}
	return false;
}

void ACaptureTheFlagGASGameMode::BalanceTeams()
{
	if (!IsValid(CTFGameState))
	{
		return;
	}

	TArray<ACTFPlayerState*> RedPlayers = CTFGameState->GetPlayersOnTeam(ETeam::Red);
	TArray<ACTFPlayerState*> BluePlayers = CTFGameState->GetPlayersOnTeam(ETeam::Blue);
	
	const int32 RedCount = RedPlayers.Num();
	const int32 BlueCount = BluePlayers.Num();
	const int32 Difference = FMath::Abs(RedCount - BlueCount);
	
	// Only balance if difference is greater than 1
	if (Difference <= 1)
	{
		return;
	}

	// Move players from the larger team to the smaller team
	if (RedCount > BlueCount)
	{
		const int32 PlayersToMove = Difference / 2;
		for (int32 i = 0; i < PlayersToMove && i < RedPlayers.Num(); ++i)
		{
			// Fixed: Validate player before accessing
			if (IsValid(RedPlayers[i]) && RedPlayers[i]->IsValidLowLevel())
			{
				AssignPlayerToTeam(RedPlayers[i], ETeam::Blue);
				UE_LOG(LogTemp, Log, TEXT("Balanced player %s from Red to Blue"), *RedPlayers[i]->GetPlayerName());
			}
		}
	}
	else
	{
		const int32 PlayersToMove = Difference / 2;
		for (int32 i = 0; i < PlayersToMove && i < BluePlayers.Num(); ++i)
		{
			// Fixed: Validate player before accessing
			if (IsValid(BluePlayers[i]) && BluePlayers[i]->IsValidLowLevel())
			{
				AssignPlayerToTeam(BluePlayers[i], ETeam::Red);
				UE_LOG(LogTemp, Log, TEXT("Balanced player %s from Blue to Red"), *BluePlayers[i]->GetPlayerName());
			}
		}
	}
}

APlayerStart* ACaptureTheFlagGASGameMode::GetTeamPlayerStart(ETeam Team) const
{
	const TArray<TObjectPtr<APlayerStart>>* TeamStarts = nullptr;
	
	switch (Team)
	{
		case ETeam::Red:
			TeamStarts = &RedTeamStarts;
			break;
		case ETeam::Blue:
			TeamStarts = &BlueTeamStarts;
			break;
		default:
			TeamStarts = &NeutralStarts;
			break;
	}

	if (TeamStarts && TeamStarts->Num() > 0)
	{
		// Return random start from the appropriate team
		const int32 RandomIndex = FMath::RandRange(0, TeamStarts->Num() - 1);
		return (*TeamStarts)[RandomIndex].Get();
	}

	// Fallback to any available start
	if (NeutralStarts.Num() > 0)
	{
		return NeutralStarts[0].Get();
	}

	return nullptr;
}

void ACaptureTheFlagGASGameMode::RespawnPlayer(AController* Controller)
{
	if (!IsValid(Controller))
	{
		return;
	}

	ACTFPlayerState* PlayerState = Controller->GetPlayerState<ACTFPlayerState>();
	if (!CanRespawnPlayer(PlayerState))
	{
		return;
	}

	// Get appropriate spawn point
	const ETeam PlayerTeam = PlayerState ? PlayerState->GetTeam() : ETeam::Red;
	APlayerStart* SpawnPoint = GetTeamPlayerStart(PlayerTeam);
	
	if (!SpawnPoint)
	{
		SpawnPoint = Cast<APlayerStart>(FindPlayerStart(Controller));
	}

	if (SpawnPoint)
	{
		// Spawn player at the chosen location
		APawn* NewPawn = SpawnDefaultPawnAtTransform(Controller, SpawnPoint->GetActorTransform());
		if (NewPawn)
		{
			Controller->Possess(NewPawn);
			PlayerState->SetRespawnTime(0.0f);
			UE_LOG(LogTemp, Log, TEXT("Player %s respawned"), *PlayerState->GetPlayerName());
		}
	}
}

bool ACaptureTheFlagGASGameMode::CanRespawnPlayer(ACTFPlayerState* Player) const
{
	if (!IsValid(Player))
	{
		return false;
	}

	// Check if respawn delay has passed
	return Player->GetRespawnTime() <= 0.0f;
}

void ACaptureTheFlagGASGameMode::InitializeFlags()
{
	if (!IsValid(FlagClass) || FlagSpawnLocation.IsZero())
	{
		UE_LOG(LogTemp, Warning, TEXT("Flag class or spawn location not set"));
		return;
	}

	// Spawn the flag at the specified location
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	
	GameFlag = GetWorld()->SpawnActor<ACTFFlag>(FlagClass, FlagSpawnLocation, FRotator::ZeroRotator, SpawnParams);
	
	if (IsValid(GameFlag))
	{
		GameFlag->SetBaseLocation(FlagSpawnLocation);
		GameFlag->ReturnToBase();
		UE_LOG(LogTemp, Log, TEXT("Flag initialized at location %s"), *FlagSpawnLocation.ToString());
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to spawn flag"));
	}
}

void ACaptureTheFlagGASGameMode::ResetFlags()
{
	if (IsValid(GameFlag))
	{
		GameFlag->ReturnToBase();
	}
}

bool ACaptureTheFlagGASGameMode::ReadyToEndMatch_Implementation()
{
	if (!IsValid(CTFGameState))
	{
		return false;
	}

	// Check if any team has reached the score limit
	const int32 RedScore = CTFGameState->GetTeamScore(ETeam::Red);
	const int32 BlueScore = CTFGameState->GetTeamScore(ETeam::Blue);
	const int32 ScoreLimit = GameConfiguration.ScoreLimit;

	return (RedScore >= ScoreLimit) || (BlueScore >= ScoreLimit);
}

void ACaptureTheFlagGASGameMode::HandleMatchHasEnded()
{
	Super::HandleMatchHasEnded();
	
	// Determine winning team
	if (IsValid(CTFGameState))
	{
		const ETeam WinningTeam = CTFGameState->GetWinningTeam();
		UE_LOG(LogTemp, Log, TEXT("Match ended - Team %d wins!"), static_cast<int32>(WinningTeam));
		
		// Start timer for game reset
		GetWorldTimerManager().SetTimer(MatchStartTimerHandle, this, &ACaptureTheFlagGASGameMode::RestartGame, 5.0f, false);
	}
}

void ACaptureTheFlagGASGameMode::RestartGame()
{
	UE_LOG(LogTemp, Log, TEXT("Restarting game..."));
	ResetMatch();
	StartMatch();
}

void ACaptureTheFlagGASGameMode::ResetMatch()
{
	// Reset game state
	if (IsValid(CTFGameState))
	{
		CTFGameState->ResetMatch();
	}

	// Reset flags
	ResetFlags();

	// Reset all players
	for (FConstPlayerControllerIterator Iterator = GetWorld()->GetPlayerControllerIterator(); Iterator; ++Iterator)
	{
		if (APlayerController* PC = Iterator->Get())
		{
			if (ACTFPlayerState* PlayerState = PC->GetPlayerState<ACTFPlayerState>())
			{
				PlayerState->ResetStats();
				PlayerState->SetCarriedFlag(nullptr);
			}
		}
	}
}

void ACaptureTheFlagGASGameMode::CheckMatchEnd()
{
	if (ReadyToEndMatch())
	{
		EndMatch();
	}
}
void ACaptureTheFlagGASGameMode::StartMatch() { Super::StartMatch(); }
void ACaptureTheFlagGASGameMode::EndMatch() { Super::EndMatch(); }
APawn* ACaptureTheFlagGASGameMode::SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, const FTransform& SpawnTransform) { return Super::SpawnDefaultPawnAtTransform_Implementation(NewPlayer, SpawnTransform); }

// Additional missing virtual functions
void ACaptureTheFlagGASGameMode::Logout(AController* Exiting) 
{ 
	Super::Logout(Exiting);
	
	// Balance teams when player leaves
	if (bAutoBalanceTeams)
	{
		BalanceTeams();
	}
}

AActor* ACaptureTheFlagGASGameMode::ChoosePlayerStart_Implementation(AController* Player) 
{ 
	ACTFPlayerState* PlayerState = Player ? Player->GetPlayerState<ACTFPlayerState>() : nullptr;
	if (IsValid(PlayerState))
	{
		APlayerStart* TeamStart = GetTeamPlayerStart(PlayerState->GetTeam());
		if (TeamStart)
		{
			return Cast<AActor>(TeamStart);
		}
	}
	
	return Super::ChoosePlayerStart_Implementation(Player); 
}

UClass* ACaptureTheFlagGASGameMode::GetDefaultPawnClassForController_Implementation(AController* InController) { return DefaultPawnClass; }
APlayerController* ACaptureTheFlagGASGameMode::GetPlayerControllerClass(AController* InController) { return Cast<APlayerController>(PlayerControllerClass->GetDefaultObject()); }
void ACaptureTheFlagGASGameMode::ChangeName(AController* Controller, const FString& NewName, bool bNameChange) { Super::ChangeName(Controller, NewName, bNameChange); }
void ACaptureTheFlagGASGameMode::InitGameState() { Super::InitGameState(); }

// Internal Functions
void ACaptureTheFlagGASGameMode::CachePlayerStarts()
{
	RedTeamStarts.Empty();
	BlueTeamStarts.Empty();
	SpectatorStarts.Empty();
	NeutralStarts.Empty();
	
	// Fixed: Actually cache player starts
	for (TActorIterator<APlayerStart> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		APlayerStart* Start = *ActorItr;
		if (IsValid(Start))
		{
			ClassifyPlayerStart(Start);
		}
	}
	
	UE_LOG(LogTemp, Warning, TEXT("PlayerStarts cached - Red: %d, Blue: %d, Spectator: %d, Neutral: %d"), 
		   RedTeamStarts.Num(), BlueTeamStarts.Num(), SpectatorStarts.Num(), NeutralStarts.Num());
	
	// Critical validation
	if (RedTeamStarts.Num() == 0 && BlueTeamStarts.Num() == 0 && NeutralStarts.Num() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("CRITICAL: No player starts found! Players cannot spawn!"));
	}
}

void ACaptureTheFlagGASGameMode::ClassifyPlayerStart(APlayerStart* PlayerStart)
{
	if (!IsValid(PlayerStart))
	{
		return;
	}
	
	const ETeam Team = GetPlayerStartTeam(PlayerStart);
	
	switch (Team)
	{
		case ETeam::Red:
			RedTeamStarts.Add(PlayerStart);
			UE_LOG(LogTemp, Verbose, TEXT("Added Red team start: %s"), *PlayerStart->GetName());
			break;
		case ETeam::Blue:
			BlueTeamStarts.Add(PlayerStart);
			UE_LOG(LogTemp, Verbose, TEXT("Added Blue team start: %s"), *PlayerStart->GetName());
			break;
		case ETeam::Spectator:
			SpectatorStarts.Add(PlayerStart);
			UE_LOG(LogTemp, Verbose, TEXT("Added Spectator start: %s"), *PlayerStart->GetName());
			break;
		default:
			NeutralStarts.Add(PlayerStart);
			UE_LOG(LogTemp, Verbose, TEXT("Added Neutral start: %s"), *PlayerStart->GetName());
			break;
	}
}

ETeam ACaptureTheFlagGASGameMode::GetPlayerStartTeam(APlayerStart* PlayerStart) const
{
	if (!IsValid(PlayerStart))
	{
		return ETeam::None;
	}
	
	// Check PlayerStartTag for team identification
	const FString PlayerStartTag = PlayerStart->PlayerStartTag.ToString();
	
	if (PlayerStartTag.Contains(TEXT("Red"), ESearchCase::IgnoreCase))
	{
		return ETeam::Red;
	}
	else if (PlayerStartTag.Contains(TEXT("Blue"), ESearchCase::IgnoreCase))
	{
		return ETeam::Blue;
	}
	else if (PlayerStartTag.Contains(TEXT("Spectator"), ESearchCase::IgnoreCase))
	{
		return ETeam::Spectator;
	}
	
	// Check actor name as fallback
	const FString ActorName = PlayerStart->GetName();
	if (ActorName.Contains(TEXT("Red"), ESearchCase::IgnoreCase))
	{
		return ETeam::Red;
	}
	else if (ActorName.Contains(TEXT("Blue"), ESearchCase::IgnoreCase))
	{
		return ETeam::Blue;
	}
	
	return ETeam::None; // Neutral
}