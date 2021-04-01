// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWERDEFENCE_MyGameStateBase_generated_h
#error "MyGameStateBase.generated.h already included, missing '#pragma once' in MyGameStateBase.h"
#endif
#define TOWERDEFENCE_MyGameStateBase_generated_h

#define TowerDefence_Source_TowerDefence_Public_MyGameStateBase_h_37_SPARSE_DATA
#define TowerDefence_Source_TowerDefence_Public_MyGameStateBase_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSwitchUI);


#define TowerDefence_Source_TowerDefence_Public_MyGameStateBase_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSwitchUI);


#define TowerDefence_Source_TowerDefence_Public_MyGameStateBase_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameStateBase(); \
	friend struct Z_Construct_UClass_AMyGameStateBase_Statics; \
public: \
	DECLARE_CLASS(AMyGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(AMyGameStateBase)


#define TowerDefence_Source_TowerDefence_Public_MyGameStateBase_h_37_INCLASS \
private: \
	static void StaticRegisterNativesAMyGameStateBase(); \
	friend struct Z_Construct_UClass_AMyGameStateBase_Statics; \
public: \
	DECLARE_CLASS(AMyGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(AMyGameStateBase)


#define TowerDefence_Source_TowerDefence_Public_MyGameStateBase_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameStateBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameStateBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameStateBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameStateBase(AMyGameStateBase&&); \
	NO_API AMyGameStateBase(const AMyGameStateBase&); \
public:


#define TowerDefence_Source_TowerDefence_Public_MyGameStateBase_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameStateBase(AMyGameStateBase&&); \
	NO_API AMyGameStateBase(const AMyGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameStateBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameStateBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyGameStateBase)


#define TowerDefence_Source_TowerDefence_Public_MyGameStateBase_h_37_PRIVATE_PROPERTY_OFFSET
#define TowerDefence_Source_TowerDefence_Public_MyGameStateBase_h_33_PROLOG
#define TowerDefence_Source_TowerDefence_Public_MyGameStateBase_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_MyGameStateBase_h_37_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_MyGameStateBase_h_37_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_MyGameStateBase_h_37_RPC_WRAPPERS \
	TowerDefence_Source_TowerDefence_Public_MyGameStateBase_h_37_INCLASS \
	TowerDefence_Source_TowerDefence_Public_MyGameStateBase_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefence_Source_TowerDefence_Public_MyGameStateBase_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_MyGameStateBase_h_37_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_MyGameStateBase_h_37_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_MyGameStateBase_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_MyGameStateBase_h_37_INCLASS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_MyGameStateBase_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENCE_API UClass* StaticClass<class AMyGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefence_Source_TowerDefence_Public_MyGameStateBase_h


#define FOREACH_ENUM_MYSTATES(op) \
	op(MyStates::Intermission) \
	op(MyStates::Paused) \
	op(MyStates::Play) \
	op(MyStates::GameOver) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
