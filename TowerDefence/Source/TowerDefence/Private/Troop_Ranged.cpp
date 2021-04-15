// Fill out your copyright notice in the Description page of Project Settings.


#include "Troop_Ranged.h"
#include "TroopBase.h"
#include "Animation/AnimSequence.h"
#include "Components/AudioComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "Projectile_RangedTroop.h"
#include "TowerBase.h"
#include "AIMovementComponent.h"
#include "Components/CapsuleComponent.h"

ATroop_Ranged::ATroop_Ranged()
{
	Muzzle = CreateDefaultSubobject<UArrowComponent>("Muzzle");
	Muzzle->SetupAttachment(RootComponent);
	attackRate = 2.0f;

}

void ATroop_Ranged::SetPatrolPoints(TArray<AActor*>* aPatrolPoints)
{
	movmentComponent->SetPathNodes(aPatrolPoints);
}

void ATroop_Ranged::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (enabled)
	{
		if (currentTarget != nullptr && attack && currentTarget->isAlive)
		{
			if (countDown <= 0.0f)
			{
				FireProjectile();

				if (currentTarget->isAlive == false)
				{
					attack = false;
					follow = false;


					//keep following the path
					movmentComponent->isPatroling(true);
				}

				countDown = attackRate + (attackRate * fmod(1.0f, slowMoMultiplier));//when slowMoMultiplier==1(disabled)Fmod will return 0 hence adding 0 ,otherwise will increase attackrate by  e.g. 0.5f *attackrate 
			}
			countDown -= DeltaTime;
		}
		else
		{
			movmentComponent->isPatroling(true);
			collider->SetPhysicsLinearVelocity(moveDirection * 7000 * slowMoMultiplier * DeltaTime);
		}
		if (currentTarget != nullptr && follow)
		{
			movmentComponent->isPatroling(false);
			moveDirection = (currentTarget->GetActorLocation() - GetActorLocation());
			moveDirection.Normalize();
			collider->SetPhysicsLinearVelocity(moveDirection * 7000 * slowMoMultiplier * DeltaTime);


			float dist = GetDistanceTo(currentTarget);
			if (dist < 250)
			{
				follow = false;
				attack = true;
			}
		}
		CheckForTowers();
		SetActorRotation(FRotator(0, -FMath::RadiansToDegrees(atan2(moveDirection.X, moveDirection.Y)), 0));
	}
}

void ATroop_Ranged::PlayAttackAnimation()
{
	//mesh->PlayAnimation(Anim, false);
	GetWorldTimerManager().SetTimer(AnimTimer, this, &ATroop_Ranged::FireProjectile, AnimRate);
}

void ATroop_Ranged::FireProjectile()
{
	FActorSpawnParameters ActorSpawnParams;
	ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
	ActorSpawnParams.Owner = this;
	ActorSpawnParams.Instigator = Cast<APawn>(GetOwner());

	FVector SpawnLoc = GetActorLocation() + (70 * GetActorRotation().Vector());
	
	AProjectile_RangedTroop* proj = GetWorld()->SpawnActor<AProjectile_RangedTroop>(ProjectileClass, SpawnLoc, GetActorRotation(), ActorSpawnParams);

	proj->SetFireDirection(GetActorRotation().Vector());

	AudioComponent->Stop();
	AudioComponent->SetSound(sfx_attack);
	AudioComponent->Play();
}

bool ATroop_Ranged::GetDamage(float value)
{
	if (hp > 0)
	{
		hp -= value;
		if (!AudioComponent_2->IsPlaying()) {
			AudioComponent_2->SetSound(sfx_hurt);
			AudioComponent_2->SetPitchMultiplier(FMath::RandRange(0.7f, 1.0f));
			AudioComponent_2->Play();
		}

	}
	else
	{
		AudioComponent_2->Stop();
		AudioComponent_2->SetSound(sfx_die);
		AudioComponent_2->SetPitchMultiplier(FMath::RandRange(0.8f, 1.0f));
		AudioComponent_2->Play();
		StartDestroy();
		return false;
	}
	return true;
}