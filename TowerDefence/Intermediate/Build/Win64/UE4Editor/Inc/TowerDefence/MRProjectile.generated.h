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
#ifdef TOWERDEFENCE_MRProjectile_generated_h
#error "MRProjectile.generated.h already included, missing '#pragma once' in MRProjectile.h"
#endif
#define TOWERDEFENCE_MRProjectile_generated_h

#define TowerDefence_Source_TowerDefence_Public_MRProjectile_h_12_SPARSE_DATA
#define TowerDefence_Source_TowerDefence_Public_MRProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TowerDefence_Source_TowerDefence_Public_MRProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define TowerDefence_Source_TowerDefence_Public_MRProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMRProjectile(); \
	friend struct Z_Construct_UClass_AMRProjectile_Statics; \
public: \
	DECLARE_CLASS(AMRProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(AMRProjectile)


#define TowerDefence_Source_TowerDefence_Public_MRProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMRProjectile(); \
	friend struct Z_Construct_UClass_AMRProjectile_Statics; \
public: \
	DECLARE_CLASS(AMRProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(AMRProjectile)


#define TowerDefence_Source_TowerDefence_Public_MRProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMRProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMRProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMRProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMRProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMRProjectile(AMRProjectile&&); \
	NO_API AMRProjectile(const AMRProjectile&); \
public:


#define TowerDefence_Source_TowerDefence_Public_MRProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMRProjectile(AMRProjectile&&); \
	NO_API AMRProjectile(const AMRProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMRProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMRProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMRProjectile)


#define TowerDefence_Source_TowerDefence_Public_MRProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ImpactSound() { return STRUCT_OFFSET(AMRProjectile, ImpactSound); } \
	FORCEINLINE static uint32 __PPO__MaximumSpeed() { return STRUCT_OFFSET(AMRProjectile, MaximumSpeed); } \
	FORCEINLINE static uint32 __PPO__InitialSpeed() { return STRUCT_OFFSET(AMRProjectile, InitialSpeed); }


#define TowerDefence_Source_TowerDefence_Public_MRProjectile_h_9_PROLOG
#define TowerDefence_Source_TowerDefence_Public_MRProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_MRProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_MRProjectile_h_12_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_MRProjectile_h_12_RPC_WRAPPERS \
	TowerDefence_Source_TowerDefence_Public_MRProjectile_h_12_INCLASS \
	TowerDefence_Source_TowerDefence_Public_MRProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefence_Source_TowerDefence_Public_MRProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_MRProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_MRProjectile_h_12_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_MRProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_MRProjectile_h_12_INCLASS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_MRProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENCE_API UClass* StaticClass<class AMRProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefence_Source_TowerDefence_Public_MRProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
