// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Inventory.h"
#include "GameFramework/Actor.h"
#include "RewardSystem.generated.h"
UCLASS()
class TOWERDEFENCE_API ARewardSystem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARewardSystem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	int Reward_UnitKill(MyEnums::Item item);
	int Reward_RoundOver( float scoreDiff, bool win);
};
