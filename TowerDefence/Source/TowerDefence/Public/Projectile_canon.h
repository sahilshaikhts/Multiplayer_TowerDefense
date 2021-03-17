// Fill out your copyright notice in the Description page of Project Settings.
/**********************************************************
Team: No Name Yet

Section: 2

Author: Sahil Shaikh

Description: This object is spawned by the canon tower on detecing troops, it collides with multiple troops and does splash damage on impact


************************************************************/
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile_canon.generated.h"

UCLASS()
class TOWERDEFENCE_API AProjectile_canon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile_canon();
	UPROPERTY(VisibleAnywhere)
		class USphereComponent* collider;
	UPROPERTY(VisibleAnywhere)
		class UProjectileMovementComponent* projectileComponent;
	UPROPERTY(VisibleAnywhere)
		class USphereComponent* col_troopDetection;
	UPROPERTY(VisibleAnywhere, Category = "Mesh")
		UStaticMeshComponent* mesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AduioComponent")
		class UAudioComponent* AudioComponent;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sound")
		class USoundBase* sfx_explode;

	FVector velocity;
	bool hasMoved;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	FVector direction;
};
