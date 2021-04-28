// Fill out your copyright notice in the Description page of Project Settings.


#include "AI_TroopSpawner.h"
#include "TowerDefence/Player/NetwPlayer.h"
#include "Math/UnrealMathUtility.h"
#include "TowerDefence/GameStates/MyGameStateBase.h"
#include "TowerDefence/Troops/TroopSpawnPoint.h"
#include "TowerDefence/Troops/Troop_melee.h"

// Sets default values
AAI_TroopSpawner::AAI_TroopSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpawnRate = 1.5f;
	BreakTime = 5.0f;
}

// Called when the game starts or when spawned
void AAI_TroopSpawner::BeginPlay()
{
	pGameState = Cast<AMyGameStateBase>(GetWorld()->GetGameState());

	Super::BeginPlay();

	MaxNumSpawned = FMath::RandRange(1, 3);
	SelectedSpawnPoint = FMath::RandRange(0, 2);
}

// Called every frame
void AAI_TroopSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (pGameState->GetGameState() == MyStates::GameState::Play)
	{
		if (bIsOnBreak == false && bIsSpawning == false)
		{
			GetWorldTimerManager().SetTimer(SpawnTimerHandle, this, &AAI_TroopSpawner::SpawnTroops, SpawnRate);
			bIsSpawning = true;
		}
	}
}

void AAI_TroopSpawner::SpawnTroops()
{
	
	{
		FVector position = SpawnPoints[SelectedSpawnPoint]->GetActorLocation() + SpawnPoints[SelectedSpawnPoint]->GetActorUpVector();

		ATroopBase* spwndObj = GetWorld()->SpawnActor<ATroop_melee>(t_troopMelee, position, FRotator(0, 0, 0));
		if (spwndObj)
		{
			spwndObj->SetPatrolPoints(&SpawnPoints[SelectedSpawnPoint]->PatrolPoints);
		}

		NumSpawned++;
		bIsSpawning = false;

		if (NumSpawned == MaxNumSpawned)
		{
			NumSpawned = 0;
			MaxNumSpawned = FMath::RandRange(1, 3);
			SelectedSpawnPoint = FMath::RandRange(0, 2);

			bIsOnBreak = true;

			GetWorldTimerManager().SetTimer(BreakTimerHandle, this, &AAI_TroopSpawner::ClockIn, BreakTime);
		}
	}
}

void AAI_TroopSpawner::ClockIn()
{
	bIsOnBreak = false;
}