// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower_Canon.h"
#include "Components/SphereComponent.h"
#include "Projectile_canon.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/ProjectileMovementComponent.h"

void ATower_Canon::BeginPlay()
{
	Super::BeginPlay();
	
	Tags.Add("Tower_Canon");
	fire = false;
	attackRate = 4;
	isAlive = true;
}

void ATower_Canon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (isAlive) {
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
void ATower_Canon::Fire()
{
	if (currentTarget != nullptr)
	{
		FActorSpawnParameters SpawnInfo;
		SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
		SpawnInfo.Owner = this;
		SpawnInfo.Instigator = Cast<APawn>(GetOwner());


		FVector startPos = GetActorLocation() + FVector(0, 0, 150);
		FVector TargetPosition = currentTarget->GetActorLocation();

		const FRotator newrot = UKismetMathLibrary::FindLookAtRotation(startPos, TargetPosition);

		const float Gravity = GetWorld()->GetGravityZ() * -1;

		const float Theta = (70 * PI / 180);

		FVector dir = TargetPosition - startPos;
		float Sz = dir.Z;
		dir.Z = 0;
		float Sx = dir.Size();

		const float V = (Sx / cos(Theta)) * FMath::Sqrt((Gravity * 1) / (2 * (Sx * tan(Theta) - Sz)));
		FVector VelocityOutput = FVector(V * cos(Theta), 0, V * sin(Theta));

		FVector rotation = VelocityOutput;
		rotation.Normalize();

		AProjectile_canon* spwndObj = GetWorld()->SpawnActor<AProjectile_canon>(t_projectile_canon, startPos, newrot, SpawnInfo);
		if (spwndObj != nullptr) {
			spwndObj->collider->AddForce(VelocityOutput);
			spwndObj->velocity = VelocityOutput;
			spwndObj->hasMoved = false;
		}
	}
}
bool ATower_Canon::GetDamage(float value)
{
	if (hp > 0)
		hp -= value;
	else {
		mesh->SetMaterial(0,nullptr);
		//Destroy(); change model/shrink
		isAlive = false;
		return false;
	}
	return true;
}