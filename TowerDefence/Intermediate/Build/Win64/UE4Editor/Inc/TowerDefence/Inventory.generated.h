// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOWERDEFENCE_Inventory_generated_h
#error "Inventory.generated.h already included, missing '#pragma once' in Inventory.h"
#endif
#define TOWERDEFENCE_Inventory_generated_h

#define TowerDefence_Source_TowerDefence_Public_Inventory_h_38_SPARSE_DATA
#define TowerDefence_Source_TowerDefence_Public_Inventory_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetItemCountByIndex); \
	DECLARE_FUNCTION(execGetItemCount);


#define TowerDefence_Source_TowerDefence_Public_Inventory_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetItemCountByIndex); \
	DECLARE_FUNCTION(execGetItemCount);


#define TowerDefence_Source_TowerDefence_Public_Inventory_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInventory(); \
	friend struct Z_Construct_UClass_AInventory_Statics; \
public: \
	DECLARE_CLASS(AInventory, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(AInventory)


#define TowerDefence_Source_TowerDefence_Public_Inventory_h_38_INCLASS \
private: \
	static void StaticRegisterNativesAInventory(); \
	friend struct Z_Construct_UClass_AInventory_Statics; \
public: \
	DECLARE_CLASS(AInventory, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(AInventory)


#define TowerDefence_Source_TowerDefence_Public_Inventory_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInventory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInventory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInventory(AInventory&&); \
	NO_API AInventory(const AInventory&); \
public:


#define TowerDefence_Source_TowerDefence_Public_Inventory_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInventory(AInventory&&); \
	NO_API AInventory(const AInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInventory)


#define TowerDefence_Source_TowerDefence_Public_Inventory_h_38_PRIVATE_PROPERTY_OFFSET
#define TowerDefence_Source_TowerDefence_Public_Inventory_h_34_PROLOG
#define TowerDefence_Source_TowerDefence_Public_Inventory_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_Inventory_h_38_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_Inventory_h_38_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_Inventory_h_38_RPC_WRAPPERS \
	TowerDefence_Source_TowerDefence_Public_Inventory_h_38_INCLASS \
	TowerDefence_Source_TowerDefence_Public_Inventory_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefence_Source_TowerDefence_Public_Inventory_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Source_TowerDefence_Public_Inventory_h_38_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Source_TowerDefence_Public_Inventory_h_38_SPARSE_DATA \
	TowerDefence_Source_TowerDefence_Public_Inventory_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_Inventory_h_38_INCLASS_NO_PURE_DECLS \
	TowerDefence_Source_TowerDefence_Public_Inventory_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENCE_API UClass* StaticClass<class AInventory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefence_Source_TowerDefence_Public_Inventory_h


#define FOREACH_ENUM_MYENUMS(op) \
	op(MyEnums::troop_swordsMan) \
	op(MyEnums::troop_archer) \
	op(MyEnums::troop_giant) \
	op(MyEnums::tower_XBow) \
	op(MyEnums::tower_canon) \
	op(MyEnums::TypesCount) \
	op(MyEnums::none) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
