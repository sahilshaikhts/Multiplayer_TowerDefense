// Fill out your copyright notice in the Description page of Project Settings.


#include "Troop_Ranged.h"
#include "Animation/AnimSequence.h"
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
				ATowerBase* currentTower = Cast<ATowerBase>(currentTarget);
				if (!currentTower->GetDamage(25))
				{
					currentTarget = nullptr;
					//AudioComponent->Stop();
					//AudioComponent->SetSound(sfx_attack);
					//AudioComponent->Play();
				}

				if (currentTower->isAlive == false)
				{
					attack = false;
					follow = false;
					currentTarget = nullptr;

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
			if (dist < 90)
			{
				follow = false;
				attack = true;
			}
		}
		CheckForTowers();

	}
}

void ATroop_Ranged::PlayAttackAnimation()
{
	//mesh->PlayAnimation(Anim, false);
	attack = true;
	GetWorldTimerManager().SetTimer(AnimTimer, this, &ATroop_Ranged::FireProjectile, AnimRate);
}

void ATroop_Ranged::FireProjectile()
{
	FActorSpawnParameters ActorSpawnParams;
	ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
	ActorSpawnParams.Owner = this;
	ActorSpawnParams.Instigator = Cast<APawn>(GetOwner());
	FTransform Transform = Muzzle->GetComponentTransform();
	
	AProjectile_RangedTroop* proj = GetWorld()->SpawnActor<AProjectile_RangedTroop>(ProjectileClass, Transform.GetLocation(), Transform.GetRotation().Rotator(), ActorSpawnParams);

	proj->SetFireDirection(Transform.GetRotation().Vector());

	attack = false;
}
