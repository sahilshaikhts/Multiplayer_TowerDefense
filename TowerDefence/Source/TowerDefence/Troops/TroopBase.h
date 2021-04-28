/**********************************************************
Team: No Name Yet

Section: 2

Author: Seth Grinstead

Description:TroopBase class is common class every troop class will derive from.It has all the basic
			members such as collider,mesh,audiocomponents and also tower detection code,
			which notifies child class when a tower is near the its path.
			It has the function to set the pathnode to the pathnode array that the troop will follow after being placed at a spawn point.


************************************************************/
#pragma once

#include "CoreMinimal.h"
#include "TowerDefence/Systems/Inventory.h"
#include "GameFramework/Actor.h"
#include "TroopBase.generated.h"

UCLASS()
class TOWERDEFENCE_API ATroopBase : public AActor
{
	GENERATED_BODY()

public:
	MyEnums::Item unitType;
	// Sets default values for this actor's properties
	ATroopBase();
	class ANetwPlayer* player;
	FTimerHandle SlowMoTimer;

	UPROPERTY(VisibleAnywhere, Category = "Collider")
		class UCapsuleComponent* collider;
	UPROPERTY(VisibleAnywhere, Category = "Mesh")
		USkeletalMeshComponent* mesh;
	UPROPERTY(VisibleAnywhere)
		class UBoxComponent* col_towerDetection;
	UPROPERTY(EditAnywhere)
		class UAIMovementComponent* movmentComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AduioComponent")
		class UAudioComponent* AudioComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AduioComponent")
		class UAudioComponent* AudioComponent_2;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sound")
		class USoundBase* sfx_attack;
	UPROPERTY(EditAnywhere, Category = "Sound")
		class USoundBase* sfx_hurt;//AC_2
	UPROPERTY(EditAnywhere, Category = "Sound")
		class USoundBase* sfx_die;//AC_2

	FVector moveDirection;
	UFUNCTION(BlueprintCallable)
		bool GetAttack();
	bool attack;
	bool enabled, follow, beingSpawned;

	class ATowerBase* currentTarget;
	float slowMoMultiplier=1;
	float attackRate, countDown;//Times attack per second
	float damage, hp;//Damage given per attack

		// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void SetPatrolPoints(TArray<AActor*>* aPatrolPoints);


public:
	bool isAlive=true;
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void CheckForTowers();
	virtual bool GetDamage(float value);

	void StartDestroy();

	UFUNCTION()
	void SlowMo();
};
