// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Core/CTFTypes.h"
#include "CTFScoreboardWidget.generated.h"

class ACTFGameState;
class ACTFPlayerState;
class UTextBlock;
class UProgressBar;

UCLASS(BlueprintType, Blueprintable)
class CAPTURETHEFLAGGAS_API UCTFScoreboardWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UCTFScoreboardWidget(const FObjectInitializer& ObjectInitializer);

protected:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

public:
	// Simple UI Update
	UFUNCTION(BlueprintCallable, Category = "Scoreboard")
	void UpdateScoreboard();

	// UI Text Blocks (bind these in Blueprint)
	UPROPERTY(meta = (BindWidget))
	UTextBlock* RedScoreText;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* BlueScoreText;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* TimeText;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* MatchStateText;

	UPROPERTY(meta = (BindWidget))
	UProgressBar* GameProgressBar;

	// Blueprint Events - Simplified
	UFUNCTION(BlueprintImplementableEvent, Category = "Events")
	void OnScoreUpdated(int32 RedScore, int32 BlueScore);

	UFUNCTION(BlueprintImplementableEvent, Category = "Events")
	void OnTimeUpdated(const FString& TimeString);

protected:
	// Cached reference
	UPROPERTY()
	TObjectPtr<ACTFGameState> CachedGameState;

	// Helper functions
	FString FormatTime(float TimeInSeconds) const;
	FString GetMatchStateString(EGamePhase Phase) const;
	float GetGameProgress() const;

private:
	// Update interval to avoid every tick updates
	float LastUpdateTime = 0.0f;
	static constexpr float UpdateInterval = 0.1f; // 10 FPS update rate
	
	// Event handlers for real-time updates
	UFUNCTION()
	void HandleScoreChanged(ETeam Team, int32 NewScore);
	
	UFUNCTION()
	void HandleFlagCaptured(ETeam CapturingTeam, ACTFPlayerState* CapturingPlayer, int32 NewScore);
};