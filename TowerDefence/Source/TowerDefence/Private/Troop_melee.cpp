// Fill out your copyright notice in the Description page of Project Settings.


#include "TowerDefence/Public/Troop_melee.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "TowerDefence/Public/TowerBase.h"

// Sets default values
ATroop_melee::ATroop_melee()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	collider = CreateDefaultSubobject<UCapsuleComponent>("MainCollider");
	collider->SetCollisionProfileName("BlockAll");
	collider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	collider->SetSimulatePhysics(true);
	RootComponent = collider;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	mesh->SetCollisionProfileName("NoCollision");
	mesh->SetupAttachment(RootComponent);
	
	col_towerDetection = CreateDefaultSubobject<UBoxComponent>("TowerCollider");
	col_towerDetection->SetCollisionProfileName("OverlapAll");
	col_towerDetection->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	col_towerDetection->SetupAttachment(RootComponent);
	
	attackRate = 1.5f;
}

// Called when the game starts or when spawned
void ATroop_melee::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATroop_melee::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (currentTarget != nullptr && attack)
	{
		if(countDown<=0.0f)
		{
			ATowerBase* currentTower= Cast<ATowerBase>(currentTarget);
			if(!currentTower->GetDamage(25))
			{
				currentTarget = nullptr;
			}
			
			if(currentTower->GetHP()<=0)
			{
				attack = false;
				currentTarget = nullptr;
			}
			countDown = attackRate;
		}
		countDown -= DeltaTime;
	}else
	{
		//keep following the path
	}
	if (currentTarget != nullptr && follow)
	{
		moveDirection = (currentTarget->GetActorLocation() - GetActorLocation());
		moveDirection.Normalize();
		collider->SetPhysicsLinearVelocity(moveDirection * 3000 * DeltaTime);
		float dist = GetDistanceTo(currentTarget);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT(" %f "), dist));
		if (dist<90) 
		{
			follow = false;
			attack = true; 
		}
	}
	CheckForTowers();
}

bool ATroop_melee::GetDamage(float value)
{
	if (hp > 0)
		hp -= value;
	else {

		Destroy();
		return false;
	}
	return true;
}



