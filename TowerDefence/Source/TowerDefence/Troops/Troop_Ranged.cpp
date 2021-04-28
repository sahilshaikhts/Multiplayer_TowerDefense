#include "TowerDefence/Troops/Troop_Ranged.h"
#include "Animation/AnimSequence.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "TowerDefence/Projectile/Projectile_RangedTroop.h"
#include "TowerDefence/Towers/TowerBase.h"
#include "TowerDefence/AI/AIMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/AudioComponent.h"

ATroop_Ranged::ATroop_Ranged()
{
	Muzzle = CreateDefaultSubobject<UArrowComponent>("Muzzle");
	Muzzle->SetupAttachment(RootComponent);

	attackRate = 1.5f;

}

void ATroop_Ranged::SetPatrolPoints(TArray<AActor*>* aPatrolPoints)
{
	movmentComponent->SetPathNodes(aPatrolPoints);
}

void ATroop_Ranged::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (enabled && GetLocalRole() == ROLE_Authority)
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
		SetActorRotation(FRotator(0, -FMath::RadiansToDegrees(atan2(moveDirection.X, moveDirection.Y)), 0));

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

bool ATroop_Ranged::GetDamage(float value)
{
	if (GetLocalRole() == ROLE_Authority)
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
		if (hp <= 0)
		{
			AudioComponent_2->Stop();
			AudioComponent_2->SetSound(sfx_die);
			AudioComponent_2->SetPitchMultiplier(FMath::RandRange(0.8f, 1.0f));
			AudioComponent_2->Play();
			StartDestroy();
			return false;
		}
	}
	return true;
}