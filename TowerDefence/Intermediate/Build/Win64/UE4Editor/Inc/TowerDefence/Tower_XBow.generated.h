// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWERDEFENCE_Tower_XBow_generated_h
#error "Tower_XBow.generated.h already included, missing '#pragma once' in Tower_XBow.h"
#endif
#define TOWERDEFENCE_Tower_XBow_generated_h

#define TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_SPARSE_DATA
#define TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_RPC_WRAPPERS \
	virtual bool Server_Fire_Validate(); \
	virtual void Server_Fire_Implementation(); \
 \
	DECLARE_FUNCTION(execServer_Fire);


#define TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_Fire_Validate(); \
	virtual void Server_Fire_Implementation(); \
 \
	DECLARE_FUNCTION(execServer_Fire);


#define TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_EVENT_PARMS
#define TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_CALLBACK_WRAPPERS
#define TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATower_XBow(); \
	friend struct Z_Construct_UClass_ATower_XBow_Statics; \
public: \
	DECLARE_CLASS(ATower_XBow, ATowerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(ATower_XBow)


#define TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATower_XBow(); \
	friend struct Z_Construct_UClass_ATower_XBow_Statics; \
public: \
	DECLARE_CLASS(ATower_XBow, ATowerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(ATower_XBow)


#define TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATower_XBow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATower_XBow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATower_XBow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATower_XBow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATower_XBow(ATower_XBow&&); \
	NO_API ATower_XBow(const ATower_XBow&); \
public:


#define TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATower_XBow() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATower_XBow(ATower_XBow&&); \
	NO_API ATower_XBow(const ATower_XBow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATower_XBow); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATower_XBow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATower_XBow)


#define TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_PRIVATE_PROPERTY_OFFSET
#define TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_12_PROLOG \
	TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_EVENT_PARMS


#define TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_RPC_WRAPPERS \
	TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_CALLBACK_WRAPPERS \
	TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_INCLASS \
	TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_CALLBACK_WRAPPERS \
	TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_INCLASS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_Tower_XBow_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENCE_API UClass* StaticClass<class ATower_XBow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefence_Source_TowerDefence_Public_Tower_XBow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
