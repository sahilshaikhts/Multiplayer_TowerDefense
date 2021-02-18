// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWERDEFENCE_TowerBase_generated_h
#error "TowerBase.generated.h already included, missing '#pragma once' in TowerBase.h"
#endif
#define TOWERDEFENCE_TowerBase_generated_h

#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_12_SPARSE_DATA
#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDamage);


#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDamage);


#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATowerBase(); \
	friend struct Z_Construct_UClass_ATowerBase_Statics; \
public: \
	DECLARE_CLASS(ATowerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(ATowerBase)


#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATowerBase(); \
	friend struct Z_Construct_UClass_ATowerBase_Statics; \
public: \
	DECLARE_CLASS(ATowerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(ATowerBase)


#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATowerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATowerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATowerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATowerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATowerBase(ATowerBase&&); \
	NO_API ATowerBase(const ATowerBase&); \
public:


#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATowerBase(ATowerBase&&); \
	NO_API ATowerBase(const ATowerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATowerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATowerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATowerBase)


#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_12_PRIVATE_PROPERTY_OFFSET
#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_9_PROLOG
#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_TowerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_TowerBase_h_12_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_TowerBase_h_12_RPC_WRAPPERS \
	TowerDefence_Source_TowerDefence_Public_TowerBase_h_12_INCLASS \
	TowerDefence_Source_TowerDefence_Public_TowerBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefence_Source_TowerDefence_Public_TowerBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_TowerBase_h_12_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_TowerBase_h_12_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_TowerBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_TowerBase_h_12_INCLASS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_TowerBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENCE_API UClass* StaticClass<class ATowerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefence_Source_TowerDefence_Public_TowerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
