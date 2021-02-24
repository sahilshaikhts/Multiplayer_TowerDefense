// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/Public/Troop_melee.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTroop_melee() {}
// Cross Module References
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATroop_melee_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATroop_melee();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATroopBase();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
// End Cross Module References
	DEFINE_FUNCTION(ATroop_melee::execGetDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDamage(Z_Param_value);
		P_NATIVE_END;
	}
	void ATroop_melee::StaticRegisterNativesATroop_melee()
	{
		UClass* Class = ATroop_melee::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDamage", &ATroop_melee::execGetDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATroop_melee_GetDamage_Statics
	{
		struct Troop_melee_eventGetDamage_Parms
		{
			float value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATroop_melee_GetDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Troop_melee_eventGetDamage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATroop_melee_GetDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Troop_melee_eventGetDamage_Parms), &Z_Construct_UFunction_ATroop_melee_GetDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATroop_melee_GetDamage_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Troop_melee_eventGetDamage_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATroop_melee_GetDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATroop_melee_GetDamage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATroop_melee_GetDamage_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATroop_melee_GetDamage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);\n" },
		{ "ModuleRelativePath", "Public/Troop_melee.h" },
		{ "ToolTip", "void BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATroop_melee_GetDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATroop_melee, nullptr, "GetDamage", nullptr, nullptr, sizeof(Troop_melee_eventGetDamage_Parms), Z_Construct_UFunction_ATroop_melee_GetDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATroop_melee_GetDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATroop_melee_GetDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATroop_melee_GetDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATroop_melee_GetDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATroop_melee_GetDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATroop_melee_NoRegister()
	{
		return ATroop_melee::StaticClass();
	}
	struct Z_Construct_UClass_ATroop_melee_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATroop_melee_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATroopBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATroop_melee_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATroop_melee_GetDamage, "GetDamage" }, // 3660248949
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATroop_melee_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Troop_melee.h" },
		{ "ModuleRelativePath", "Public/Troop_melee.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATroop_melee_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATroop_melee>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATroop_melee_Statics::ClassParams = {
		&ATroop_melee::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATroop_melee_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATroop_melee_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATroop_melee()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATroop_melee_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATroop_melee, 330553315);
	template<> TOWERDEFENCE_API UClass* StaticClass<ATroop_melee>()
	{
		return ATroop_melee::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATroop_melee(Z_Construct_UClass_ATroop_melee, &ATroop_melee::StaticClass, TEXT("/Script/TowerDefence"), TEXT("ATroop_melee"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATroop_melee);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
