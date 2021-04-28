// Fill out your copyright notice in the Description page of Project Settings.


#include "TowerDefence/Towers/Tower_Chione.h"
#include "TowerDefence/Troops/TroopBase.h"
#include "Components/SphereComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/AudioComponent.h"
void ATower_Chione::BeginPlay()
{
	Super::BeginPlay();
	Tags.Add("Tower_Chione");
	attackRate = 6;
	unitType = MyEnums::Item::tower_canon;
}
void ATower_Chione::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CheckForTroops();
	if(fire)
	{
		Fire();
		fire = false;
	}
}

void ATower_Chione::Fire()
{
	if (currentTarget != nullptr)
	{
		FActorSpawnParameters SpawnInfo;
		SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
		SpawnInfo.Owner = this;
		SpawnInfo.Instigator = Cast<APawn>(GetOwner());

		TArray<AActor*> allActors;
		col_troopDetection->GetOverlappingActors(allActors, ATroopBase::StaticClass());
		for (int i = 0; i < allActors.Num(); i++)
		{
			ATroopBase* troopObj=static_cast<ATroopBase*>(allActors[i]);
			troopObj->SlowMo();
		}

		AudioComponent->SetSound(sfx_fire);
		AudioComponent->SetPitchMultiplier(FMath::RandRange(0.5f, 0.1f));
		AudioComponent->Play();
	}
}

bool ATower_Chione::GetDamage(float value)
{
	if (hp > 0)
		hp -= value;
	else {
		mesh->SetMaterial(0, nullptr);
		StartDestroy();
		isAlive = false;
		return false;
	}
	return true;
}
