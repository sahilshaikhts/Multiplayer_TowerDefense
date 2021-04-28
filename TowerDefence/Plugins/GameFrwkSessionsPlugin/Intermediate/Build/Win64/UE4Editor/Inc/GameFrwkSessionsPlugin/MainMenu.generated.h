// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEFRWKSESSIONSPLUGIN_MainMenu_generated_h
#error "MainMenu.generated.h already included, missing '#pragma once' in MainMenu.h"
#endif
#define GAMEFRWKSESSIONSPLUGIN_MainMenu_generated_h

#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_MainMenu_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FServerData_Statics; \
	GAMEFRWKSESSIONSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> GAMEFRWKSESSIONSPLUGIN_API UScriptStruct* StaticStruct<struct FServerData>();

#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_MainMenu_h_26_SPARSE_DATA
#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_MainMenu_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGameModeSelect); \
	DECLARE_FUNCTION(execMapSelect); \
	DECLARE_FUNCTION(execQuitPressed); \
	DECLARE_FUNCTION(execOpenMainMenu); \
	DECLARE_FUNCTION(execOpenJoinMenu); \
	DECLARE_FUNCTION(execOpenHostMenu); \
	DECLARE_FUNCTION(execJoinServer); \
	DECLARE_FUNCTION(execHostServer);


#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_MainMenu_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGameModeSelect); \
	DECLARE_FUNCTION(execMapSelect); \
	DECLARE_FUNCTION(execQuitPressed); \
	DECLARE_FUNCTION(execOpenMainMenu); \
	DECLARE_FUNCTION(execOpenJoinMenu); \
	DECLARE_FUNCTION(execOpenHostMenu); \
	DECLARE_FUNCTION(execJoinServer); \
	DECLARE_FUNCTION(execHostServer);


#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_MainMenu_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameFrwkSessionsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_MainMenu_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenu(); \
	friend struct Z_Construct_UClass_UMainMenu_Statics; \
public: \
	DECLARE_CLASS(UMainMenu, UMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameFrwkSessionsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMainMenu)


#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_MainMenu_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu(UMainMenu&&); \
	NO_API UMainMenu(const UMainMenu&); \
public:


#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_MainMenu_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenu(UMainMenu&&); \
	NO_API UMainMenu(const UMainMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenu); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenu)


#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_MainMenu_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HostButton() { return STRUCT_OFFSET(UMainMenu, HostButton); } \
	FORCEINLINE static uint32 __PPO__JoinButton() { return STRUCT_OFFSET(UMainMenu, JoinButton); } \
	FORCEINLINE static uint32 __PPO__QuitButton() { return STRUCT_OFFSET(UMainMenu, QuitButton); } \
	FORCEINLINE static uint32 __PPO__CancelJoinMenuButton() { return STRUCT_OFFSET(UMainMenu, CancelJoinMenuButton); } \
	FORCEINLINE static uint32 __PPO__ConfirmJoinMenuButton() { return STRUCT_OFFSET(UMainMenu, ConfirmJoinMenuButton); } \
	FORCEINLINE static uint32 __PPO__MenuSwitcher() { return STRUCT_OFFSET(UMainMenu, MenuSwitcher); } \
	FORCEINLINE static uint32 __PPO__MainMenu() { return STRUCT_OFFSET(UMainMenu, MainMenu); } \
	FORCEINLINE static uint32 __PPO__JoinMenu() { return STRUCT_OFFSET(UMainMenu, JoinMenu); } \
	FORCEINLINE static uint32 __PPO__HostMenu() { return STRUCT_OFFSET(UMainMenu, HostMenu); } \
	FORCEINLINE static uint32 __PPO__ServerHostName() { return STRUCT_OFFSET(UMainMenu, ServerHostName); } \
	FORCEINLINE static uint32 __PPO__TeamHost() { return STRUCT_OFFSET(UMainMenu, TeamHost); } \
	FORCEINLINE static uint32 __PPO__TeamJoin() { return STRUCT_OFFSET(UMainMenu, TeamJoin); } \
	FORCEINLINE static uint32 __PPO__CancelHostMenuButton() { return STRUCT_OFFSET(UMainMenu, CancelHostMenuButton); } \
	FORCEINLINE static uint32 __PPO__ConfirmHostMenuButton() { return STRUCT_OFFSET(UMainMenu, ConfirmHostMenuButton); } \
	FORCEINLINE static uint32 __PPO__ServerList() { return STRUCT_OFFSET(UMainMenu, ServerList); } \
	FORCEINLINE static uint32 __PPO__MapComboBox() { return STRUCT_OFFSET(UMainMenu, MapComboBox); } \
	FORCEINLINE static uint32 __PPO__GameModesComboBox() { return STRUCT_OFFSET(UMainMenu, GameModesComboBox); }


#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_MainMenu_h_23_PROLOG
#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_MainMenu_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_MainMenu_h_26_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_MainMenu_h_26_SPARSE_DATA \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_MainMenu_h_26_RPC_WRAPPERS \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_MainMenu_h_26_INCLASS \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_MainMenu_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_MainMenu_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_MainMenu_h_26_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_MainMenu_h_26_SPARSE_DATA \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_MainMenu_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_MainMenu_h_26_INCLASS_NO_PURE_DECLS \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_MainMenu_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEFRWKSESSIONSPLUGIN_API UClass* StaticClass<class UMainMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_MenuSystem_MainMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
