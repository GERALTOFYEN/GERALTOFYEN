// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HitBoxBase.h"
#include "DieSphere.generated.h"

/**
 * 
 */
UCLASS()
class TESTGAME_API ADieSphere : public AHitBoxBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector sphereVEC;

public:

	virtual void OnHitSphere(AActor * sphere) override;
	
};
