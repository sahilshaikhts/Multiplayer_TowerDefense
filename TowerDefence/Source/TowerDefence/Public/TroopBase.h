// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TroopBase.generated.h"

UCLASS()
class TOWERDEFENCE_API ATroopBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATroopBase();

	UPROPERTY(VisibleAnywhere, Category = "Collider")
		class UCapsuleComponent* collider;
	UPROPERTY(VisibleAnywhere, Category = "Mesh")
		UStaticMeshComponent* mesh;
	UPROPERTY(VisibleAnywhere)
		class UBoxComponent* col_towerDetection;
	UPROPERTY(EditAnywhere)
		class UAIMovementComponent* movmentComponent;
	
	FVector moveDirection;
	bool enabled,follow, attack,beingSpawned;
	class ATowerBase* currentTarget;
	float hp;
	float attackRate, countDown;//Times attack per second

	float damage;//Damage given per attack

		// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void SetPatrolPoints(TArray<AActor*>* aPatrolPoints);


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void CheckForTowers();
	virtual bool GetDamage(float value);

};
