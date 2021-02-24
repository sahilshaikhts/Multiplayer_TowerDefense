// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TowerBase.h"
#include "Tower_Canon.generated.h"

/**
 * 
 */
UCLASS()
class TOWERDEFENCE_API ATower_Canon : public ATowerBase
{
	GENERATED_BODY()

	virtual bool GetDamage(float value);
public:
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<class AProjectile_canon>t_projectile_canon;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;
	void Fire();
};
