// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEFRWKSESSIONSPLUGIN_InGameMenu_generated_h
#error "InGameMenu.generated.h already included, missing '#pragma once' in InGameMenu.h"
#endif
#define GAMEFRWKSESSIONSPLUGIN_InGameMenu_generated_h

#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_InGameMenu_h_15_SPARSE_DATA
#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_InGameMenu_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQuitPressed); \
	DECLARE_FUNCTION(execCancelPressed);


#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_InGameMenu_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQuitPressed); \
	DECLARE_FUNCTION(execCancelPressed);


#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_InGameMenu_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInGameMenu(); \
	friend struct Z_Construct_UClass_UInGameMenu_Statics; \
public: \
	DECLARE_CLASS(UInGameMenu, UMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameFrwkSessionsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UInGameMenu)


#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_InGameMenu_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInGameMenu(); \
	friend struct Z_Construct_UClass_UInGameMenu_Statics; \
public: \
	DECLARE_CLASS(UInGameMenu, UMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameFrwkSessionsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UInGameMenu)


#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_InGameMenu_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInGameMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInGameMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInGameMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInGameMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInGameMenu(UInGameMenu&&); \
	NO_API UInGameMenu(const UInGameMenu&); \
public:


#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_InGameMenu_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInGameMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInGameMenu(UInGameMenu&&); \
	NO_API UInGameMenu(const UInGameMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInGameMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInGameMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInGameMenu)


#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_InGameMenu_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CancelButton() { return STRUCT_OFFSET(UInGameMenu, CancelButton); } \
	FORCEINLINE static uint32 __PPO__QuitButton() { return STRUCT_OFFSET(UInGameMenu, QuitButton); }


#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_InGameMenu_h_12_PROLOG
#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_InGameMenu_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_InGameMenu_h_15_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_InGameMenu_h_15_SPARSE_DATA \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_InGameMenu_h_15_RPC_WRAPPERS \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_InGameMenu_h_15_INCLASS \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_InGameMenu_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_InGameMenu_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_InGameMenu_h_15_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_InGameMenu_h_15_SPARSE_DATA \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_InGameMenu_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_InGameMenu_h_15_INCLASS_NO_PURE_DECLS \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_InGameMenu_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEFRWKSESSIONSPLUGIN_API UClass* StaticClass<class UInGameMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_InGameMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
