// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TOWERDEFENCE_Projectile_RangedTroop_generated_h
#error "Projectile_RangedTroop.generated.h already included, missing '#pragma once' in Projectile_RangedTroop.h"
#endif
#define TOWERDEFENCE_Projectile_RangedTroop_generated_h

#define TowerDefence_Source_TowerDefence_Public_Projectile_RangedTroop_h_12_SPARSE_DATA
#define TowerDefence_Source_TowerDefence_Public_Projectile_RangedTroop_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TowerDefence_Source_TowerDefence_Public_Projectile_RangedTroop_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TowerDefence_Source_TowerDefence_Public_Projectile_RangedTroop_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectile_RangedTroop(); \
	friend struct Z_Construct_UClass_AProjectile_RangedTroop_Statics; \
public: \
	DECLARE_CLASS(AProjectile_RangedTroop, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(AProjectile_RangedTroop)


#define TowerDefence_Source_TowerDefence_Public_Projectile_RangedTroop_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProjectile_RangedTroop(); \
	friend struct Z_Construct_UClass_AProjectile_RangedTroop_Statics; \
public: \
	DECLARE_CLASS(AProjectile_RangedTroop, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(AProjectile_RangedTroop)


#define TowerDefence_Source_TowerDefence_Public_Projectile_RangedTroop_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectile_RangedTroop(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectile_RangedTroop) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile_RangedTroop); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile_RangedTroop); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile_RangedTroop(AProjectile_RangedTroop&&); \
	NO_API AProjectile_RangedTroop(const AProjectile_RangedTroop&); \
public:


#define TowerDefence_Source_TowerDefence_Public_Projectile_RangedTroop_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectile_RangedTroop(AProjectile_RangedTroop&&); \
	NO_API AProjectile_RangedTroop(const AProjectile_RangedTroop&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectile_RangedTroop); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectile_RangedTroop); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectile_RangedTroop)


#define TowerDefence_Source_TowerDefence_Public_Projectile_RangedTroop_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ImpactSound() { return STRUCT_OFFSET(AProjectile_RangedTroop, ImpactSound); } \
	FORCEINLINE static uint32 __PPO__MaximumSpeed() { return STRUCT_OFFSET(AProjectile_RangedTroop, MaximumSpeed); } \
	FORCEINLINE static uint32 __PPO__InitialSpeed() { return STRUCT_OFFSET(AProjectile_RangedTroop, InitialSpeed); }


#define TowerDefence_Source_TowerDefence_Public_Projectile_RangedTroop_h_9_PROLOG
#define TowerDefence_Source_TowerDefence_Public_Projectile_RangedTroop_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_Projectile_RangedTroop_h_12_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_Projectile_RangedTroop_h_12_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_Projectile_RangedTroop_h_12_RPC_WRAPPERS \
	TowerDefence_Source_TowerDefence_Public_Projectile_RangedTroop_h_12_INCLASS \
	TowerDefence_Source_TowerDefence_Public_Projectile_RangedTroop_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefence_Source_TowerDefence_Public_Projectile_RangedTroop_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_Projectile_RangedTroop_h_12_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_Projectile_RangedTroop_h_12_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_Projectile_RangedTroop_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_Projectile_RangedTroop_h_12_INCLASS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_Projectile_RangedTroop_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENCE_API UClass* StaticClass<class AProjectile_RangedTroop>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefence_Source_TowerDefence_Public_Projectile_RangedTroop_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
