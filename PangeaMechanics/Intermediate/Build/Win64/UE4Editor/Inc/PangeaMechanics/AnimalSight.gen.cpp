// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PangeaMechanics/AnimalSight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimalSight() {}
// Cross Module References
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_UAnimalSight_NoRegister();
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_UAnimalSight();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PangeaMechanics();
// End Cross Module References
	void UAnimalSight::StaticRegisterNativesUAnimalSight()
	{
	}
	UClass* Z_Construct_UClass_UAnimalSight_NoRegister()
	{
		return UAnimalSight::StaticClass();
	}
	struct Z_Construct_UClass_UAnimalSight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleAttackRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_IdleAttackRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimalAttackDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimalAttackDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimalSightReach_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimalSightReach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HalfAnimalSightAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HalfAnimalSightAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHerbivore_MetaData[];
#endif
		static void NewProp_IsHerbivore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHerbivore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimalSight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PangeaMechanics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimalSight_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AnimalSight.h" },
		{ "ModuleRelativePath", "AnimalSight.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimalSight_Statics::NewProp_IdleAttackRate_MetaData[] = {
		{ "Category", "AnimalSight" },
		{ "ModuleRelativePath", "AnimalSight.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAnimalSight_Statics::NewProp_IdleAttackRate = { "IdleAttackRate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimalSight, IdleAttackRate), METADATA_PARAMS(Z_Construct_UClass_UAnimalSight_Statics::NewProp_IdleAttackRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalSight_Statics::NewProp_IdleAttackRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimalSight_Statics::NewProp_AnimalAttackDamage_MetaData[] = {
		{ "Category", "AnimalSight" },
		{ "Comment", "//Attacking\n" },
		{ "ModuleRelativePath", "AnimalSight.h" },
		{ "ToolTip", "Attacking" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimalSight_Statics::NewProp_AnimalAttackDamage = { "AnimalAttackDamage", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimalSight, AnimalAttackDamage), METADATA_PARAMS(Z_Construct_UClass_UAnimalSight_Statics::NewProp_AnimalAttackDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalSight_Statics::NewProp_AnimalAttackDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimalSight_Statics::NewProp_AnimalSightReach_MetaData[] = {
		{ "Category", "AnimalSight" },
		{ "ModuleRelativePath", "AnimalSight.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimalSight_Statics::NewProp_AnimalSightReach = { "AnimalSightReach", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimalSight, AnimalSightReach), METADATA_PARAMS(Z_Construct_UClass_UAnimalSight_Statics::NewProp_AnimalSightReach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalSight_Statics::NewProp_AnimalSightReach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimalSight_Statics::NewProp_HalfAnimalSightAngle_MetaData[] = {
		{ "Category", "AnimalSight" },
		{ "Comment", "//Angle size variables\n" },
		{ "ModuleRelativePath", "AnimalSight.h" },
		{ "ToolTip", "Angle size variables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimalSight_Statics::NewProp_HalfAnimalSightAngle = { "HalfAnimalSightAngle", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimalSight, HalfAnimalSightAngle), METADATA_PARAMS(Z_Construct_UClass_UAnimalSight_Statics::NewProp_HalfAnimalSightAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalSight_Statics::NewProp_HalfAnimalSightAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimalSight_Statics::NewProp_IsHerbivore_MetaData[] = {
		{ "Category", "AnimalSight" },
		{ "ModuleRelativePath", "AnimalSight.h" },
	};
#endif
	void Z_Construct_UClass_UAnimalSight_Statics::NewProp_IsHerbivore_SetBit(void* Obj)
	{
		((UAnimalSight*)Obj)->IsHerbivore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimalSight_Statics::NewProp_IsHerbivore = { "IsHerbivore", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimalSight), &Z_Construct_UClass_UAnimalSight_Statics::NewProp_IsHerbivore_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimalSight_Statics::NewProp_IsHerbivore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalSight_Statics::NewProp_IsHerbivore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimalSight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimalSight_Statics::NewProp_IdleAttackRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimalSight_Statics::NewProp_AnimalAttackDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimalSight_Statics::NewProp_AnimalSightReach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimalSight_Statics::NewProp_HalfAnimalSightAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimalSight_Statics::NewProp_IsHerbivore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimalSight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimalSight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimalSight_Statics::ClassParams = {
		&UAnimalSight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimalSight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalSight_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimalSight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalSight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimalSight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimalSight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimalSight, 33441490);
	template<> PANGEAMECHANICS_API UClass* StaticClass<UAnimalSight>()
	{
		return UAnimalSight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimalSight(Z_Construct_UClass_UAnimalSight, &UAnimalSight::StaticClass, TEXT("/Script/PangeaMechanics"), TEXT("UAnimalSight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimalSight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
