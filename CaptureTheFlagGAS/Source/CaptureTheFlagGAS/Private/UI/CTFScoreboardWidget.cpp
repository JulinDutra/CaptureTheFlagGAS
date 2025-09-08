// Copyright Epic Games, Inc. All Rights Reserved.

#include "UI/CTFScoreboardWidget.h"
#include "GameFramework/CTFGameState.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"
#include "Engine/World.h"
#include "GameFramework/CTFPlayerState.h"

UCTFScoreboardWidget::UCTFScoreboardWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Simple constructor
}

void UCTFScoreboardWidget::NativeConstruct()
{
	Super::NativeConstruct();
	
	// Cache GameState
	if (UWorld* World = GetWorld())
	{
		CachedGameState = World->GetGameState<ACTFGameState>();
		
		// Bind to score change events for real-time updates
		if (IsValid(CachedGameState))
		{
			CachedGameState->ScoreChanged.AddDynamic(this, &UCTFScoreboardWidget::HandleScoreChanged);
			CachedGameState->FlagCaptured.AddDynamic(this, &UCTFScoreboardWidget::HandleFlagCaptured);
		}
	}
	
	// Initial update
	UpdateScoreboard();
	
	UE_LOG(LogTemp, Warning, TEXT("CTF Scoreboard Widget constructed with event bindings"));
}

void UCTFScoreboardWidget::NativeDestruct()
{
	// Unbind from events
	if (IsValid(CachedGameState))
	{
		CachedGameState->ScoreChanged.RemoveDynamic(this, &UCTFScoreboardWidget::HandleScoreChanged);
		CachedGameState->FlagCaptured.RemoveDynamic(this, &UCTFScoreboardWidget::HandleFlagCaptured);
	}
	
	Super::NativeDestruct();
}

void UCTFScoreboardWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	
	// Update at reduced frequency
	const float CurrentTime = GetWorld()->GetTimeSeconds();
	if (CurrentTime - LastUpdateTime >= UpdateInterval)
	{
		UpdateScoreboard();
		LastUpdateTime = CurrentTime;
	}
}

void UCTFScoreboardWidget::UpdateScoreboard()
{
	if (!IsValid(CachedGameState))
	{
		return;
	}

	// Update Red Team Score
	if (RedScoreText)
	{
		const int32 RedScore = CachedGameState->GetTeamScore(ETeam::Red);
		RedScoreText->SetText(FText::AsNumber(RedScore));
		UE_LOG(LogTemp, Error, TEXT("🔴 UI UPDATE: Red score = %d (TextBlock valid: %s)"), 
			   RedScore, RedScoreText ? TEXT("YES") : TEXT("NO"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("❌ RED SCORE TEXT IS NULL!"));
	}

	// Update Blue Team Score  
	if (BlueScoreText)
	{
		const int32 BlueScore = CachedGameState->GetTeamScore(ETeam::Blue);
		BlueScoreText->SetText(FText::AsNumber(BlueScore));
		UE_LOG(LogTemp, Error, TEXT("🔵 UI UPDATE: Blue score = %d (TextBlock valid: %s)"), 
			   BlueScore, BlueScoreText ? TEXT("YES") : TEXT("NO"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("❌ BLUE SCORE TEXT IS NULL!"));
	}

	// Update Time
	if (TimeText)
	{
		const float RemainingTime = CachedGameState->GetRemainingTime();
		const FString TimeString = FormatTime(RemainingTime);
		TimeText->SetText(FText::FromString(TimeString));
	}

	// Update Match State
	if (MatchStateText)
	{
		const EGamePhase CurrentPhase = CachedGameState->GetGamePhase();
		const FString StateString = GetMatchStateString(CurrentPhase);
		MatchStateText->SetText(FText::FromString(StateString));
	}

	// Update Progress Bar
	if (GameProgressBar)
	{
		const float Progress = GetGameProgress();
		GameProgressBar->SetPercent(Progress);
	}
}

FString UCTFScoreboardWidget::FormatTime(float TimeInSeconds) const
{
	if (TimeInSeconds <= 0.0f)
	{
		return TEXT("00:00");
	}

	const int32 Minutes = FMath::FloorToInt(TimeInSeconds / 60.0f);
	const int32 Seconds = FMath::FloorToInt(TimeInSeconds) % 60;
	
	return FString::Printf(TEXT("%02d:%02d"), Minutes, Seconds);
}

FString UCTFScoreboardWidget::GetMatchStateString(EGamePhase Phase) const
{
	switch (Phase)
	{
		case EGamePhase::WaitingToStart:
			return TEXT("Waiting to Start");
		case EGamePhase::InProgress:
			return TEXT("In Progress");
		case EGamePhase::PostMatch:
			return TEXT("Match Ended");
		default:
			return TEXT("Unknown");
	}
}

float UCTFScoreboardWidget::GetGameProgress() const
{
	if (!IsValid(CachedGameState))
	{
		return 0.0f;
	}

	// Simple progress based on time (you can customize this)
	const float RemainingTime = CachedGameState->GetRemainingTime();
	const float TotalTime = 300.0f; // 5 minutes default
	
	if (TotalTime <= 0.0f)
	{
		return 1.0f;
	}

	const float Progress = 1.0f - (RemainingTime / TotalTime);
	return FMath::Clamp(Progress, 0.0f, 1.0f);
}

void UCTFScoreboardWidget::HandleScoreChanged(ETeam Team, int32 NewScore)
{
	// Immediately update scoreboard when score changes
	UpdateScoreboard();
	
	// Call Blueprint event for additional UI effects
	const int32 RedScore = IsValid(CachedGameState) ? CachedGameState->GetTeamScore(ETeam::Red) : 0;
	const int32 BlueScore = IsValid(CachedGameState) ? CachedGameState->GetTeamScore(ETeam::Blue) : 0;
	OnScoreUpdated(RedScore, BlueScore);
	
	UE_LOG(LogTemp, Log, TEXT("Scoreboard: Team %d score changed to %d"), static_cast<int32>(Team), NewScore);
}

void UCTFScoreboardWidget::HandleFlagCaptured(ETeam CapturingTeam, ACTFPlayerState* CapturingPlayer, int32 NewScore)
{
	// Update scoreboard immediately on capture
	UpdateScoreboard();
	
	if (CapturingPlayer)
	{
		UE_LOG(LogTemp, Log, TEXT("Scoreboard: Flag captured by %s for team %d! New score: %d"), 
			   *CapturingPlayer->GetPlayerName(), static_cast<int32>(CapturingTeam), NewScore);
	}
}