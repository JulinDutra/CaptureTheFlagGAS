// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CTFTypes.generated.h"

UENUM(BlueprintType)
enum class ETeam : uint8
{
	None UMETA(DisplayName = "None"),
	Red UMETA(DisplayName = "Red Team"),
	Blue UMETA(DisplayName = "Blue Team"),
	Spectator UMETA(DisplayName = "Spectator")
};

UENUM(BlueprintType)
enum class EGamePhase : uint8
{
	WaitingToStart UMETA(DisplayName = "Waiting To Start"),
	InProgress UMETA(DisplayName = "In Progress"),
	PostMatch UMETA(DisplayName = "Post Match"),
	Aborted UMETA(DisplayName = "Aborted")
};

UENUM(BlueprintType)
enum class EFlagState : uint8
{
	AtBase UMETA(DisplayName = "At Base"),
	Carried UMETA(DisplayName = "Carried"),
	Dropped UMETA(DisplayName = "Dropped")
};

USTRUCT(BlueprintType)
struct CAPTURETHEFLAGGAS_API FTeamInfo : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Team")
	FText TeamName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Team")
	FLinearColor TeamColor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Team")
	int32 Score = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Team")
	int32 MaxPlayers = 8;

	FTeamInfo()
	{
		TeamName = FText::FromString("Unknown Team");
		TeamColor = FLinearColor::White;
		Score = 0;
		MaxPlayers = 8;
	}

	FTeamInfo(const FText& InTeamName, const FLinearColor& InTeamColor, int32 InMaxPlayers = 8)
		: TeamName(InTeamName)
		, TeamColor(InTeamColor)
		, Score(0)
		, MaxPlayers(InMaxPlayers)
	{
	}
};

USTRUCT(BlueprintType)
struct CAPTURETHEFLAGGAS_API FPlayerStats
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats")
	int32 Captures = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats")
	int32 Returns = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats")
	int32 Kills = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats")
	int32 Deaths = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats")
	float TimeWithFlag = 0.0f;

	FPlayerStats() = default;

	void Reset()
	{
		Captures = 0;
		Returns = 0;
		Kills = 0;
		Deaths = 0;
		TimeWithFlag = 0.0f;
	}
};

USTRUCT(BlueprintType)
struct CAPTURETHEFLAGGAS_API FGameConfig
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Game Rules", meta = (ClampMin = "1", ClampMax = "10"))
	int32 ScoreLimit = 3;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Game Rules", meta = (ClampMin = "60", ClampMax = "3600"))
	float TimeLimit = 600.0f; // 10 minutes

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Game Rules", meta = (ClampMin = "1", ClampMax = "16"))
	int32 MaxPlayersPerTeam = 8;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Game Rules", meta = (ClampMin = "0", ClampMax = "60"))
	float FlagReturnTime = 30.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Game Rules", meta = (ClampMin = "0", ClampMax = "60"))
	float RespawnDelay = 5.0f;

	FGameConfig() = default;
};

namespace CTFTeamColors
{
	static const FLinearColor RedTeam = FLinearColor(0.8f, 0.1f, 0.1f, 1.0f);
	static const FLinearColor BlueTeam = FLinearColor(0.1f, 0.1f, 0.8f, 1.0f);
	static const FLinearColor NeutralColor = FLinearColor(0.5f, 0.5f, 0.5f, 1.0f);
}

namespace CTFGameplayTags
{
	// Abilities
	static const FName AbilityInputTag_Primary = "Input.Primary";
	static const FName AbilityInputTag_Secondary = "Input.Secondary";
	static const FName AbilityInputTag_Interact = "Input.Interact";
	
	// States
	static const FName State_Carrying_Flag = "State.Carrying.Flag";
	static const FName State_Dead = "State.Dead";
	static const FName State_Respawning = "State.Respawning";
	
	// Events
	static const FName Event_Flag_Captured = "Event.Flag.Captured";
	static const FName Event_Flag_Dropped = "Event.Flag.Dropped";
	static const FName Event_Flag_Returned = "Event.Flag.Returned";
	static const FName Event_Player_Killed = "Event.Player.Killed";
	static const FName Event_Player_Respawned = "Event.Player.Respawned";
}