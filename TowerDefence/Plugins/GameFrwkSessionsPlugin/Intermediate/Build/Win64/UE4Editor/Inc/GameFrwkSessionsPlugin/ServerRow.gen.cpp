// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFrwkSessionsPlugin/MenuSystem/ServerRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerRow() {}
// Cross Module References
	GAMEFRWKSESSIONSPLUGIN_API UClass* Z_Construct_UClass_UServerRow_NoRegister();
	GAMEFRWKSESSIONSPLUGIN_API UClass* Z_Construct_UClass_UServerRow();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GameFrwkSessionsPlugin();
	GAMEFRWKSESSIONSPLUGIN_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UServerRow::execOnClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClicked();
		P_NATIVE_END;
	}
	void UServerRow::StaticRegisterNativesUServerRow()
	{
		UClass* Class = UServerRow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnClicked", &UServerRow::execOnClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UServerRow_OnClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UServerRow_OnClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MenuSystem/ServerRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UServerRow_OnClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UServerRow, nullptr, "OnClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UServerRow_OnClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UServerRow_OnClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UServerRow_OnClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UServerRow_OnClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UServerRow_NoRegister()
	{
		return UServerRow::StaticClass();
	}
	struct Z_Construct_UClass_UServerRow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RowButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Selected_MetaData[];
#endif
		static void NewProp_Selected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Selected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionFraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectionFraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HostUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ServerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UServerRow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFrwkSessionsPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UServerRow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UServerRow_OnClicked, "OnClicked" }, // 760729854
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerRow_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MenuSystem/ServerRow.h" },
		{ "ModuleRelativePath", "MenuSystem/ServerRow.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerRow_Statics::NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/ServerRow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerRow_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UServerRow, Parent), Z_Construct_UClass_UMainMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerRow_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerRow_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerRow_Statics::NewProp_RowButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/ServerRow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerRow_Statics::NewProp_RowButton = { "RowButton", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UServerRow, RowButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerRow_Statics::NewProp_RowButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerRow_Statics::NewProp_RowButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerRow_Statics::NewProp_Selected_MetaData[] = {
		{ "Category", "ServerRow" },
		{ "ModuleRelativePath", "MenuSystem/ServerRow.h" },
	};
#endif
	void Z_Construct_UClass_UServerRow_Statics::NewProp_Selected_SetBit(void* Obj)
	{
		((UServerRow*)Obj)->Selected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UServerRow_Statics::NewProp_Selected = { "Selected", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UServerRow), &Z_Construct_UClass_UServerRow_Statics::NewProp_Selected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UServerRow_Statics::NewProp_Selected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerRow_Statics::NewProp_Selected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerRow_Statics::NewProp_ConnectionFraction_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/ServerRow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerRow_Statics::NewProp_ConnectionFraction = { "ConnectionFraction", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UServerRow, ConnectionFraction), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerRow_Statics::NewProp_ConnectionFraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerRow_Statics::NewProp_ConnectionFraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerRow_Statics::NewProp_HostUser_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/ServerRow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerRow_Statics::NewProp_HostUser = { "HostUser", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UServerRow, HostUser), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerRow_Statics::NewProp_HostUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerRow_Statics::NewProp_HostUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UServerRow_Statics::NewProp_ServerName_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/ServerRow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UServerRow_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UServerRow, ServerName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UServerRow_Statics::NewProp_ServerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UServerRow_Statics::NewProp_ServerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UServerRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerRow_Statics::NewProp_Parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerRow_Statics::NewProp_RowButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerRow_Statics::NewProp_Selected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerRow_Statics::NewProp_ConnectionFraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerRow_Statics::NewProp_HostUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UServerRow_Statics::NewProp_ServerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UServerRow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UServerRow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UServerRow_Statics::ClassParams = {
		&UServerRow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UServerRow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UServerRow_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UServerRow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UServerRow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UServerRow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UServerRow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UServerRow, 1789092996);
	template<> GAMEFRWKSESSIONSPLUGIN_API UClass* StaticClass<UServerRow>()
	{
		return UServerRow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UServerRow(Z_Construct_UClass_UServerRow, &UServerRow::StaticClass, TEXT("/Script/GameFrwkSessionsPlugin"), TEXT("UServerRow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UServerRow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
