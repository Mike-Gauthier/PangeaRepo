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
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimalMotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimalMotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimalMotion_Statics::ClassParams = {
		&UAnimalMotion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(UAnimalMotion, 723974930);
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
