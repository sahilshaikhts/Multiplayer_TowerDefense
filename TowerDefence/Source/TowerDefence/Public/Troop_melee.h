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
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	//void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	virtual bool GetDamage(float value) override;

};