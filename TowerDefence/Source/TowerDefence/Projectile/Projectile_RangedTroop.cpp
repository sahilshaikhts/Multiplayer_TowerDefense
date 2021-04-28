#include "Projectile_RangedTroop.h"
#include "TowerDefence/Towers/TowerBase.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TowerDefence/Troops/TroopBase.h"

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

	mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	mesh->SetCollisionProfileName("NoCollision");
	mesh->SetupAttachment(RootComponent);

	bAlwaysRelevant = true;
	SetReplicates(true);

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
	if (OtherActor != nullptr && OtherActor->ActorHasTag("Tower") == true)
	{
		Cast<ATowerBase>(OtherActor)->GetDamage(20);
	}

	UGameplayStatics::PlaySoundAtLocation(this->GetWorld(), ImpactSound, GetActorLocation());

	Destroy();
}