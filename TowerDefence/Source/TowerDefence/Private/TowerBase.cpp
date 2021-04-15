
#include "TowerBase.h"
#include "TroopBase.h"
#include "MyPlayer.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Components/AudioComponent.h"

// Sets default values
ATowerBase::ATowerBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	collider = CreateDefaultSubobject<UBoxComponent>("MainCollider");
	collider->SetCollisionProfileName("BlockAll");
	collider->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	collider->ComponentTags.Add("collider_physical");

	RootComponent = collider;

	col_troopDetection = CreateDefaultSubobject<USphereComponent>("TowerCollider");
	col_troopDetection->SetCollisionProfileName("OverlapAll");
	col_troopDetection->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	col_troopDetection->SetupAttachment(RootComponent);
	
	mesh = CreateDefaultSubobject<USkeletalMeshComponent>("Mesh");
	mesh->SetCollisionProfileName("NoCollision");
	mesh->SetupAttachment(RootComponent);

	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
	AudioComponent->bAutoActivate = false;
	AudioComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
	AudioComponent->SetupAttachment(RootComponent);

	hp = 100;
	enabled = true;
	fire = false;
	isAlive = true;

	Tags.Add("tower");
}

// Called when the game starts or when spawned
void ATowerBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATowerBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float ATowerBase::GetHP()
{
	return hp;
}

bool ATowerBase::GetDamage(float value)
{
	return false;
}

void ATowerBase::StartDestroy()
{
	AudioComponent->Stop();
	AudioComponent->SetSound(sfx_Destroy);
	AudioComponent->Play();

	if(player)
	player->OnUnitKilled(unitType);
	Destroy();
}

//Whenever a troop is overalping with the col_troopDetection,the current target is set and bool fire is set to true,this begin shooting in the child class
void ATowerBase::CheckForTroops()
{
	if (currentTarget == nullptr) 
	{
		TArray<AActor*> allActors;
		col_troopDetection->GetOverlappingActors(allActors, ATroopBase::StaticClass());

		if (allActors.Num() > 0) {
			
			currentTarget = allActors[0];
			fire = true;
		}
	}
}

