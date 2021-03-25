// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TroopBase.h"
#include "Troop_Ranged.generated.h"

/**
 * 
 */
UCLASS()
class TOWERDEFENCE_API ATroop_Ranged : public ATroopBase
{
	GENERATED_BODY()
	
public:
	ATroop_Ranged();

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class AProjectile_RangedTroop> ProjectileClass;

private:

	UPROPERTY(VisibleAnywhere)
		class UAnimSequence* Anim;

	void PlayAttackAnimation();
	void FireProjectile();

	float FireRate = 3.0f;
	float AnimRate = 2.0f;
	FTimerHandle FireTimer;
	FTimerHandle AnimTimer;

	UPROPERTY(VisibleAnywhere)
		class UArrowComponent* Muzzle;
};
