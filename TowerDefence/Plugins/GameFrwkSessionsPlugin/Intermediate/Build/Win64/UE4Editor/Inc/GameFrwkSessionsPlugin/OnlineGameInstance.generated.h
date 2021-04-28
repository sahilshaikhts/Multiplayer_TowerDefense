// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEFRWKSESSIONSPLUGIN_OnlineGameInstance_generated_h
#error "OnlineGameInstance.generated.h already included, missing '#pragma once' in OnlineGameInstance.h"
#endif
#define GAMEFRWKSESSIONSPLUGIN_OnlineGameInstance_generated_h

#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFriendData_Statics; \
	GAMEFRWKSESSIONSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> GAMEFRWKSESSIONSPLUGIN_API UScriptStruct* StaticStruct<struct FFriendData>();

#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameModeData_Statics; \
	GAMEFRWKSESSIONSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> GAMEFRWKSESSIONSPLUGIN_API UScriptStruct* StaticStruct<struct FGameModeData>();

#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMapData_Statics; \
	GAMEFRWKSESSIONSPLUGIN_API static class UScriptStruct* StaticStruct();


template<> GAMEFRWKSESSIONSPLUGIN_API UScriptStruct* StaticStruct<struct FMapData>();

#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_78_SPARSE_DATA
#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_78_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJoin); \
	DECLARE_FUNCTION(execHost); \
	DECLARE_FUNCTION(execInGameLoadMenu); \
	DECLARE_FUNCTION(execLoadMenuWidget);


#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJoin); \
	DECLARE_FUNCTION(execHost); \
	DECLARE_FUNCTION(execInGameLoadMenu); \
	DECLARE_FUNCTION(execLoadMenuWidget);


#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineGameInstance(); \
	friend struct Z_Construct_UClass_UOnlineGameInstance_Statics; \
public: \
	DECLARE_CLASS(UOnlineGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameFrwkSessionsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOnlineGameInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UOnlineGameInstance*>(this); }


#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_78_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineGameInstance(); \
	friend struct Z_Construct_UClass_UOnlineGameInstance_Statics; \
public: \
	DECLARE_CLASS(UOnlineGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameFrwkSessionsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UOnlineGameInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UOnlineGameInstance*>(this); }


#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineGameInstance(UOnlineGameInstance&&); \
	NO_API UOnlineGameInstance(const UOnlineGameInstance&); \
public:


#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_78_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineGameInstance(UOnlineGameInstance&&); \
	NO_API UOnlineGameInstance(const UOnlineGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineGameInstance)


#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_78_PRIVATE_PROPERTY_OFFSET
#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_75_PROLOG
#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_78_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_78_SPARSE_DATA \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_78_RPC_WRAPPERS \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_78_INCLASS \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_78_PRIVATE_PROPERTY_OFFSET \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_78_SPARSE_DATA \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_78_INCLASS_NO_PURE_DECLS \
	TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEFRWKSESSIONSPLUGIN_API UClass* StaticClass<class UOnlineGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TowerDefence_Plugins_GameFrwkSessionsPlugin_Source_GameFrwkSessionsPlugin_OnlineGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
