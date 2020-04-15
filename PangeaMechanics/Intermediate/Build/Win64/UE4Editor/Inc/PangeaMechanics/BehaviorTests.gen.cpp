// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PangeaMechanics/BehaviorTests.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTests() {}
// Cross Module References
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_ABehaviorTests_NoRegister();
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_ABehaviorTests();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_PangeaMechanics();
// End Cross Module References
	void ABehaviorTests::StaticRegisterNativesABehaviorTests()
	{
	}
	UClass* Z_Construct_UClass_ABehaviorTests_NoRegister()
	{
		return ABehaviorTests::StaticClass();
	}
	struct Z_Construct_UClass_ABehaviorTests_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABehaviorTests_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PangeaMechanics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABehaviorTests_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BehaviorTests.h" },
		{ "ModuleRelativePath", "BehaviorTests.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABehaviorTests_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABehaviorTests>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABehaviorTests_Statics::ClassParams = {
		&ABehaviorTests::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABehaviorTests_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABehaviorTests_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABehaviorTests()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABehaviorTests_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABehaviorTests, 3212750457);
	template<> PANGEAMECHANICS_API UClass* StaticClass<ABehaviorTests>()
	{
		return ABehaviorTests::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABehaviorTests(Z_Construct_UClass_ABehaviorTests, &ABehaviorTests::StaticClass, TEXT("/Script/PangeaMechanics"), TEXT("ABehaviorTests"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABehaviorTests);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
