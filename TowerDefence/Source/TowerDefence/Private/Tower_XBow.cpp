// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower_XBow.h"
#include "Components/SphereComponent.h"
#include "Projectile_XBow.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/ProjectileMovementComponent.h"

void ATower_XBow::BeginPlay()
{
	Super::BeginPlay();

	Tags.Add("Tower_XBow");
	fire = false;
	attackRate = 8;
}

void ATower_XBow::Tick(float DeltaTime)
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
			Server_Fire();
			fire = false;
		}
	}

	Server_CheckForTroops();
}

void ATower_XBow::Server_Fire_Implementation()
{
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
	SpawnInfo.Owner = this;
	SpawnInfo.Instigator = Cast<APawn>(GetOwner());


	FVector startPos = GetActorLocation();
	FVector dir = startPos - currentTarget->GetActorLocation();
	dir.Normalize();

	AProjectile_XBow* spwndObj = GetWorld()->SpawnActor<AProjectile_XBow>(ProjectileClass, startPos, dir.Rotation(), SpawnInfo);

	if (spwndObj != nullptr)
	{
		spwndObj->SetFireDirection(dir);
	}

	currentTarget = nullptr;
}

bool ATower_XBow::Server_Fire_Validate()
{
	return true;
}

bool ATower_XBow::GetDamage(float value)
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
