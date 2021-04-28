// Fill out your copyright notice in the Description page of Project Settings.


#include "TowerDefence/Troops/TroopBase.h"
#include "TowerDefence/Towers/TowerBase.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"
#include "TowerDefence/AI/AIMovementComponent.h"
#include "Components/AudioComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/World.h"
#include "TowerDefence/Player/NetwPlayer.h"
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

	mesh = CreateDefaultSubobject<USkeletalMeshComponent>("Mesh");
	mesh->SetCollisionProfileName("NoCollision");
	mesh->SetupAttachment(RootComponent);

	col_towerDetection = CreateDefaultSubobject<UBoxComponent>("TowerCollider");
	col_towerDetection->SetCollisionProfileName("OverlapAll");
	col_towerDetection->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	col_towerDetection->SetupAttachment(RootComponent);

	movmentComponent = CreateDefaultSubobject< UAIMovementComponent>("movement");

	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
	AudioComponent->bAutoActivate = false;
	AudioComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	AudioComponent->SetupAttachment(RootComponent);

	AudioComponent_2 = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent_2"));
	AudioComponent_2->bAutoActivate = false;
	AudioComponent_2->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	AudioComponent_2->SetupAttachment(RootComponent);

	hp = 100;
	enabled =true;

	bAlwaysRelevant = true;
	SetReplicateMovement(true);
	SetReplicates(true);
}

bool ATroopBase::GetAttack()
{
	return attack;
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
	if (GetLocalRole() == ROLE_Authority)
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
				if (!currentTarget->isAlive)
					currentTarget = nullptr;
			}
		}

	}
}


bool ATroopBase::GetDamage(float value)
{
	return false;
}
void ATroopBase::StartDestroy()
{
	if (GetLocalRole() == ROLE_Authority)
	{
		isAlive = false;
		if (player != nullptr)
			player->OnUnitKilled(unitType);

		Destroy();
	}
}
void ATroopBase::SlowMo()
{
	if (GetLocalRole() == ROLE_Authority)
	{
		if (slowMoMultiplier == 1)
		{
			slowMoMultiplier = 0.5f;
			GetWorld()->GetTimerManager().SetTimer(SlowMoTimer, this, &ATroopBase::SlowMo, 5, false);
		}
		else
		{
			slowMoMultiplier = 1;
			GetWorld()->GetTimerManager().ClearTimer(SlowMoTimer);
		}
	}
}