/**********************************************************
Team: No Name Yet

Section: 2

Author: Sahil Shaikh

Description:TowerBase class is common class every tower class will derive from.It has all the basic
			members such as collider,mesh,audiocomponent and also troop detection code,
			which notifies child class when a troop is in range.


************************************************************/
#pragma once

#include "CoreMinimal.h"
#include "TowerDefence/Systems/Inventory.h"
#include "GameFramework/Actor.h"
#include "TowerBase.generated.h"

UCLASS()
class TOWERDEFENCE_API ATowerBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATowerBase();
	
	
	UPROPERTY(VisibleAnywhere)
		class UBoxComponent* collider;
	UPROPERTY(EditAnywhere, Category = "Mesh")
		UStaticMeshComponent* mesh;
	UPROPERTY(VisibleAnywhere)
		class USphereComponent* col_troopDetection;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AduioComponent")
		class UAudioComponent* AudioComponent;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sound")
		class USoundBase* sfx_fire;
	

	bool enabled,fire, isAlive;
	AActor* currentTarget;
	class ANetwPlayer* player;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void StartDestroy();

	MyEnums::Item unitType;
	float hp;
	float timer;//Times attack per second
	float attackRate;//Times attack per second
	float damage;//Damage given per attack
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//Return HP amount
	float GetHP();
	
	UFUNCTION()
	virtual bool GetDamage(float value);//returns false when hp<=0
	//Check for overlaping troops entering and leaving
	void CheckForTroops();
	
};
