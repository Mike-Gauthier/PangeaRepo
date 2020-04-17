// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PangeaMechanics/TameAnimal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTameAnimal() {}
// Cross Module References
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_UTameAnimal_NoRegister();
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_UTameAnimal();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PangeaMechanics();
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_AAnimalTriggerBox_NoRegister();
// End Cross Module References
	void UTameAnimal::StaticRegisterNativesUTameAnimal()
	{
	}
	UClass* Z_Construct_UClass_UTameAnimal_NoRegister()
	{
		return UTameAnimal::StaticClass();
	}
	struct Z_Construct_UClass_UTameAnimal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimalTriggerBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimalTriggerBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTameAnimal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PangeaMechanics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTameAnimal_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TameAnimal.h" },
		{ "ModuleRelativePath", "TameAnimal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTameAnimal_Statics::NewProp_AnimalTriggerBox_MetaData[] = {
		{ "Category", "TameAnimal" },
		{ "ModuleRelativePath", "TameAnimal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTameAnimal_Statics::NewProp_AnimalTriggerBox = { "AnimalTriggerBox", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTameAnimal, AnimalTriggerBox), Z_Construct_UClass_AAnimalTriggerBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTameAnimal_Statics::NewProp_AnimalTriggerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTameAnimal_Statics::NewProp_AnimalTriggerBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTameAnimal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTameAnimal_Statics::NewProp_AnimalTriggerBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTameAnimal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTameAnimal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTameAnimal_Statics::ClassParams = {
		&UTameAnimal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTameAnimal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTameAnimal_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTameAnimal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTameAnimal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTameAnimal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTameAnimal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTameAnimal, 586095080);
	template<> PANGEAMECHANICS_API UClass* StaticClass<UTameAnimal>()
	{
		return UTameAnimal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTameAnimal(Z_Construct_UClass_UTameAnimal, &UTameAnimal::StaticClass, TEXT("/Script/PangeaMechanics"), TEXT("UTameAnimal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTameAnimal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
