/**********************************************************
Team: No Name Yet

Section: 2

Author:Sahil Shaikh

Description:It is used to allow playr to place troops at the entrance
			of path defined by the map layout,it contains a collider and a mesh,
			the collider affects raycast when mouse is clicked .

************************************************************/
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TroopSpawnPoint.generated.h"

UCLASS()
class TOWERDEFENCE_API ATroopSpawnPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATroopSpawnPoint();
	UPROPERTY(EditInstanceOnly, Category = "Path")
		TArray<AActor*> PatrolPoints;
	
	UPROPERTY(EditAnywhere)
		class UBoxComponent* collider;
	UPROPERTY(EditAnywhere, Category = "Mesh")
		UStaticMeshComponent* mesh;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
