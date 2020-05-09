// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PangeaMechanics/RideAnimal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRideAnimal() {}
// Cross Module References
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_URideAnimal_NoRegister();
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_URideAnimal();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_PangeaMechanics();
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_AAnimalTriggerBox_NoRegister();
// End Cross Module References
	void URideAnimal::StaticRegisterNativesURideAnimal()
	{
	}
	UClass* Z_Construct_UClass_URideAnimal_NoRegister()
	{
		return URideAnimal::StaticClass();
	}
	struct Z_Construct_UClass_URideAnimal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RidingRegionTriggerBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RidingRegionTriggerBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URideAnimal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PangeaMechanics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URideAnimal_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RideAnimal.h" },
		{ "ModuleRelativePath", "RideAnimal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URideAnimal_Statics::NewProp_RidingRegionTriggerBox_MetaData[] = {
		{ "Category", "RideAnimal" },
		{ "ModuleRelativePath", "RideAnimal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URideAnimal_Statics::NewProp_RidingRegionTriggerBox = { "RidingRegionTriggerBox", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URideAnimal, RidingRegionTriggerBox), Z_Construct_UClass_AAnimalTriggerBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URideAnimal_Statics::NewProp_RidingRegionTriggerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URideAnimal_Statics::NewProp_RidingRegionTriggerBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URideAnimal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URideAnimal_Statics::NewProp_RidingRegionTriggerBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URideAnimal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URideAnimal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URideAnimal_Statics::ClassParams = {
		&URideAnimal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URideAnimal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URideAnimal_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URideAnimal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URideAnimal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URideAnimal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URideAnimal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URideAnimal, 1714797280);
	template<> PANGEAMECHANICS_API UClass* StaticClass<URideAnimal>()
	{
		return URideAnimal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URideAnimal(Z_Construct_UClass_URideAnimal, &URideAnimal::StaticClass, TEXT("/Script/PangeaMechanics"), TEXT("URideAnimal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URideAnimal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
