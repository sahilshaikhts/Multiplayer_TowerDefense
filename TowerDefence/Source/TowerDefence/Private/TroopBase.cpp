// Fill out your copyright notice in the Description page of Project Settings.


#include "TowerDefence/Public/TroopBase.h"
#include "TowerBase.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
// Sets default values
ATroopBase::ATroopBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.

	

	hp = 100;
}

// Called when the game starts or when spawned
void ATroopBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATroopBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ATroopBase::CheckForTowers()
{
	if (currentTarget == nullptr) {
		TArray<AActor*> allActors;
		col_towerDetection->GetOverlappingActors(allActors, ATowerBase::StaticClass());

		if (allActors.Num() >0) {
			currentTarget = allActors[0];
			float lastBestDist = GetDistanceTo(allActors[0]);
			for (AActor* obj : allActors)
			{
				float dist = GetDistanceTo(obj);
				if (dist < lastBestDist)
				{
					currentTarget = obj;
					lastBestDist = dist;
				}

			}
			follow = true;
		}
	}
}

bool ATroopBase::GetDamage(float value)
{
	return false;
}
