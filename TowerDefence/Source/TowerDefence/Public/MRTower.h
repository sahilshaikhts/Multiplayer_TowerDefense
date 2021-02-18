// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TowerBase.h"
#include "MRTower.generated.h"

/**
 * 
 */
UCLASS()
class TOWERDEFENCE_API AMRTower : public ATowerBase
{
	GENERATED_BODY()
	
	virtual bool GetDamage(float value);

public:

	UPROPERTY(EditAnywhere)
		TSubclassOf<class AMRProjectile> ProjectileClass;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;
	void Fire();

};
