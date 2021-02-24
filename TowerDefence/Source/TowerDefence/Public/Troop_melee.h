// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TowerDefence/Public/TroopBase.h"
#include "GameFramework/Actor.h"
#include "Troop_melee.generated.h"

UCLASS()
class TOWERDEFENCE_API ATroop_melee : public ATroopBase
{
	GENERATED_BODY()
public:	
		ATroop_melee();
	
	
protected:
	
	virtual void BeginPlay() override;
public:
	void SetPatrolPoints(TArray<AActor*>* aPatrolPoints);

	virtual void Tick(float DeltaTime) override;
	
	//void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	virtual bool GetDamage(float value) override;

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse,
	           const FHitResult& Hit);


	UFUNCTION()
	void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	                  int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};