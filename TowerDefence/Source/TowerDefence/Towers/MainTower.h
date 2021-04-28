// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TowerBase.h"
#include "MainTower.generated.h"

/**
 * 
 */
UCLASS()
class TOWERDEFENCE_API AMainTower : public ATowerBase
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual bool GetDamage(float value);
	
	void Reset();

};
