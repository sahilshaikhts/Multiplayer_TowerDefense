// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/AIMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIMovementComponent() {}
// Cross Module References
	TOWERDEFENCE_API UClass* Z_Construct_UClass_UAIMovementComponent_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_UAIMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAIMovementComponent::execMoveToNextPatrolPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveToNextPatrolPoint();
		P_NATIVE_END;
	}
	void UAIMovementComponent::StaticRegisterNativesUAIMovementComponent()
	{
		UClass* Class = UAIMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveToNextPatrolPoint", &UAIMovementComponent::execMoveToNextPatrolPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIMovementComponent_MoveToNextPatrolPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIMovementComponent_MoveToNextPatrolPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AIMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIMovementComponent_MoveToNextPatrolPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIMovementComponent, nullptr, "MoveToNextPatrolPoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIMovementComponent_MoveToNextPatrolPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIMovementComponent_MoveToNextPatrolPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIMovementComponent_MoveToNextPatrolPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIMovementComponent_MoveToNextPatrolPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIMovementComponent_NoRegister()
	{
		return UAIMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAIMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PatrolPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PatrolPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPatrol_MetaData[];
#endif
		static void NewProp_bPatrol_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPatrol;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIMovementComponent_MoveToNextPatrolPoint, "MoveToNextPatrolPoint" }, // 1634759870
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AIMovementComponent.h" },
		{ "ModuleRelativePath", "AIMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIMovementComponent_Statics::NewProp_PatrolPoints_MetaData[] = {
		{ "Category", "AI" },
		{ "EditCondition", "bPatrol" },
		{ "ModuleRelativePath", "AIMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAIMovementComponent_Statics::NewProp_PatrolPoints = { "PatrolPoints", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAIMovementComponent, PatrolPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAIMovementComponent_Statics::NewProp_PatrolPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIMovementComponent_Statics::NewProp_PatrolPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIMovementComponent_Statics::NewProp_PatrolPoints_Inner = { "PatrolPoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIMovementComponent_Statics::NewProp_bPatrol_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AIMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAIMovementComponent_Statics::NewProp_bPatrol_SetBit(void* Obj)
	{
		((UAIMovementComponent*)Obj)->bPatrol = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAIMovementComponent_Statics::NewProp_bPatrol = { "bPatrol", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAIMovementComponent), &Z_Construct_UClass_UAIMovementComponent_Statics::NewProp_bPatrol_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAIMovementComponent_Statics::NewProp_bPatrol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIMovementComponent_Statics::NewProp_bPatrol_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIMovementComponent_Statics::NewProp_PatrolPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIMovementComponent_Statics::NewProp_PatrolPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIMovementComponent_Statics::NewProp_bPatrol,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIMovementComponent_Statics::ClassParams = {
		&UAIMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAIMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAIMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAIMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIMovementComponent, 4091202168);
	template<> TOWERDEFENCE_API UClass* StaticClass<UAIMovementComponent>()
	{
		return UAIMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIMovementComponent(Z_Construct_UClass_UAIMovementComponent, &UAIMovementComponent::StaticClass, TEXT("/Script/TowerDefence"), TEXT("UAIMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
