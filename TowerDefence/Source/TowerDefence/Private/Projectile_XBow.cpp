// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile_XBow.h"
#include "Components/BoxComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TroopBase.h"

// Sets default values
AProjectile_XBow::AProjectile_XBow()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	BoxCollider->BodyInstance.SetCollisionProfileName("BlockAll");
	BoxCollider->OnComponentHit.AddDynamic(this, &AProjectile_XBow::OnHit);
	RootComponent = BoxCollider;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovement->UpdatedComponent = BoxCollider;
	ProjectileMovement->InitialSpeed = InitialSpeed;
	ProjectileMovement->MaxSpeed = MaximumSpeed;

	InitialLifeSpan = 5.0f;

	SetReplicates(true);
	SetReplicateMovement(true);
}

void AProjectile_XBow::SetFireDirection(FVector dir)
{
	ProjectileMovement->Velocity = InitialSpeed * dir;
}

// Called when the game starts or when spawned
void AProjectile_XBow::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AProjectile_XBow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectile_XBow::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Other Actor is the actor that triggered the event. Check that is not ourself. 
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && !IsPendingKill())
	{
		if (OtherActor != this->GetOwner())
		{
			UGameplayStatics::PlaySoundAtLocation(this->GetWorld(), ImpactSound, GetActorLocation());

			if (OtherActor->ActorHasTag("Troop") == true)
			{
				ATroopBase* obj = Cast<ATroopBase>(OtherActor);
				obj->GetDamage(15);
			}

			Destroy();
		}
	}
}

