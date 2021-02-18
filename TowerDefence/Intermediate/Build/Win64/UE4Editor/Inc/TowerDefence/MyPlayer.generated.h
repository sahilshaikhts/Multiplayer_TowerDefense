// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWERDEFENCE_MyPlayer_generated_h
#error "MyPlayer.generated.h already included, missing '#pragma once' in MyPlayer.h"
#endif
#define TOWERDEFENCE_MyPlayer_generated_h

#define TowerDefence_Source_TowerDefence_Public_MyPlayer_h_12_SPARSE_DATA
#define TowerDefence_Source_TowerDefence_Public_MyPlayer_h_12_RPC_WRAPPERS
#define TowerDefence_Source_TowerDefence_Public_MyPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TowerDefence_Source_TowerDefence_Public_MyPlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayer(); \
	friend struct Z_Construct_UClass_AMyPlayer_Statics; \
public: \
	DECLARE_CLASS(AMyPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayer)


#define TowerDefence_Source_TowerDefence_Public_MyPlayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayer(); \
	friend struct Z_Construct_UClass_AMyPlayer_Statics; \
public: \
	DECLARE_CLASS(AMyPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayer)


#define TowerDefence_Source_TowerDefence_Public_MyPlayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayer(AMyPlayer&&); \
	NO_API AMyPlayer(const AMyPlayer&); \
public:


#define TowerDefence_Source_TowerDefence_Public_MyPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayer(AMyPlayer&&); \
	NO_API AMyPlayer(const AMyPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayer)


#define TowerDefence_Source_TowerDefence_Public_MyPlayer_h_12_PRIVATE_PROPERTY_OFFSET
#define TowerDefence_Source_TowerDefence_Public_MyPlayer_h_9_PROLOG
#define TowerDefence_Source_TowerDefence_Public_MyPlayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_MyPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_MyPlayer_h_12_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_MyPlayer_h_12_RPC_WRAPPERS \
	TowerDefence_Source_TowerDefence_Public_MyPlayer_h_12_INCLASS \
	TowerDefence_Source_TowerDefence_Public_MyPlayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefence_Source_TowerDefence_Public_MyPlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_MyPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_MyPlayer_h_12_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_MyPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_MyPlayer_h_12_INCLASS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_MyPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENCE_API UClass* StaticClass<class AMyPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefence_Source_TowerDefence_Public_MyPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
