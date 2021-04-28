// Fill out your copyright notice in the Description page of Project Settings.


#include "TowerDefence/Troops/Troop_melee.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "TowerDefence/Towers/TowerBase.h"
#include "TowerDefence/AI/AIMovementComponent.h"
#include "Components/AudioComponent.h"

// Sets default values
ATroop_melee::ATroop_melee()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	attackRate = 1;
	unitType = MyEnums::Item::troop_swordsMan;
}

// Called when the game starts or when spawned
void ATroop_melee::BeginPlay()
{
	Super::BeginPlay();
	collider->OnComponentBeginOverlap.AddDynamic(this, &ATroop_melee::BeginOverlap);
}
               
void ATroop_melee::SetPatrolPoints(TArray<AActor*>* aPatrolPoints)
{
	movmentComponent->SetPathNodes(aPatrolPoints);
}

// Called every frame
void ATroop_melee::Tick(float DeltaTime)
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
					AudioComponent->Stop();
					AudioComponent->SetSound(sfx_attack);
					AudioComponent->Play();
				}

				if (currentTower->isAlive == false)
				{
					attack = false;
					follow = false;
					currentTarget = nullptr;

					//keep following the path
					movmentComponent->isPatroling(true);
				}
				
				countDown = attackRate+(attackRate*fmod(1.0f, slowMoMultiplier));//when slowMoMultiplier==1(disabled)Fmod will return 0 hence adding 0 ,otherwise will increase attackrate by  e.g. 0.5f *attackrate 
			}
			countDown -= DeltaTime;
		}
		else
		{
			movmentComponent->isPatroling(true);
			collider->SetPhysicsLinearVelocity(moveDirection * 7000*slowMoMultiplier * DeltaTime);
		}
		if (currentTarget != nullptr && follow)
		{
			movmentComponent->isPatroling(false);
			moveDirection = (currentTarget->GetActorLocation() - GetActorLocation());
			moveDirection.Normalize();
			collider->SetPhysicsLinearVelocity(moveDirection * 7000*slowMoMultiplier * DeltaTime);


			float dist = GetDistanceTo(currentTarget);
			if (dist < 90)
			{
				follow = false;
				attack = true;
			}
		}
		CheckForTowers();
		SetActorRotation(FRotator(0,-FMath::RadiansToDegrees(atan2(moveDirection.X, moveDirection.Y)),0));
	}
}

void ATroop_melee::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (GetLocalRole() == ROLE_Authority)
	{
		if (OtherActor->ActorHasTag("Projectile_canon") && enabled)
		{
			GetDamage(100);

			if (OtherActor != nullptr)
				OtherActor->Destroy();
		}
	}
}
bool ATroop_melee::GetDamage(float value)
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

