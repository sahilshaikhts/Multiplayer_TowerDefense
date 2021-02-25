// Fill out your copyright notice in the Description page of Project Settings.


#include "TowerDefence/Public/TroopBase.h"
#include "TowerBase.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "AIMovementComponent.h"

// Sets default values
ATroopBase::ATroopBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	collider = CreateDefaultSubobject<UCapsuleComponent>("MainCollider");
	collider->SetCollisionProfileName("NoCollision");
	collider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	collider->SetSimulatePhysics(true);
	collider->SetNotifyRigidBodyCollision(true);
	

	RootComponent = collider;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	mesh->SetCollisionProfileName("NoCollision");
	mesh->SetupAttachment(RootComponent);

	col_towerDetection = CreateDefaultSubobject<UBoxComponent>("TowerCollider");
	col_towerDetection->SetCollisionProfileName("OverlapAll");
	col_towerDetection->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	col_towerDetection->SetupAttachment(RootComponent);

	movmentComponent = CreateDefaultSubobject< UAIMovementComponent>("movement");
	hp = 100;
	enabled =true;
}

// Called when the game starts or when spawned
void ATroopBase::BeginPlay()
{
	Super::BeginPlay();
}

void ATroopBase::SetPatrolPoints(TArray<AActor*>* aPatrolPoints)
{
}

// Called every frame
void ATroopBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
void ATroopBase::CheckForTowers()
{
	if (currentTarget == nullptr)
	{
		TArray<ATowerBase*> objTowers;

		TArray<UPrimitiveComponent*> allComponents;
		col_towerDetection->GetOverlappingComponents(allComponents);

		//Verify each colliders owner and type ,and store it in a list of towers
		for (UPrimitiveComponent* comp : allComponents)
		{
			if (comp->GetOwner()->ActorHasTag("tower") && comp->ComponentHasTag("collider_physical"))
			{
				objTowers.Add(Cast<ATowerBase>(comp->GetOwner()));
			}
		}

		//Checking nearest tower which is also alive
		if (objTowers.Num() > 0) 
		{
			float lastBestDist = GetDistanceTo(objTowers[0]);
			currentTarget = objTowers[0];

			for (ATowerBase* obj : objTowers)
			{
				float dist = GetDistanceTo(obj);
				if (dist < lastBestDist && obj->isAlive)
				{
					currentTarget = obj;
					lastBestDist = dist;
				}

			}

			follow = true;
		}
	}
}

bool ATroopBase::GetDamage(float value)
{
	return false;
}
