// Fill out your copyright notice in the Description page of Project Settings.


#include "MRTower.h"
#include "Components/SphereComponent.h"
#include "MRProjectile.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/ProjectileMovementComponent.h"

void AMRTower::BeginPlay()
{
	Super::BeginPlay();

	Tags.Add("MRTower");
	fire = false;
	attackRate = 8;
}

void AMRTower::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	timer -= DeltaTime;

	if (timer <= 0)
	{
		timer = attackRate;
		fire = true;
	}

	if (fire)
	{
		if (currentTarget != nullptr)
		{
			Fire();
			fire = false;
		}
	}

	CheckForTroops();
}

void AMRTower::Fire()
{
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
	SpawnInfo.Owner = this;
	SpawnInfo.Instigator = Cast<APawn>(GetOwner());


	FVector startPos = GetActorLocation();
	FVector dir = startPos - currentTarget->GetActorLocation();
	dir.Normalize();

	AMRProjectile* spwndObj = GetWorld()->SpawnActor<AMRProjectile>(ProjectileClass, startPos, dir.Rotation(), SpawnInfo);

	if (spwndObj != nullptr)
	{
		spwndObj->SetFireDirection(dir);
	}

	currentTarget = nullptr;
}

bool AMRTower::GetDamage(float value)
{
	if (hp > 0)
	{
		hp -= value;
	}
	else 
	{
		//Destroy(); change model/shrink
		return false;
	}

	return true;
}