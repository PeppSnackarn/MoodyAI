// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortfolioPiece1/PortfolioPiece1GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortfolioPiece1GameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_APortfolioPiece1GameMode();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_APortfolioPiece1GameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PortfolioPiece1();
// End Cross Module References
	void APortfolioPiece1GameMode::StaticRegisterNativesAPortfolioPiece1GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APortfolioPiece1GameMode);
	UClass* Z_Construct_UClass_APortfolioPiece1GameMode_NoRegister()
	{
		return APortfolioPiece1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_APortfolioPiece1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APortfolioPiece1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PortfolioPiece1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioPiece1GameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortfolioPiece1GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PortfolioPiece1GameMode.h" },
		{ "ModuleRelativePath", "PortfolioPiece1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APortfolioPiece1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortfolioPiece1GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APortfolioPiece1GameMode_Statics::ClassParams = {
		&APortfolioPiece1GameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APortfolioPiece1GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APortfolioPiece1GameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APortfolioPiece1GameMode()
	{
		if (!Z_Registration_Info_UClass_APortfolioPiece1GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APortfolioPiece1GameMode.OuterSingleton, Z_Construct_UClass_APortfolioPiece1GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APortfolioPiece1GameMode.OuterSingleton;
	}
	template<> PORTFOLIOPIECE1_API UClass* StaticClass<APortfolioPiece1GameMode>()
	{
		return APortfolioPiece1GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APortfolioPiece1GameMode);
	APortfolioPiece1GameMode::~APortfolioPiece1GameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_PortfolioPiece1GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_PortfolioPiece1GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APortfolioPiece1GameMode, APortfolioPiece1GameMode::StaticClass, TEXT("APortfolioPiece1GameMode"), &Z_Registration_Info_UClass_APortfolioPiece1GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APortfolioPiece1GameMode), 2158576222U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_PortfolioPiece1GameMode_h_1397320229(TEXT("/Script/PortfolioPiece1"),
		Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_PortfolioPiece1GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_PortfolioPiece1GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
