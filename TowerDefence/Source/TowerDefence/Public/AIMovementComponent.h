// Fill out your copyright notice in the Description page of Project Settings.
/**********************************************************
Team: No Name Yet

Section: 2

Author: Sahil Shaikh

Description:AIMovementComponent is responsible for storing path node,checking for distance to the target node and moving smoothly from one path node to another.
			The path node are assigned at runtime,when player clicks to spawn on one of the spawnpoints,the spawnpoints containing the array of nodes passes it to the 
			troop spawned which then assign it to its AIMovementComponent.

************************************************************/
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIMovementComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TOWERDEFENCE_API UAIMovementComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAIMovementComponent();
	void SetPathNodes(TArray<AActor*>* aPatrolPoints);

	UPROPERTY(EditInstanceOnly, Category = "AI")
		bool bPatrol;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
	UPROPERTY()
	class ATroopBase* owner;


	UPROPERTY(EditInstanceOnly, Category = "AI", meta = (EditCondition = "bPatrol"))
		TArray<AActor*> PathNodes;

	AActor* CurrentPathNode;
	int index;
	
	UFUNCTION()
		void MoveToNextPathNode();

	UFUNCTION()
	void SwichtNextNodeToNearest();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void isPatroling(bool value) { bPatrol = value; }
private:

	AController* pController;
};
