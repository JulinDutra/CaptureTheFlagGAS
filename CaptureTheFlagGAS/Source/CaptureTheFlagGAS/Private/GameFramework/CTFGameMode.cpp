// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameFramework/CTFGameMode.h"
#include "GameFramework/CTFGameState.h"
#include "Gameplay/CTFFlag.h"
#include "Core/CTFTypes.h"
#include "Engine/World.h"

ACTFGameMode::ACTFGameMode()
{
	// Set default score limit
	GameConfiguration.ScoreLimit = WinningScore;
}

void ACTFGameMode::BeginPlay()
{
	Super::BeginPlay();

	// Set flag spawn location
	FlagSpawnLocation = FlagSpawnPosition;
	
	// Update game configuration
	GameConfiguration.ScoreLimit = WinningScore;
	
	// Get the game state and update configuration
	if (ACTFGameState* CurrentGameState = GetGameState<ACTFGameState>())
	{
		CurrentGameState->SetGameConfig(GameConfiguration);
	}

	// Auto-spawn flag if enabled and configured
	if (bAutoSpawnFlag && IsValid(FlagClass) && !FlagSpawnLocation.IsZero())
	{
		InitializeFlags();
	}

	OnGameSetupComplete();
	
	UE_LOG(LogTemp, Warning, TEXT("CTF GameMode Setup Complete - Flag at %s, Score Limit: %d"), 
		   *FlagSpawnLocation.ToString(), WinningScore);
}