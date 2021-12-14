// Fill out your copyright notice in the Description page of Project Settings.

#include "TESTGameGameModeBase.h"
#include "Engine.h"
#include "Player/SphereBase.h"

ATESTGameGameModeBase::ATESTGameGameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;

	PlayerDieNum = 0;
	IsEnd = false;

}
void ATESTGameGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	ASphereBase * Pawn = Cast<ASphereBase>(GetWorld()->GetFirstPlayerController()->GetPawn());

	if (Pawn)
	{
		PlayPawn = Pawn;
		CurrentStart = PlayPawn->GetActorLocation();
	}
}

void ATESTGameGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ATESTGameGameModeBase::SetPlayerLocation()
{
	PlayPawn->SetActorLocation(CurrentStart);
	PlayPawn->SphereMeshComp->SetPhysicsLinearVelocity(FVector(0, 0, 0));
	PlayPawn->SphereMeshComp->SetPhysicsAngularVelocity(FVector(0, 0, 0));
	PlayerDieNum++;

}
void ATESTGameGameModeBase::SetPlayerLocation(FVector Start)
{
	PlayPawn->SetActorLocation(Start);
	PlayPawn->SphereMeshComp->SetPhysicsLinearVelocity(FVector(0, 0, 0));
	PlayPawn->SphereMeshComp->SetPhysicsAngularVelocity(FVector(0, 0, 0));
}

void ATESTGameGameModeBase::SetCurrentStart(FVector Location)
{
	if (Location != FVector(0, 0, 0))
	{
		CurrentStart = Location;
	}
}
void ATESTGameGameModeBase::SetPlayerInput(bool isInput)
{
	PlayPawn->IsInput = isInput;

	if (!isInput)
	{
		IsEnd = true;
	}
}


