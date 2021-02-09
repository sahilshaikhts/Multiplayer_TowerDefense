// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWERDEFENCE_AIMovementComponent_generated_h
#error "AIMovementComponent.generated.h already included, missing '#pragma once' in AIMovementComponent.h"
#endif
#define TOWERDEFENCE_AIMovementComponent_generated_h

#define TowerDefence_Source_TowerDefence_AIMovementComponent_h_13_SPARSE_DATA
#define TowerDefence_Source_TowerDefence_AIMovementComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveToNextPatrolPoint);


#define TowerDefence_Source_TowerDefence_AIMovementComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveToNextPatrolPoint);


#define TowerDefence_Source_TowerDefence_AIMovementComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIMovementComponent(); \
	friend struct Z_Construct_UClass_UAIMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UAIMovementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(UAIMovementComponent)


#define TowerDefence_Source_TowerDefence_AIMovementComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAIMovementComponent(); \
	friend struct Z_Construct_UClass_UAIMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UAIMovementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(UAIMovementComponent)


#define TowerDefence_Source_TowerDefence_AIMovementComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIMovementComponent(UAIMovementComponent&&); \
	NO_API UAIMovementComponent(const UAIMovementComponent&); \
public:


#define TowerDefence_Source_TowerDefence_AIMovementComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIMovementComponent(UAIMovementComponent&&); \
	NO_API UAIMovementComponent(const UAIMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAIMovementComponent)


#define TowerDefence_Source_TowerDefence_AIMovementComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bPatrol() { return STRUCT_OFFSET(UAIMovementComponent, bPatrol); } \
	FORCEINLINE static uint32 __PPO__PatrolPoints() { return STRUCT_OFFSET(UAIMovementComponent, PatrolPoints); }


#define TowerDefence_Source_TowerDefence_AIMovementComponent_h_10_PROLOG
#define TowerDefence_Source_TowerDefence_AIMovementComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_AIMovementComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_AIMovementComponent_h_13_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_AIMovementComponent_h_13_RPC_WRAPPERS \
	TowerDefence_Source_TowerDefence_AIMovementComponent_h_13_INCLASS \
	TowerDefence_Source_TowerDefence_AIMovementComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefence_Source_TowerDefence_AIMovementComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_AIMovementComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_AIMovementComponent_h_13_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_AIMovementComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_AIMovementComponent_h_13_INCLASS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_AIMovementComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENCE_API UClass* StaticClass<class UAIMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefence_Source_TowerDefence_AIMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
