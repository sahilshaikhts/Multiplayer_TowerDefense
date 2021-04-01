// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TowerSpawnPoint.generated.h"

UCLASS()
class TOWERDEFENCE_API ATowerSpawnPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATowerSpawnPoint();
	class ATowerBase* currentTower;


	UPROPERTY(EditAnywhere, Category = "Mesh")
		UStaticMeshComponent* mesh;
	
	bool isEquiped;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
