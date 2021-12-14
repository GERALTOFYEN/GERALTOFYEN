// Fill out your copyright notice in the Description page of Project Settings.

#include "SaveLocation.h"
#include "GameMode/TESTGameGameModeBase.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine.h"

ASaveLocation::ASaveLocation()
{
	SaveMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SaveMesh"));
	HitBoxComp->SetupAttachment(SaveMeshComp);
}
void ASaveLocation::OnHitSphere(AActor * sphere)
{
	ATESTGameGameModeBase * GameModeBase = Cast<ATESTGameGameModeBase>(GetWorld()->GetAuthGameMode());

	GameModeBase->SetCurrentStart(HitBoxComp->GetComponentLocation());

}


