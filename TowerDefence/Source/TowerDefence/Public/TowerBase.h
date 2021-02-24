// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TowerBase.generated.h"

UCLASS()
class TOWERDEFENCE_API ATowerBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATowerBase();
	
	
	UPROPERTY(VisibleAnywhere)
		class UBoxComponent* collider;
	UPROPERTY(VisibleAnywhere, Category = "Mesh")
		UStaticMeshComponent* mesh;
	UPROPERTY(VisibleAnywhere)
		class USphereComponent* col_troopDetection;

	bool fire;
	bool isAlive;
	AActor* currentTarget;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	float hp;
	float timer;//Times attack per second
	float attackRate;//Times attack per second
	float damage;//Damage given per attack
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	float GetHP();
	
	UFUNCTION()
	virtual bool GetDamage(float value);//returns false when hp<=0
	void CheckForTroops();
	
};
