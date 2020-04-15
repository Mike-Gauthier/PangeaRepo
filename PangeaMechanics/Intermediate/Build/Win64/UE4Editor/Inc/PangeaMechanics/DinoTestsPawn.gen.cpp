// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PangeaMechanics/DinoTestsPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDinoTestsPawn() {}
// Cross Module References
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_ADinoTestsPawn_NoRegister();
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_ADinoTestsPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_PangeaMechanics();
// End Cross Module References
	void ADinoTestsPawn::StaticRegisterNativesADinoTestsPawn()
	{
	}
	UClass* Z_Construct_UClass_ADinoTestsPawn_NoRegister()
	{
		return ADinoTestsPawn::StaticClass();
	}
	struct Z_Construct_UClass_ADinoTestsPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADinoTestsPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_PangeaMechanics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADinoTestsPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DinoTestsPawn.h" },
		{ "ModuleRelativePath", "DinoTestsPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADinoTestsPawn_Statics::NewProp_health_MetaData[] = {
		{ "Category", "DinoTestsPawn" },
		{ "ModuleRelativePath", "DinoTestsPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADinoTestsPawn_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADinoTestsPawn, health), METADATA_PARAMS(Z_Construct_UClass_ADinoTestsPawn_Statics::NewProp_health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADinoTestsPawn_Statics::NewProp_health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADinoTestsPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADinoTestsPawn_Statics::NewProp_health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADinoTestsPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADinoTestsPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADinoTestsPawn_Statics::ClassParams = {
		&ADinoTestsPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADinoTestsPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADinoTestsPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADinoTestsPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADinoTestsPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADinoTestsPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADinoTestsPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADinoTestsPawn, 2635268515);
	template<> PANGEAMECHANICS_API UClass* StaticClass<ADinoTestsPawn>()
	{
		return ADinoTestsPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADinoTestsPawn(Z_Construct_UClass_ADinoTestsPawn, &ADinoTestsPawn::StaticClass, TEXT("/Script/PangeaMechanics"), TEXT("ADinoTestsPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADinoTestsPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
