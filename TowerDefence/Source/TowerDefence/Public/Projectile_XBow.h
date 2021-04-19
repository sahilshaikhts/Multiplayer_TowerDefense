// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile_XBow.generated.h"

UCLASS()
class TOWERDEFENCE_API AProjectile_XBow : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile_XBow();

	UPROPERTY(VisibleAnywhere)
		class USphereComponent* collider;

	UPROPERTY(VisibleAnywhere)
		class UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
		class UStaticMeshComponent* mesh;

	void SetFireDirection(FVector dir);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Custom", meta = (AllowPrivateAccess = "true"))
		class USoundBase* ImpactSound;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		int MaximumSpeed = 4000;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		int InitialSpeed = 1000;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
};
