// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortfolioPiece1/Systems/EnemyManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_UEnemyManager();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_UEnemyManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PortfolioPiece1();
// End Cross Module References
	void UEnemyManager::StaticRegisterNativesUEnemyManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyManager);
	UClass* Z_Construct_UClass_UEnemyManager_NoRegister()
	{
		return UEnemyManager::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PortfolioPiece1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Systems/EnemyManager.h" },
		{ "ModuleRelativePath", "Systems/EnemyManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyManager_Statics::ClassParams = {
		&UEnemyManager::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEnemyManager()
	{
		if (!Z_Registration_Info_UClass_UEnemyManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyManager.OuterSingleton, Z_Construct_UClass_UEnemyManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyManager.OuterSingleton;
	}
	template<> PORTFOLIOPIECE1_API UClass* StaticClass<UEnemyManager>()
	{
		return UEnemyManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyManager);
	UEnemyManager::~UEnemyManager() {}
	struct Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_Systems_EnemyManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_Systems_EnemyManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyManager, UEnemyManager::StaticClass, TEXT("UEnemyManager"), &Z_Registration_Info_UClass_UEnemyManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyManager), 612413533U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_Systems_EnemyManager_h_1551159922(TEXT("/Script/PortfolioPiece1"),
		Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_Systems_EnemyManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_Systems_EnemyManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
