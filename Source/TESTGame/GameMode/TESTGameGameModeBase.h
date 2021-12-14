// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TESTGameGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TESTGAME_API ATESTGameGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
		ATESTGameGameModeBase();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayPawn")
		class ASphereBase * PlayPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CurrentStart")
		FVector CurrentStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerDieNumber")
		int32 PlayerDieNum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool IsEnd;

public:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable)
	void SetPlayerLocation();

	UFUNCTION(BlueprintCallable)
	void SetPlayerLocation(FVector Start);

	UFUNCTION(BlueprintCallable)
	void SetPlayerInput(bool isInput);

	UFUNCTION(BlueprintCallable)
	void SetCurrentStart(FVector Location);
};
