/**********************************************************
Team: No Name Yet

Section: 2

Author:Sahil Shaikh

Description:Tower_Canon class is derived from TowerBase class,
			TowerBase provide troop detection and other sets basic variables and functions.
			Canon shoots a parabolic projectile and foes aerial damage.
			It has low fire rate and does heavy damage to troops.


************************************************************/
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
		//Reduce HP on getting attack
		virtual bool GetDamage(float value);
public:

	UPROPERTY(EditAnywhere)
		TSubclassOf<class AProjectile_canon>t_projectile_canon;

	UFUNCTION()
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	//Fire projectile when a troop is in range
	UFUNCTION(Server, WithValidation, Reliable)
		void Server_Fire();

	void Fire();

} ;
