// Fill out your copyright notice in the Description page of Project Settings.


#include "MainTower.h"
#include "Components/StaticMeshComponent.h"
#include "TowerDefence/GameStates/MyGameStateBase.h"


void AMainTower::BeginPlay()
{
	Super::BeginPlay();

	Tags.Add("MainTower");
	fire = false;
	attackRate = 0;
	hp = 50;

}

void AMainTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
void AMainTower::Reset()
{
	hp = 50;
}
bool AMainTower::GetDamage(float value)
{
	if (hp > 0)
	{
		hp -= value;
	}
	else
	{
		if (GetLocalRole() == ROLE_Authority)
		{
			AMyGameStateBase* gameState = Cast<AMyGameStateBase>(GetWorld()->GetGameState());
			if(gameState->State==2)//if state is playing
			gameState->StartEndingRound(nullptr);
			return false;
		}
	}

	return true;
}