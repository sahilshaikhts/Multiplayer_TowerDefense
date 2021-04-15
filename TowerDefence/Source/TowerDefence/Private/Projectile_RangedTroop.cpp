// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile_RangedTroop.h"
#include "TowerBase.h"
#include "Tower_Canon.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TroopBase.h"

// Sets default values
AProjectile_RangedTroop::AProjectile_RangedTroop()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereCollider->BodyInstance.SetCollisionProfileName("BlockAll");
	SphereCollider->OnComponentHit.AddDynamic(this, &AProjectile_RangedTroop::OnHit);
	RootComponent = SphereCollider;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovement->UpdatedComponent = SphereCollider;
	ProjectileMovement->InitialSpeed = InitialSpeed;
	ProjectileMovement->MaxSpeed = MaximumSpeed;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	Mesh->SetCollisionProfileName("NoCollision");
	Mesh->SetupAttachment(RootComponent);

	InitialLifeSpan = 5.0f;
}

void AProjectile_RangedTroop::SetFireDirection(FVector dir)
{
	ProjectileMovement->Velocity = InitialSpeed * dir;
}

// Called when the game starts or when spawned
void AProjectile_RangedTroop::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AProjectile_RangedTroop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void AProjectile_RangedTroop::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != nullptr && OtherActor->ActorHasTag("tower") == true)
	{
		Cast<ATowerBase>(OtherActor)->GetDamage(25);
	}

	UGameplayStatics::PlaySoundAtLocation(this->GetWorld(), ImpactSound, GetActorLocation());

	Destroy();
}