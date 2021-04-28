// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFrwkSessionsPlugin/MenuSystem/MenuInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuInterface() {}
// Cross Module References
	GAMEFRWKSESSIONSPLUGIN_API UClass* Z_Construct_UClass_UMenuInterface_NoRegister();
	GAMEFRWKSESSIONSPLUGIN_API UClass* Z_Construct_UClass_UMenuInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GameFrwkSessionsPlugin();
// End Cross Module References
	void UMenuInterface::StaticRegisterNativesUMenuInterface()
	{
	}
	UClass* Z_Construct_UClass_UMenuInterface_NoRegister()
	{
		return UMenuInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMenuInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMenuInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFrwkSessionsPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "MenuSystem/MenuInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMenuInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMenuInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMenuInterface_Statics::ClassParams = {
		&UMenuInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMenuInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMenuInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMenuInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMenuInterface, 2447067624);
	template<> GAMEFRWKSESSIONSPLUGIN_API UClass* StaticClass<UMenuInterface>()
	{
		return UMenuInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMenuInterface(Z_Construct_UClass_UMenuInterface, &UMenuInterface::StaticClass, TEXT("/Script/GameFrwkSessionsPlugin"), TEXT("UMenuInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
