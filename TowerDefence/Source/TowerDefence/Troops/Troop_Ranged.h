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

	virtual void SetPatrolPoints(TArray<AActor*>* aPatrolPoints) override;

	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class AProjectile_RangedTroop> ProjectileClass;

	virtual bool GetDamage(float value) override;

private:

	void PlayAttackAnimation();
	void FireProjectile();

	float AnimRate = 2.0f;

	FTimerHandle AnimTimer;

	UPROPERTY(VisibleAnywhere)
		class UArrowComponent* Muzzle;
};
