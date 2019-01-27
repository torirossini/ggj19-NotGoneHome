// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NotGoneHome/DissolveManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDissolveManager() {}
// Cross Module References
	NOTGONEHOME_API UClass* Z_Construct_UClass_ADissolveManager_NoRegister();
	NOTGONEHOME_API UClass* Z_Construct_UClass_ADissolveManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NotGoneHome();
// End Cross Module References
	void ADissolveManager::StaticRegisterNativesADissolveManager()
	{
	}
	UClass* Z_Construct_UClass_ADissolveManager_NoRegister()
	{
		return ADissolveManager::StaticClass();
	}
	struct Z_Construct_UClass_ADissolveManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADissolveManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NotGoneHome,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADissolveManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DissolveManager.h" },
		{ "ModuleRelativePath", "DissolveManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADissolveManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADissolveManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADissolveManager_Statics::ClassParams = {
		&ADissolveManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ADissolveManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADissolveManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADissolveManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADissolveManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADissolveManager, 4232559714);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADissolveManager(Z_Construct_UClass_ADissolveManager, &ADissolveManager::StaticClass, TEXT("/Script/NotGoneHome"), TEXT("ADissolveManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADissolveManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
