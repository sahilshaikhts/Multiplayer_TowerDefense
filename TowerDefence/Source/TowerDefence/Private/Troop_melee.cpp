// Fill out your copyright notice in the Description page of Project Settings.


#include "TowerDefence/Public/Troop_melee.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "TowerDefence/Public/TowerBase.h"
#include "AIMovementComponent.h"
#include "Components/AudioComponent.h"

// Sets default values
ATroop_melee::ATroop_melee()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	attackRate = 1.5f;
}

// Called when the game starts or when spawned
void ATroop_melee::BeginPlay()
{
	Super::BeginPlay();

	collider->OnComponentHit.AddDynamic(this, &ATroop_melee::OnHit);
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
				countDown = attackRate;
			}
			countDown -= DeltaTime;
		}
		else
		{
			movmentComponent->isPatroling(true);
			collider->SetPhysicsLinearVelocity(moveDirection * 7000 * DeltaTime);
		}
		if (currentTarget != nullptr && follow)
		{
			movmentComponent->isPatroling(false);
			moveDirection = (currentTarget->GetActorLocation() - GetActorLocation());
			moveDirection.Normalize();
			collider->SetPhysicsLinearVelocity(moveDirection * 7000 * DeltaTime);

			float dist = GetDistanceTo(currentTarget);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT(" %f "), dist));
			if (dist < 90)
			{
				follow = false;
				attack = true;
			}
		}
		CheckForTowers();
	}
}

void ATroop_melee::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("Projectile_canon") && enabled)
	{
		GetDamage(20);

		if (OtherActor != nullptr)
			OtherActor->Destroy();
	}
}

bool ATroop_melee::GetDamage(float value)
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
		Destroy();
		return false;
	}
	return true;
}


void ATroop_melee::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{

}