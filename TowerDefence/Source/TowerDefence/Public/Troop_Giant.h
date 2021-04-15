// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TroopBase.h"
#include "Troop_Giant.generated.h"

/**
 * 
 */
UCLASS()
class TOWERDEFENCE_API ATroop_Giant : public ATroopBase
{
	GENERATED_BODY()

public:
	ATroop_Giant();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AudioComponent")
		class UAudioComponent* WalkingAudio;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sound")
		class USoundBase* sfx_Walking;
protected:

	virtual void BeginPlay() override;
public:
	virtual void SetPatrolPoints(TArray<AActor*>* aPatrolPoints) override;

	virtual void Tick(float DeltaTime) override;

	//void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	virtual bool GetDamage(float value) override;

	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse,
			const FHitResult& Hit);


	UFUNCTION()
		void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};