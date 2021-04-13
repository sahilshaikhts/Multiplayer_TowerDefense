// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWERDEFENCE_ShopSystem_generated_h
#error "ShopSystem.generated.h already included, missing '#pragma once' in ShopSystem.h"
#endif
#define TOWERDEFENCE_ShopSystem_generated_h

#define TowerDefence_Source_TowerDefence_Public_ShopSystem_h_21_SPARSE_DATA
#define TowerDefence_Source_TowerDefence_Public_ShopSystem_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddToInventory); \
	DECLARE_FUNCTION(execGetCoins);


#define TowerDefence_Source_TowerDefence_Public_ShopSystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddToInventory); \
	DECLARE_FUNCTION(execGetCoins);


#define TowerDefence_Source_TowerDefence_Public_ShopSystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShopSystem(); \
	friend struct Z_Construct_UClass_AShopSystem_Statics; \
public: \
	DECLARE_CLASS(AShopSystem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(AShopSystem)


#define TowerDefence_Source_TowerDefence_Public_ShopSystem_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAShopSystem(); \
	friend struct Z_Construct_UClass_AShopSystem_Statics; \
public: \
	DECLARE_CLASS(AShopSystem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(AShopSystem)


#define TowerDefence_Source_TowerDefence_Public_ShopSystem_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShopSystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShopSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShopSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShopSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShopSystem(AShopSystem&&); \
	NO_API AShopSystem(const AShopSystem&); \
public:


#define TowerDefence_Source_TowerDefence_Public_ShopSystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShopSystem(AShopSystem&&); \
	NO_API AShopSystem(const AShopSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShopSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShopSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShopSystem)


#define TowerDefence_Source_TowerDefence_Public_ShopSystem_h_21_PRIVATE_PROPERTY_OFFSET
#define TowerDefence_Source_TowerDefence_Public_ShopSystem_h_18_PROLOG
#define TowerDefence_Source_TowerDefence_Public_ShopSystem_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_ShopSystem_h_21_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_ShopSystem_h_21_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_ShopSystem_h_21_RPC_WRAPPERS \
	TowerDefence_Source_TowerDefence_Public_ShopSystem_h_21_INCLASS \
	TowerDefence_Source_TowerDefence_Public_ShopSystem_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefence_Source_TowerDefence_Public_ShopSystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_ShopSystem_h_21_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_ShopSystem_h_21_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_ShopSystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_ShopSystem_h_21_INCLASS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_ShopSystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENCE_API UClass* StaticClass<class AShopSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefence_Source_TowerDefence_Public_ShopSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
