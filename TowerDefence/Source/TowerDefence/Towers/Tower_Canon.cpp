#include "TowerDefence/Towers/Tower_Canon.h"
#include "Components/SphereComponent.h"
#include "TowerDefence/Projectile/Projectile_canon.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/AudioComponent.h"
#include "Net/UnrealNetwork.h"

void ATower_Canon::BeginPlay()
{
	Super::BeginPlay();
	col_troopDetection->OnComponentEndOverlap.AddDynamic(this, &ATower_Canon::OnOverlapEnd);
	Tags.Add("Tower_Canon");
	
	attackRate = 4;
	unitType = MyEnums::Item::tower_canon;
}

void ATower_Canon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (isAlive && GetLocalRole() == ROLE_Authority)
	{
		CheckForTroops();

		timer -= DeltaTime;

		if (fire)
		{
			if (currentTarget != nullptr)
			{
				fire = false;
				Fire();

				timer = attackRate;
			}
		}
		else
		{
			if (timer <= 0)
			{
				fire = true;
			}
		}
	}
}
void ATower_Canon::Fire()
{
	Server_Fire();
}
bool ATower_Canon::Server_Fire_Validate()
{
	return true;
}
void ATower_Canon::Server_Fire_Implementation()
{
	if (currentTarget != nullptr)
	{
		FActorSpawnParameters SpawnInfo;
		SpawnInfo.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
		SpawnInfo.Owner = this;
		SpawnInfo.Instigator = Cast<APawn>(GetOwner());


		FVector startPos = GetActorLocation() + FVector(0, 0, 150);
		FVector TargetPosition = currentTarget->GetActorLocation();

		const FRotator newrot = UKismetMathLibrary::FindLookAtRotation(startPos, TargetPosition);

		const float Gravity = GetWorld()->GetGravityZ() * -1;

		const float Theta = (45 * PI / 180);

		FVector dir = TargetPosition - startPos;
		float Sz = dir.Z;
		dir.Z = 0;
		float Sx = dir.Size();

		const float V = (Sx / cos(Theta)) * FMath::Sqrt((Gravity * 1) / (2 * (Sx * tan(Theta) - Sz)));
		FVector VelocityOutput = FVector(V * cos(Theta), 0, V * sin(Theta));

		FVector rotation = VelocityOutput;
		rotation.Normalize();

		AProjectile_canon* spwndObj = GetWorld()->SpawnActor<AProjectile_canon>(t_projectile_canon, startPos, newrot, SpawnInfo);
		if (spwndObj != nullptr) {
			spwndObj->collider->AddForce(VelocityOutput);
			spwndObj->velocity = VelocityOutput;
			spwndObj->hasMoved = false;
		}

		AudioComponent->SetSound(sfx_fire);
		AudioComponent->SetPitchMultiplier(FMath::RandRange(0.5f, 0.1f));
		AudioComponent->Play();
	}
}

bool ATower_Canon::GetDamage(float value)
{
	if (hp > 0)
		hp -= value;
	else {

		isAlive = false;
		StartDestroy();
		return false;
	}
	return true;
}

void ATower_Canon::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	
}