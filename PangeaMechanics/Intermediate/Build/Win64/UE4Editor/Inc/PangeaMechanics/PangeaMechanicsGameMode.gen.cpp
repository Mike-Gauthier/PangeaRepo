// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PangeaMechanics/PangeaMechanicsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePangeaMechanicsGameMode() {}
// Cross Module References
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_APangeaMechanicsGameMode_NoRegister();
	PANGEAMECHANICS_API UClass* Z_Construct_UClass_APangeaMechanicsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PangeaMechanics();
// End Cross Module References
	void APangeaMechanicsGameMode::StaticRegisterNativesAPangeaMechanicsGameMode()
	{
	}
	UClass* Z_Construct_UClass_APangeaMechanicsGameMode_NoRegister()
	{
		return APangeaMechanicsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APangeaMechanicsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APangeaMechanicsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PangeaMechanics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APangeaMechanicsGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PangeaMechanicsGameMode.h" },
		{ "ModuleRelativePath", "PangeaMechanicsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APangeaMechanicsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APangeaMechanicsGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APangeaMechanicsGameMode_Statics::ClassParams = {
		&APangeaMechanicsGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APangeaMechanicsGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APangeaMechanicsGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APangeaMechanicsGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APangeaMechanicsGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APangeaMechanicsGameMode, 3419053149);
	template<> PANGEAMECHANICS_API UClass* StaticClass<APangeaMechanicsGameMode>()
	{
		return APangeaMechanicsGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APangeaMechanicsGameMode(Z_Construct_UClass_APangeaMechanicsGameMode, &APangeaMechanicsGameMode::StaticClass, TEXT("/Script/PangeaMechanics"), TEXT("APangeaMechanicsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APangeaMechanicsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
