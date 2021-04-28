// Fill out your copyright notice in the Description page of Project Settings.


#include "TowerDefence/Towers/Tower_XBow.h"
#include "Components/SphereComponent.h"
#include "TowerDefence/Projectile/Projectile_XBow.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Net/UnrealNetwork.h"

void ATower_XBow::BeginPlay()
{
	Super::BeginPlay();

	Tags.Add("Tower_XBow");
	fire = false;
	attackRate = 8;
	isAlive = true;
}

void ATower_XBow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (isAlive && GetLocalRole() == ROLE_Authority)
	{
		CheckForTroops();

		timer -= DeltaTime;

		if (fire)
		{
			if (currentTarget != nullptr)
			{
				fire = false;
				Fire();

				timer = attackRate;
			}
		}
		else
		{
			if (timer <= 0)
			{
				fire = true;
			}
		}
	}
}

void ATower_XBow::Fire()
{
	Server_Fire();
}
bool ATower_XBow::Server_Fire_Validate()
{
	return true;
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

bool ATower_XBow::GetDamage(float value)
{
	if (hp > 0)
	{
		hp -= value;
	}
	else
	{
		isAlive = false;
		StartDestroy();
		return false;
	}

	return true;
}
