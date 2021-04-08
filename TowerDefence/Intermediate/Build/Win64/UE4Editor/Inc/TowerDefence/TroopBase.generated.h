// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWERDEFENCE_TroopBase_generated_h
#error "TroopBase.generated.h already included, missing '#pragma once' in TroopBase.h"
#endif
#define TOWERDEFENCE_TroopBase_generated_h

#define TowerDefence_Source_TowerDefence_Public_TroopBase_h_25_SPARSE_DATA
#define TowerDefence_Source_TowerDefence_Public_TroopBase_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSlowMo); \
	DECLARE_FUNCTION(execGetAttack);


#define TowerDefence_Source_TowerDefence_Public_TroopBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSlowMo); \
	DECLARE_FUNCTION(execGetAttack);


#define TowerDefence_Source_TowerDefence_Public_TroopBase_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATroopBase(); \
	friend struct Z_Construct_UClass_ATroopBase_Statics; \
public: \
	DECLARE_CLASS(ATroopBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(ATroopBase)


#define TowerDefence_Source_TowerDefence_Public_TroopBase_h_25_INCLASS \
private: \
	static void StaticRegisterNativesATroopBase(); \
	friend struct Z_Construct_UClass_ATroopBase_Statics; \
public: \
	DECLARE_CLASS(ATroopBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(ATroopBase)


#define TowerDefence_Source_TowerDefence_Public_TroopBase_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATroopBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATroopBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATroopBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATroopBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATroopBase(ATroopBase&&); \
	NO_API ATroopBase(const ATroopBase&); \
public:


#define TowerDefence_Source_TowerDefence_Public_TroopBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATroopBase(ATroopBase&&); \
	NO_API ATroopBase(const ATroopBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATroopBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATroopBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATroopBase)


#define TowerDefence_Source_TowerDefence_Public_TroopBase_h_25_PRIVATE_PROPERTY_OFFSET
#define TowerDefence_Source_TowerDefence_Public_TroopBase_h_22_PROLOG
#define TowerDefence_Source_TowerDefence_Public_TroopBase_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_TroopBase_h_25_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_TroopBase_h_25_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_TroopBase_h_25_RPC_WRAPPERS \
	TowerDefence_Source_TowerDefence_Public_TroopBase_h_25_INCLASS \
	TowerDefence_Source_TowerDefence_Public_TroopBase_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefence_Source_TowerDefence_Public_TroopBase_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_TroopBase_h_25_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_TroopBase_h_25_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_TroopBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_TroopBase_h_25_INCLASS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_TroopBase_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENCE_API UClass* StaticClass<class ATroopBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefence_Source_TowerDefence_Public_TroopBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
