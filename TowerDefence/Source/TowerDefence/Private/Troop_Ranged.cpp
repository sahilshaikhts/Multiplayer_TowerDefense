// Fill out your copyright notice in the Description page of Project Settings.


#include "Troop_Ranged.h"
#include "Animation/AnimSequence.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "Projectile_RangedTroop.h"

ATroop_Ranged::ATroop_Ranged()
{
	Anim = CreateDefaultSubobject<UAnimSequence>("Animation");
	Muzzle = CreateDefaultSubobject<UArrowComponent>("Muzzle");
	Muzzle->SetupAttachment(RootComponent);
}

void ATroop_Ranged::Tick(float DeltaTime)
{
	if (currentTarget != nullptr && attack == false)
	{
		GetWorldTimerManager().SetTimer(FireTimer, this, &ATroop_Ranged::PlayAttackAnimation, FireRate);
	}
}

void ATroop_Ranged::PlayAttackAnimation()
{
	mesh->PlayAnimation(Anim, false);
	attack = true;
	GetWorldTimerManager().SetTimer(AnimTimer, this, &ATroop_Ranged::FireProjectile, AnimRate);
}

void ATroop_Ranged::FireProjectile()
{
	FActorSpawnParameters ActorSpawnParams;
	ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
	ActorSpawnParams.Owner = this;
	ActorSpawnParams.Instigator = Cast<APawn>(GetOwner());
	FTransform Transform = Muzzle->GetComponentTransform();
	
	AProjectile_RangedTroop* proj = GetWorld()->SpawnActor<AProjectile_RangedTroop>(ProjectileClass, Transform.GetLocation(), Transform.GetRotation().Rotator(), ActorSpawnParams);

	proj->SetFireDirection(Transform.GetRotation().Vector());

	attack = false;
}
