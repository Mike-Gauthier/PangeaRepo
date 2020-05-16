// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PangeaMechanics/AnimalMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimalMotion() {}
// Cross Module References
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_UAnimalMotion_NoRegister();
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_UAnimalMotion();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PangeaMechanics();
// End Cross Module References
	void UAnimalMotion::StaticRegisterNativesUAnimalMotion()
	{
	}
	UClass* Z_Construct_UClass_UAnimalMotion_NoRegister()
	{
		return UAnimalMotion::StaticClass();
	}
	struct Z_Construct_UClass_UAnimalMotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbandonHuntDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AbandonHuntDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxExhaustion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxExhaustion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExhaustionDecrSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExhaustionDecrSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExhaustionIncrSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExhaustionIncrSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetChasingDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetChasingDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimalChasingSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimalChasingSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetFleeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetFleeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimalFleeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimalFleeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTamedDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetTamedDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimalTamedSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimalTamedSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimalRotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimalRotationSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimalMotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PangeaMechanics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimalMotion_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AnimalMotion.h" },
		{ "ModuleRelativePath", "AnimalMotion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AbandonHuntDistance_MetaData[] = {
		{ "Category", "AnimalMotion" },
		{ "Comment", "//Other\n" },
		{ "ModuleRelativePath", "AnimalMotion.h" },
		{ "ToolTip", "Other" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AbandonHuntDistance = { "AbandonHuntDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimalMotion, AbandonHuntDistance), METADATA_PARAMS(Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AbandonHuntDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AbandonHuntDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimalMotion_Statics::NewProp_MaxExhaustion_MetaData[] = {
		{ "Category", "AnimalMotion" },
		{ "ModuleRelativePath", "AnimalMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimalMotion_Statics::NewProp_MaxExhaustion = { "MaxExhaustion", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimalMotion, MaxExhaustion), METADATA_PARAMS(Z_Construct_UClass_UAnimalMotion_Statics::NewProp_MaxExhaustion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalMotion_Statics::NewProp_MaxExhaustion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimalMotion_Statics::NewProp_ExhaustionDecrSpeed_MetaData[] = {
		{ "Category", "AnimalMotion" },
		{ "ModuleRelativePath", "AnimalMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimalMotion_Statics::NewProp_ExhaustionDecrSpeed = { "ExhaustionDecrSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimalMotion, ExhaustionDecrSpeed), METADATA_PARAMS(Z_Construct_UClass_UAnimalMotion_Statics::NewProp_ExhaustionDecrSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalMotion_Statics::NewProp_ExhaustionDecrSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimalMotion_Statics::NewProp_ExhaustionIncrSpeed_MetaData[] = {
		{ "Category", "AnimalMotion" },
		{ "ModuleRelativePath", "AnimalMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimalMotion_Statics::NewProp_ExhaustionIncrSpeed = { "ExhaustionIncrSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimalMotion, ExhaustionIncrSpeed), METADATA_PARAMS(Z_Construct_UClass_UAnimalMotion_Statics::NewProp_ExhaustionIncrSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalMotion_Statics::NewProp_ExhaustionIncrSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimalMotion_Statics::NewProp_TargetChasingDistance_MetaData[] = {
		{ "Category", "AnimalMotion" },
		{ "ModuleRelativePath", "AnimalMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimalMotion_Statics::NewProp_TargetChasingDistance = { "TargetChasingDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimalMotion, TargetChasingDistance), METADATA_PARAMS(Z_Construct_UClass_UAnimalMotion_Statics::NewProp_TargetChasingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalMotion_Statics::NewProp_TargetChasingDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AnimalChasingSpeed_MetaData[] = {
		{ "Category", "AnimalMotion" },
		{ "Comment", "//Chasing\n" },
		{ "ModuleRelativePath", "AnimalMotion.h" },
		{ "ToolTip", "Chasing" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AnimalChasingSpeed = { "AnimalChasingSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimalMotion, AnimalChasingSpeed), METADATA_PARAMS(Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AnimalChasingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AnimalChasingSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimalMotion_Statics::NewProp_TargetFleeDistance_MetaData[] = {
		{ "Category", "AnimalMotion" },
		{ "ModuleRelativePath", "AnimalMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimalMotion_Statics::NewProp_TargetFleeDistance = { "TargetFleeDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimalMotion, TargetFleeDistance), METADATA_PARAMS(Z_Construct_UClass_UAnimalMotion_Statics::NewProp_TargetFleeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalMotion_Statics::NewProp_TargetFleeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AnimalFleeSpeed_MetaData[] = {
		{ "Category", "AnimalMotion" },
		{ "Comment", "//Fleeing\n" },
		{ "ModuleRelativePath", "AnimalMotion.h" },
		{ "ToolTip", "Fleeing" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AnimalFleeSpeed = { "AnimalFleeSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimalMotion, AnimalFleeSpeed), METADATA_PARAMS(Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AnimalFleeSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AnimalFleeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimalMotion_Statics::NewProp_TargetTamedDistance_MetaData[] = {
		{ "Category", "AnimalMotion" },
		{ "ModuleRelativePath", "AnimalMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimalMotion_Statics::NewProp_TargetTamedDistance = { "TargetTamedDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimalMotion, TargetTamedDistance), METADATA_PARAMS(Z_Construct_UClass_UAnimalMotion_Statics::NewProp_TargetTamedDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalMotion_Statics::NewProp_TargetTamedDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AnimalTamedSpeed_MetaData[] = {
		{ "Category", "AnimalMotion" },
		{ "Comment", "//Tamed\n" },
		{ "ModuleRelativePath", "AnimalMotion.h" },
		{ "ToolTip", "Tamed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AnimalTamedSpeed = { "AnimalTamedSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimalMotion, AnimalTamedSpeed), METADATA_PARAMS(Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AnimalTamedSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AnimalTamedSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AnimalRotationSpeed_MetaData[] = {
		{ "Category", "AnimalMotion" },
		{ "Comment", "//Rotation\n" },
		{ "ModuleRelativePath", "AnimalMotion.h" },
		{ "ToolTip", "Rotation" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AnimalRotationSpeed = { "AnimalRotationSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimalMotion, AnimalRotationSpeed), METADATA_PARAMS(Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AnimalRotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AnimalRotationSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimalMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AbandonHuntDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimalMotion_Statics::NewProp_MaxExhaustion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimalMotion_Statics::NewProp_ExhaustionDecrSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimalMotion_Statics::NewProp_ExhaustionIncrSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimalMotion_Statics::NewProp_TargetChasingDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AnimalChasingSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimalMotion_Statics::NewProp_TargetFleeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AnimalFleeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimalMotion_Statics::NewProp_TargetTamedDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AnimalTamedSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimalMotion_Statics::NewProp_AnimalRotationSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimalMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimalMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimalMotion_Statics::ClassParams = {
		&UAnimalMotion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimalMotion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalMotion_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimalMotion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalMotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimalMotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimalMotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimalMotion, 2427158564);
	template<> PANGEAMECHANICS_API UClass* StaticClass<UAnimalMotion>()
	{
		return UAnimalMotion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimalMotion(Z_Construct_UClass_UAnimalMotion, &UAnimalMotion::StaticClass, TEXT("/Script/PangeaMechanics"), TEXT("UAnimalMotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimalMotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
