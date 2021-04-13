// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AI_TroopSpawner.generated.h"

UCLASS()
class TOWERDEFENCE_API AAI_TroopSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAI_TroopSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SpawnTroops();
	void ClockIn();

	UPROPERTY(EditAnywhere)
		TSubclassOf<class ATroop_melee> t_troopMelee;

	FTimerHandle SpawnTimerHandle;
	FTimerHandle BreakTimerHandle;
	float SpawnRate;
	float BreakTime;

	UPROPERTY(EditInstanceOnly)
		TArray<class ATroopSpawnPoint*> SpawnPoints;

	int NumSpawned = 0;
	int MaxNumSpawned;
	int SelectedSpawnPoint;

	bool bIsOnBreak = false;
	bool bIsSpawning = false;

	class AMyGameStateBase* pGameState;
};
