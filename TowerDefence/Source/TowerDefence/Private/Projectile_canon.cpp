// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile_canon.h"

#include "TroopBase.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
AProjectile_canon::AProjectile_canon()
{
	PrimaryActorTick.bCanEverTick = true;

	collider = CreateDefaultSubobject<USphereComponent>("MainCollider");
	collider->SetCollisionProfileName("BlockAll");
	collider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	collider->SetSimulatePhysics(true);
	collider->OnComponentBeginOverlap.AddDynamic(this, &AProjectile_canon::BeginOverlap);
	RootComponent = collider;
	
	col_troopDetection = CreateDefaultSubobject<USphereComponent>("TowerCollider");
	col_troopDetection->SetCollisionProfileName("OverlapAll");
	col_troopDetection->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	col_troopDetection->SetupAttachment(RootComponent);

	mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	mesh->SetCollisionProfileName("NoCollision");
	mesh->SetupAttachment(RootComponent);
	
	projectileComponent = CreateDefaultSubobject<UProjectileMovementComponent>("projectile");
	projectileComponent->InitialSpeed = 1000.0f;
	projectileComponent->MaxSpeed = 10000.0f;
	hasMoved = true;


}

// Called when the game starts or when spawned
void AProjectile_canon::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AProjectile_canon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AProjectile_canon::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	TArray<AActor*> allActors;;
	col_troopDetection->GetOverlappingActors(allActors, ATroopBase::StaticClass());
	if (allActors.Num() > 0) {
		for (AActor* cActor : allActors)
		{
			ATroopBase* obj = Cast<ATroopBase>(cActor);
			//obj->GetDamage(10);
		}
		Destroy();
	}
	
}

