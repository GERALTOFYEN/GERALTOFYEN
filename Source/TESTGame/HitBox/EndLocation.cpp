// Fill out your copyright notice in the Description page of Project Settings.

#include "EndLocation.h"
#include "GameMode/TESTGameGameModeBase.h"
#include "Components/StaticMeshComponent.h"
#include "Engine.h"
AEndLocation::AEndLocation()
{
	EndMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EndMeshComp"));
	HitBoxComp->SetupAttachment(EndMeshComp);
}
void AEndLocation::OnHitSphere(AActor * sphere)
{
	ATESTGameGameModeBase * GameModeBase = Cast<ATESTGameGameModeBase>(GetWorld()->GetAuthGameMode());

	GameModeBase->SetPlayerInput(false);
}
