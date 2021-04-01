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
#ifdef TOWERDEFENCE_Tower_Canon_generated_h
#error "Tower_Canon.generated.h already included, missing '#pragma once' in Tower_Canon.h"
#endif
#define TOWERDEFENCE_Tower_Canon_generated_h

#define TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_SPARSE_DATA
#define TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_RPC_WRAPPERS \
	virtual bool Server_Fire_Validate(); \
	virtual void Server_Fire_Implementation(); \
 \
	DECLARE_FUNCTION(execServer_Fire); \
	DECLARE_FUNCTION(execOnOverlapEnd);


#define TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_Fire_Validate(); \
	virtual void Server_Fire_Implementation(); \
 \
	DECLARE_FUNCTION(execServer_Fire); \
	DECLARE_FUNCTION(execOnOverlapEnd);


#define TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_EVENT_PARMS
#define TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_CALLBACK_WRAPPERS
#define TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATower_Canon(); \
	friend struct Z_Construct_UClass_ATower_Canon_Statics; \
public: \
	DECLARE_CLASS(ATower_Canon, ATowerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(ATower_Canon)


#define TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_INCLASS \
private: \
	static void StaticRegisterNativesATower_Canon(); \
	friend struct Z_Construct_UClass_ATower_Canon_Statics; \
public: \
	DECLARE_CLASS(ATower_Canon, ATowerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(ATower_Canon)


#define TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATower_Canon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATower_Canon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATower_Canon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATower_Canon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATower_Canon(ATower_Canon&&); \
	NO_API ATower_Canon(const ATower_Canon&); \
public:


#define TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATower_Canon() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATower_Canon(ATower_Canon&&); \
	NO_API ATower_Canon(const ATower_Canon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATower_Canon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATower_Canon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATower_Canon)


#define TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_PRIVATE_PROPERTY_OFFSET
#define TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_24_PROLOG \
	TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_EVENT_PARMS


#define TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_RPC_WRAPPERS \
	TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_CALLBACK_WRAPPERS \
	TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_INCLASS \
	TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_CALLBACK_WRAPPERS \
	TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_INCLASS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_Tower_Canon_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENCE_API UClass* StaticClass<class ATower_Canon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefence_Source_TowerDefence_Public_Tower_Canon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
