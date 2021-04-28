
<<<<<<< HEAD:TowerDefence/Source/TowerDefence/Private/TowerBase.cpp
#include "TowerBase.h"
#include "TroopBase.h"
#include "MyPlayer.h"
=======
#include "TowerDefence/Towers/TowerBase.h"
#include "TowerDefence/Troops/TroopBase.h"
#include "TowerDefence/Player/NetwPlayer.h"
>>>>>>> remotes/origin/Alpha_2:TowerDefence/Source/TowerDefence/Towers/TowerBase.cpp
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "Components/AudioComponent.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ATowerBase ::ATowerBase()
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

<<<<<<< HEAD:TowerDefence/Source/TowerDefence/Private/TowerBase.cpp
=======
	bAlwaysRelevant = true;
	SetReplicateMovement(true);
	SetReplicates(true);

>>>>>>> remotes/origin/Alpha_2:TowerDefence/Source/TowerDefence/Towers/TowerBase.cpp
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
<<<<<<< HEAD:TowerDefence/Source/TowerDefence/Private/TowerBase.cpp
	AudioComponent->Stop();
	AudioComponent->SetSound(sfx_Destroy);
	AudioComponent->Play();

=======
>>>>>>> remotes/origin/Alpha_2:TowerDefence/Source/TowerDefence/Towers/TowerBase.cpp
	if(player)
	player->OnUnitKilled(unitType);
	Destroy();
}

//Whenever a troop is overalping with the col_troopDetection,the current target is set and bool fire is set to true,this begin shooting in the child class
void ATowerBase::CheckForTroops()
{
<<<<<<< HEAD:TowerDefence/Source/TowerDefence/Private/TowerBase.cpp
	if (currentTarget == nullptr) 
	{
		TArray<AActor*> allActors;
		col_troopDetection->GetOverlappingActors(allActors, ATroopBase::StaticClass());

		if (allActors.Num() > 0) {
			
			currentTarget = allActors[0];
			fire = true;
=======
	//currentTarget = nullptr;
	if (GetLocalRole() == ROLE_Authority)
	{
		if (currentTarget == nullptr)
		{
			TArray<AActor*> allActors;
			col_troopDetection->GetOverlappingActors(allActors, ATroopBase::StaticClass());

			if (allActors.Num() > 0) 
			{

				currentTarget = allActors[0];
				fire = true;
			}
>>>>>>> remotes/origin/Alpha_2:TowerDefence/Source/TowerDefence/Towers/TowerBase.cpp
		}
	}
}

