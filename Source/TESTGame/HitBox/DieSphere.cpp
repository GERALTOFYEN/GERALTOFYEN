// Fill out your copyright notice in the Description page of Project Settings.

#include "DieSphere.h"
#include "Player/SphereBase.h"
#include "Engine.h"
#include "GameMode/TESTGameGameModeBase.h"

void ADieSphere::OnHitSphere(AActor * sphere)
{
	ATESTGameGameModeBase * GameModeBase = Cast<ATESTGameGameModeBase>(GetWorld()->GetAuthGameMode());

	GameModeBase->SetPlayerLocation();
}
