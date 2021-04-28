// Fill out your copyright notice in the Description page of Project Settings.
/**********************************************************
Team: No Name Yet

Section: 2

Author: Sahil Shaikh

Description:ATroop_melee class is derived from TroopBase, 
			which contains sets of common variableand functions needed by troops.This troop detects tower in its path,
			sets it as target and moves towards it, once close enough,
			it start damaging the tower at a slow rate and does moderate damage.
			It also recieves damage from colliding projectile from any towers.


************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "TowerDefence/Troops/TroopBase.h"
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
	virtual void SetPatrolPoints(TArray<AActor*>* aPatrolPoints) override;

	virtual void Tick(float DeltaTime) override;
	
	virtual bool GetDamage(float value) override;

	UFUNCTION()
	void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	                  int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};