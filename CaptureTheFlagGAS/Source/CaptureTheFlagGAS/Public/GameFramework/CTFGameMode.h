// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CaptureTheFlagGASGameMode.h"
#include "CTFGameMode.generated.h"

/**
 * CTF Game Mode - Blueprint configurable version of CTF GameMode
 */
UCLASS(BlueprintType, Blueprintable)
class CAPTURETHEFLAGGAS_API ACTFGameMode : public ACaptureTheFlagGASGameMode
{
	GENERATED_BODY()

public:
	ACTFGameMode();

protected:
	virtual void BeginPlay() override;

public:
	// Blueprint Configuration
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CTF Setup")
	FVector FlagSpawnPosition = FVector(0, 0, 100);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CTF Setup")
	FVector RedTeamBase = FVector(-2000, 0, 100);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CTF Setup")
	FVector BlueTeamBase = FVector(2000, 0, 100);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CTF Setup", meta = (ClampMin = "1", ClampMax = "10"))
	int32 WinningScore = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CTF Setup")
	bool bAutoSpawnFlag = true;

	// Blueprint Event
	UFUNCTION(BlueprintImplementableEvent, Category = "CTF Events")
	void OnGameSetupComplete();
};