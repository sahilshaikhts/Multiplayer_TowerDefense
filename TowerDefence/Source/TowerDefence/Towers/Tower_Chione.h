// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TowerBase.h"
#include "Tower_Chione.generated.h"

/**
 * 
 */
UCLASS()
class TOWERDEFENCE_API ATower_Chione : public ATowerBase
{
	GENERATED_BODY()
	

protected:
	//Reduce HP on getting attack
	virtual bool GetDamage(float value);

	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;

	void Fire();

};
