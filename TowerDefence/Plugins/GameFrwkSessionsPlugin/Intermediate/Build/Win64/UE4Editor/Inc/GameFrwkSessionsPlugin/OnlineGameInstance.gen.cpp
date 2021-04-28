// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFrwkSessionsPlugin/OnlineGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineGameInstance() {}
// Cross Module References
	GAMEFRWKSESSIONSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FFriendData();
	UPackage* Z_Construct_UPackage__Script_GameFrwkSessionsPlugin();
	GAMEFRWKSESSIONSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGameModeData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	GAMEFRWKSESSIONSPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMapData();
	GAMEFRWKSESSIONSPLUGIN_API UClass* Z_Construct_UClass_UOnlineGameInstance_NoRegister();
	GAMEFRWKSESSIONSPLUGIN_API UClass* Z_Construct_UClass_UOnlineGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	GAMEFRWKSESSIONSPLUGIN_API UClass* Z_Construct_UClass_UMenuInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FFriendData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEFRWKSESSIONSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FFriendData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFriendData, Z_Construct_UPackage__Script_GameFrwkSessionsPlugin(), TEXT("FriendData"), sizeof(FFriendData), Get_Z_Construct_UScriptStruct_FFriendData_Hash());
	}
	return Singleton;
}
template<> GAMEFRWKSESSIONSPLUGIN_API UScriptStruct* StaticStruct<FFriendData>()
{
	return FFriendData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFriendData(FFriendData::StaticStruct, TEXT("/Script/GameFrwkSessionsPlugin"), TEXT("FriendData"), false, nullptr, nullptr);
static struct FScriptStruct_GameFrwkSessionsPlugin_StaticRegisterNativesFFriendData
{
	FScriptStruct_GameFrwkSessionsPlugin_StaticRegisterNativesFFriendData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FriendData")),new UScriptStruct::TCppStructOps<FFriendData>);
	}
} ScriptStruct_GameFrwkSessionsPlugin_StaticRegisterNativesFFriendData;
	struct Z_Construct_UScriptStruct_FFriendData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueNetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UniqueNetId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Presence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Presence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RealName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RealName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "OnlineGameInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFriendData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFriendData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendData_Statics::NewProp_UniqueNetId_MetaData[] = {
		{ "Category", "Online|Friend" },
		{ "ModuleRelativePath", "OnlineGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFriendData_Statics::NewProp_UniqueNetId = { "UniqueNetId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFriendData, UniqueNetId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendData_Statics::NewProp_UniqueNetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendData_Statics::NewProp_UniqueNetId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendData_Statics::NewProp_Presence_MetaData[] = {
		{ "Category", "Online|Friend" },
		{ "ModuleRelativePath", "OnlineGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFriendData_Statics::NewProp_Presence = { "Presence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFriendData, Presence), METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendData_Statics::NewProp_Presence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendData_Statics::NewProp_Presence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendData_Statics::NewProp_RealName_MetaData[] = {
		{ "Category", "Online|Friend" },
		{ "ModuleRelativePath", "OnlineGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFriendData_Statics::NewProp_RealName = { "RealName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFriendData, RealName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendData_Statics::NewProp_RealName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendData_Statics::NewProp_RealName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Online|Friend" },
		{ "ModuleRelativePath", "OnlineGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFriendData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFriendData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendData_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFriendData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendData_Statics::NewProp_UniqueNetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendData_Statics::NewProp_Presence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendData_Statics::NewProp_RealName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendData_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFriendData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameFrwkSessionsPlugin,
		nullptr,
		&NewStructOps,
		"FriendData",
		sizeof(FFriendData),
		alignof(FFriendData),
		Z_Construct_UScriptStruct_FFriendData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFriendData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFriendData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameFrwkSessionsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FriendData"), sizeof(FFriendData), Get_Z_Construct_UScriptStruct_FFriendData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFriendData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFriendData_Hash() { return 3863580013U; }
class UScriptStruct* FGameModeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEFRWKSESSIONSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FGameModeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameModeData, Z_Construct_UPackage__Script_GameFrwkSessionsPlugin(), TEXT("GameModeData"), sizeof(FGameModeData), Get_Z_Construct_UScriptStruct_FGameModeData_Hash());
	}
	return Singleton;
}
template<> GAMEFRWKSESSIONSPLUGIN_API UScriptStruct* StaticStruct<FGameModeData>()
{
	return FGameModeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameModeData(FGameModeData::StaticStruct, TEXT("/Script/GameFrwkSessionsPlugin"), TEXT("GameModeData"), false, nullptr, nullptr);
static struct FScriptStruct_GameFrwkSessionsPlugin_StaticRegisterNativesFGameModeData
{
	FScriptStruct_GameFrwkSessionsPlugin_StaticRegisterNativesFGameModeData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameModeData")),new UScriptStruct::TCppStructOps<FGameModeData>);
	}
} ScriptStruct_GameFrwkSessionsPlugin_StaticRegisterNativesFGameModeData;
	struct Z_Construct_UScriptStruct_FGameModeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameModeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameModeData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "OnlineGameInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameModeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameModeData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameModeData_Statics::NewProp_GameModeName_MetaData[] = {
		{ "Category", "GameModeData" },
		{ "ModuleRelativePath", "OnlineGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameModeData_Statics::NewProp_GameModeName = { "GameModeName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameModeData, GameModeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameModeData_Statics::NewProp_GameModeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameModeData_Statics::NewProp_GameModeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameModeData_Statics::NewProp_GameMode_MetaData[] = {
		{ "Category", "GameModeData" },
		{ "ModuleRelativePath", "OnlineGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameModeData_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameModeData, GameMode), Z_Construct_UClass_AGameModeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameModeData_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameModeData_Statics::NewProp_GameMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameModeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameModeData_Statics::NewProp_GameModeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameModeData_Statics::NewProp_GameMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameModeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameFrwkSessionsPlugin,
		nullptr,
		&NewStructOps,
		"GameModeData",
		sizeof(FGameModeData),
		alignof(FGameModeData),
		Z_Construct_UScriptStruct_FGameModeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameModeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameModeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameModeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameModeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameModeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameFrwkSessionsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameModeData"), sizeof(FGameModeData), Get_Z_Construct_UScriptStruct_FGameModeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameModeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameModeData_Hash() { return 2792763040U; }
class UScriptStruct* FMapData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEFRWKSESSIONSPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FMapData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapData, Z_Construct_UPackage__Script_GameFrwkSessionsPlugin(), TEXT("MapData"), sizeof(FMapData), Get_Z_Construct_UScriptStruct_FMapData_Hash());
	}
	return Singleton;
}
template<> GAMEFRWKSESSIONSPLUGIN_API UScriptStruct* StaticStruct<FMapData>()
{
	return FMapData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMapData(FMapData::StaticStruct, TEXT("/Script/GameFrwkSessionsPlugin"), TEXT("MapData"), false, nullptr, nullptr);
static struct FScriptStruct_GameFrwkSessionsPlugin_StaticRegisterNativesFMapData
{
	FScriptStruct_GameFrwkSessionsPlugin_StaticRegisterNativesFMapData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MapData")),new UScriptStruct::TCppStructOps<FMapData>);
	}
} ScriptStruct_GameFrwkSessionsPlugin_StaticRegisterNativesFMapData;
	struct Z_Construct_UScriptStruct_FMapData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameModePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "OnlineGameInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMapData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapData_Statics::NewProp_GameModePath_MetaData[] = {
		{ "ModuleRelativePath", "OnlineGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapData_Statics::NewProp_GameModePath = { "GameModePath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapData, GameModePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapData_Statics::NewProp_GameModePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapData_Statics::NewProp_GameModePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapData_Statics::NewProp_GameMode_MetaData[] = {
		{ "ModuleRelativePath", "OnlineGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapData_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapData, GameMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapData_Statics::NewProp_GameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapData_Statics::NewProp_GameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapData_Statics::NewProp_MapPath_MetaData[] = {
		{ "ModuleRelativePath", "OnlineGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapData_Statics::NewProp_MapPath = { "MapPath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapData, MapPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapData_Statics::NewProp_MapPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapData_Statics::NewProp_MapPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMapData_Statics::NewProp_MapName_MetaData[] = {
		{ "ModuleRelativePath", "OnlineGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMapData_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMapData, MapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMapData_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapData_Statics::NewProp_MapName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapData_Statics::NewProp_GameModePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapData_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapData_Statics::NewProp_MapPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapData_Statics::NewProp_MapName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameFrwkSessionsPlugin,
		nullptr,
		&NewStructOps,
		"MapData",
		sizeof(FMapData),
		alignof(FMapData),
		Z_Construct_UScriptStruct_FMapData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMapData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMapData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMapData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameFrwkSessionsPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MapData"), sizeof(FMapData), Get_Z_Construct_UScriptStruct_FMapData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMapData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMapData_Hash() { return 7029075U; }
	DEFINE_FUNCTION(UOnlineGameInstance::execJoin)
	{
		P_GET_PROPERTY(FUInt32Property,Z_Param_Index);
		P_GET_PROPERTY(FStrProperty,Z_Param_Team);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Join(Z_Param_Index,Z_Param_Team);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineGameInstance::execHost)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Team);
		P_GET_PROPERTY(FStrProperty,Z_Param_Map);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Host(Z_Param_ServerName,Z_Param_Team,Z_Param_Map);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineGameInstance::execInGameLoadMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InGameLoadMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlineGameInstance::execLoadMenuWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadMenuWidget();
		P_NATIVE_END;
	}
	void UOnlineGameInstance::StaticRegisterNativesUOnlineGameInstance()
	{
		UClass* Class = UOnlineGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Host", &UOnlineGameInstance::execHost },
			{ "InGameLoadMenu", &UOnlineGameInstance::execInGameLoadMenu },
			{ "Join", &UOnlineGameInstance::execJoin },
			{ "LoadMenuWidget", &UOnlineGameInstance::execLoadMenuWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlineGameInstance_Host_Statics
	{
		struct OnlineGameInstance_eventHost_Parms
		{
			FString ServerName;
			FString Team;
			FString Map;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Map;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Team;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameInstance_Host_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGameInstance_eventHost_Parms, Map), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameInstance_Host_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGameInstance_eventHost_Parms, Team), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameInstance_Host_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGameInstance_eventHost_Parms, ServerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGameInstance_Host_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameInstance_Host_Statics::NewProp_Map,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameInstance_Host_Statics::NewProp_Team,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameInstance_Host_Statics::NewProp_ServerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGameInstance_Host_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OnlineGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGameInstance_Host_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGameInstance, nullptr, "Host", nullptr, nullptr, sizeof(OnlineGameInstance_eventHost_Parms), Z_Construct_UFunction_UOnlineGameInstance_Host_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameInstance_Host_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGameInstance_Host_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameInstance_Host_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGameInstance_Host()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineGameInstance_Host_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineGameInstance_InGameLoadMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGameInstance_InGameLoadMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OnlineGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGameInstance_InGameLoadMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGameInstance, nullptr, "InGameLoadMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGameInstance_InGameLoadMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameInstance_InGameLoadMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGameInstance_InGameLoadMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineGameInstance_InGameLoadMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineGameInstance_Join_Statics
	{
		struct OnlineGameInstance_eventJoin_Parms
		{
			uint32 Index;
			FString Team;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Team;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlineGameInstance_Join_Statics::NewProp_Team = { "Team", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGameInstance_eventJoin_Parms, Team), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UOnlineGameInstance_Join_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlineGameInstance_eventJoin_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlineGameInstance_Join_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameInstance_Join_Statics::NewProp_Team,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlineGameInstance_Join_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGameInstance_Join_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OnlineGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGameInstance_Join_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGameInstance, nullptr, "Join", nullptr, nullptr, sizeof(OnlineGameInstance_eventJoin_Parms), Z_Construct_UFunction_UOnlineGameInstance_Join_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameInstance_Join_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGameInstance_Join_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameInstance_Join_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGameInstance_Join()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineGameInstance_Join_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlineGameInstance_LoadMenuWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlineGameInstance_LoadMenuWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OnlineGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlineGameInstance_LoadMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlineGameInstance, nullptr, "LoadMenuWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlineGameInstance_LoadMenuWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlineGameInstance_LoadMenuWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlineGameInstance_LoadMenuWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlineGameInstance_LoadMenuWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlineGameInstance_NoRegister()
	{
		return UOnlineGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterChoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CharacterChoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character2_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Character2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character1_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Character1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameModes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameModes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalPlayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFrwkSessionsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlineGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlineGameInstance_Host, "Host" }, // 919145233
		{ &Z_Construct_UFunction_UOnlineGameInstance_InGameLoadMenu, "InGameLoadMenu" }, // 3774069251
		{ &Z_Construct_UFunction_UOnlineGameInstance_Join, "Join" }, // 3173699309
		{ &Z_Construct_UFunction_UOnlineGameInstance_LoadMenuWidget, "LoadMenuWidget" }, // 595491291
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "OnlineGameInstance.h" },
		{ "ModuleRelativePath", "OnlineGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_CharacterChoice_MetaData[] = {
		{ "Category", "Player Characters" },
		{ "Comment", "//1\n" },
		{ "ModuleRelativePath", "OnlineGameInstance.h" },
		{ "ToolTip", "1" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_CharacterChoice = { "CharacterChoice", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineGameInstance, CharacterChoice), METADATA_PARAMS(Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_CharacterChoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_CharacterChoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_Character2_MetaData[] = {
		{ "Category", "Player Characters" },
		{ "Comment", "//0\n" },
		{ "ModuleRelativePath", "OnlineGameInstance.h" },
		{ "ToolTip", "0" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_Character2 = { "Character2", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineGameInstance, Character2), Z_Construct_UClass_ACharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_Character2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_Character2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_Character1_MetaData[] = {
		{ "Category", "Player Characters" },
		{ "ModuleRelativePath", "OnlineGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_Character1 = { "Character1", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineGameInstance, Character1), Z_Construct_UClass_ACharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_Character1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_Character1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_GameModes_MetaData[] = {
		{ "Category", "Game Modes" },
		{ "Comment", "//Game Modes Can be Set In The BP\n" },
		{ "ModuleRelativePath", "OnlineGameInstance.h" },
		{ "ToolTip", "Game Modes Can be Set In The BP" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_GameModes = { "GameModes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineGameInstance, GameModes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_GameModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_GameModes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_GameModes_Inner = { "GameModes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameModeData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_LocalPlayerName_MetaData[] = {
		{ "Category", "OnlineGameInstance" },
		{ "ModuleRelativePath", "OnlineGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_LocalPlayerName = { "LocalPlayerName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineGameInstance, LocalPlayerName), METADATA_PARAMS(Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_LocalPlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_LocalPlayerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_CharacterChoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_Character2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_Character1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_GameModes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_GameModes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineGameInstance_Statics::NewProp_LocalPlayerName,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOnlineGameInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMenuInterface_NoRegister, (int32)VTABLE_OFFSET(UOnlineGameInstance, IMenuInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineGameInstance_Statics::ClassParams = {
		&UOnlineGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnlineGameInstance_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameInstance_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineGameInstance, 2690073868);
	template<> GAMEFRWKSESSIONSPLUGIN_API UClass* StaticClass<UOnlineGameInstance>()
	{
		return UOnlineGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineGameInstance(Z_Construct_UClass_UOnlineGameInstance, &UOnlineGameInstance::StaticClass, TEXT("/Script/GameFrwkSessionsPlugin"), TEXT("UOnlineGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
