// Fill out your copyright notice in the Description page of Project Settings.


#include "RewardSystem.h"

// Sets default values
ARewardSystem::ARewardSystem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARewardSystem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARewardSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

int ARewardSystem::Reward_UnitKill(MyEnums::Item item)
{
	int amount=0;
	switch (item)
	{
	case MyEnums::Item::troop_swordsMan :
		amount = 10;
		break;
	case MyEnums::Item::troop_archer:
		amount = 15;
		break;
	case MyEnums::Item::tower_canon:
		amount = 50;
		break;
	case MyEnums::Item::tower_XBow:
		amount = 25;
		break;
	};
	return amount;
}
//The roundOver reward will be increased if the oponent has more wins(score)
int ARewardSystem::Reward_RoundOver(float scorePerc, bool win)//scorePerc(%) is P1.Score/(P1.Score+P2.Score)
{
	int amount = 200;
	amount += win ? 100 * scorePerc: 100 * (1.0f - scorePerc);

	return amount;
}

