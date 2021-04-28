// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TowerBase.h"
#include "Tower_XBow.generated.h"

/**
 * 
 */
UCLASS()
class TOWERDEFENCE_API ATower_XBow : public ATowerBase
{
	GENERATED_BODY()

		virtual bool GetDamage(float value);

public:

	UPROPERTY(EditAnywhere)
		TSubclassOf<class AProjectile_XBow> ProjectileClass;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	//Fire projectile when a troop is in range
	UFUNCTION(Server, WithValidation, Reliable)
		void Server_Fire();
	
	void Fire();

};
