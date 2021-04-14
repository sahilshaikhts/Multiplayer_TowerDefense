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
struct FHitResult;
struct FVector;
#ifdef TOWERDEFENCE_Troop_Giant_generated_h
#error "Troop_Giant.generated.h already included, missing '#pragma once' in Troop_Giant.h"
#endif
#define TOWERDEFENCE_Troop_Giant_generated_h

#define TowerDefence_Source_TowerDefence_Public_Troop_Giant_h_15_SPARSE_DATA
#define TowerDefence_Source_TowerDefence_Public_Troop_Giant_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginOverlap); \
	DECLARE_FUNCTION(execOnHit);


#define TowerDefence_Source_TowerDefence_Public_Troop_Giant_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginOverlap); \
	DECLARE_FUNCTION(execOnHit);


#define TowerDefence_Source_TowerDefence_Public_Troop_Giant_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATroop_Giant(); \
	friend struct Z_Construct_UClass_ATroop_Giant_Statics; \
public: \
	DECLARE_CLASS(ATroop_Giant, ATroopBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(ATroop_Giant)


#define TowerDefence_Source_TowerDefence_Public_Troop_Giant_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATroop_Giant(); \
	friend struct Z_Construct_UClass_ATroop_Giant_Statics; \
public: \
	DECLARE_CLASS(ATroop_Giant, ATroopBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(ATroop_Giant)


#define TowerDefence_Source_TowerDefence_Public_Troop_Giant_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATroop_Giant(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATroop_Giant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATroop_Giant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATroop_Giant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATroop_Giant(ATroop_Giant&&); \
	NO_API ATroop_Giant(const ATroop_Giant&); \
public:


#define TowerDefence_Source_TowerDefence_Public_Troop_Giant_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATroop_Giant(ATroop_Giant&&); \
	NO_API ATroop_Giant(const ATroop_Giant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATroop_Giant); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATroop_Giant); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATroop_Giant)


#define TowerDefence_Source_TowerDefence_Public_Troop_Giant_h_15_PRIVATE_PROPERTY_OFFSET
#define TowerDefence_Source_TowerDefence_Public_Troop_Giant_h_12_PROLOG
#define TowerDefence_Source_TowerDefence_Public_Troop_Giant_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_Troop_Giant_h_15_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_Troop_Giant_h_15_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_Troop_Giant_h_15_RPC_WRAPPERS \
	TowerDefence_Source_TowerDefence_Public_Troop_Giant_h_15_INCLASS \
	TowerDefence_Source_TowerDefence_Public_Troop_Giant_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefence_Source_TowerDefence_Public_Troop_Giant_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_Troop_Giant_h_15_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_Troop_Giant_h_15_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_Troop_Giant_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_Troop_Giant_h_15_INCLASS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_Troop_Giant_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENCE_API UClass* StaticClass<class ATroop_Giant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefence_Source_TowerDefence_Public_Troop_Giant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
