// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PangeaMechanics/BasicHuman.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicHuman() {}
// Cross Module References
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_ABasicHuman_NoRegister();
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_ABasicHuman();
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_APangeaMechanicsCharacter();
	UPackage* Z_Construct_UPackage__Script_PangeaMechanics();
// End Cross Module References
	void ABasicHuman::StaticRegisterNativesABasicHuman()
	{
	}
	UClass* Z_Construct_UClass_ABasicHuman_NoRegister()
	{
		return ABasicHuman::StaticClass();
	}
	struct Z_Construct_UClass_ABasicHuman_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicHuman_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APangeaMechanicsCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PangeaMechanics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicHuman_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BasicHuman.h" },
		{ "ModuleRelativePath", "BasicHuman.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicHuman_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicHuman>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasicHuman_Statics::ClassParams = {
		&ABasicHuman::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABasicHuman_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicHuman_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicHuman()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicHuman_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicHuman, 3764278997);
	template<> PANGEAMECHANICS_API UClass* StaticClass<ABasicHuman>()
	{
		return ABasicHuman::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicHuman(Z_Construct_UClass_ABasicHuman, &ABasicHuman::StaticClass, TEXT("/Script/PangeaMechanics"), TEXT("ABasicHuman"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicHuman);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
