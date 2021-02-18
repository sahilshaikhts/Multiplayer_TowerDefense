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


	FVector startPos = GetActorLocation() + FVector(0, 0, 150);
	FVector TargetPosition = currentTarget->GetActorLocation();

	const FRotator newrot = UKismetMathLibrary::FindLookAtRotation(startPos, TargetPosition);

	const float Gravity = GetWorld()->GetGravityZ() * -1;

	const float Theta = (40 * PI / 180);

	FVector dir = TargetPosition - startPos;
	float Sz = dir.Z;
	dir.Z = 0;
	float Sx = dir.Size();

	const float V = (Sx / cos(Theta)) * FMath::Sqrt((Gravity * 1) / (2 * (Sx * tan(Theta) - Sz)));
	FVector VelocityOutput = FVector(V * cos(Theta), 0, V * sin(Theta));

	FVector rotation = VelocityOutput;
	rotation.Normalize();

	AMRProjectile* spwndObj = GetWorld()->SpawnActor<AMRProjectile>(ProjectileClass, startPos, newrot, SpawnInfo);

	if (spwndObj != nullptr)
	{
		spwndObj->SetFireDirection(newrot.Vector());
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