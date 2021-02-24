// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TroopSpawnPoint.generated.h"

UCLASS()
class TOWERDEFENCE_API ATroopSpawnPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATroopSpawnPoint();
	UPROPERTY(EditInstanceOnly, Category = "Path")
		TArray<AActor*> PatrolPoints;
	
	UPROPERTY(EditAnywhere)
		class USphereComponent* collider;
	UPROPERTY(EditAnywhere, Category = "Mesh")
		UStaticMeshComponent* mesh;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
