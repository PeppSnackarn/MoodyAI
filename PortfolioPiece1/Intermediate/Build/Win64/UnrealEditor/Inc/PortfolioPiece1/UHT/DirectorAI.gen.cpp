// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortfolioPiece1/AI Classes/Director/DirectorAI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectorAI() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_ADirectorAI();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_ADirectorAI_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PortfolioPiece1();
// End Cross Module References
	void ADirectorAI::StaticRegisterNativesADirectorAI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADirectorAI);
	UClass* Z_Construct_UClass_ADirectorAI_NoRegister()
	{
		return ADirectorAI::StaticClass();
	}
	struct Z_Construct_UClass_ADirectorAI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_agressive_MetaData[];
#endif
		static void NewProp_agressive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_agressive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxNumberOfAgressiveEnemies_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxNumberOfAgressiveEnemies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentNumberOfAgressiveEnemies_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentNumberOfAgressiveEnemies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackTokens_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttackTokens;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADirectorAI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PortfolioPiece1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorAI_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADirectorAI_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI Classes/Director/DirectorAI.h" },
		{ "ModuleRelativePath", "AI Classes/Director/DirectorAI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADirectorAI_Statics::NewProp_agressive_MetaData[] = {
		{ "Category", "DirectorAI" },
		{ "ModuleRelativePath", "AI Classes/Director/DirectorAI.h" },
	};
#endif
	void Z_Construct_UClass_ADirectorAI_Statics::NewProp_agressive_SetBit(void* Obj)
	{
		((ADirectorAI*)Obj)->agressive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADirectorAI_Statics::NewProp_agressive = { "agressive", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADirectorAI), &Z_Construct_UClass_ADirectorAI_Statics::NewProp_agressive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorAI_Statics::NewProp_agressive_MetaData), Z_Construct_UClass_ADirectorAI_Statics::NewProp_agressive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADirectorAI_Statics::NewProp_maxNumberOfAgressiveEnemies_MetaData[] = {
		{ "Category", "DirectorAI" },
		{ "ModuleRelativePath", "AI Classes/Director/DirectorAI.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADirectorAI_Statics::NewProp_maxNumberOfAgressiveEnemies = { "maxNumberOfAgressiveEnemies", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADirectorAI, maxNumberOfAgressiveEnemies), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorAI_Statics::NewProp_maxNumberOfAgressiveEnemies_MetaData), Z_Construct_UClass_ADirectorAI_Statics::NewProp_maxNumberOfAgressiveEnemies_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADirectorAI_Statics::NewProp_currentNumberOfAgressiveEnemies_MetaData[] = {
		{ "Category", "DirectorAI" },
		{ "ModuleRelativePath", "AI Classes/Director/DirectorAI.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADirectorAI_Statics::NewProp_currentNumberOfAgressiveEnemies = { "currentNumberOfAgressiveEnemies", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADirectorAI, currentNumberOfAgressiveEnemies), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorAI_Statics::NewProp_currentNumberOfAgressiveEnemies_MetaData), Z_Construct_UClass_ADirectorAI_Statics::NewProp_currentNumberOfAgressiveEnemies_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADirectorAI_Statics::NewProp_AttackTokens_MetaData[] = {
		{ "Category", "DirectorAI" },
		{ "ModuleRelativePath", "AI Classes/Director/DirectorAI.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADirectorAI_Statics::NewProp_AttackTokens = { "AttackTokens", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADirectorAI, AttackTokens), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorAI_Statics::NewProp_AttackTokens_MetaData), Z_Construct_UClass_ADirectorAI_Statics::NewProp_AttackTokens_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADirectorAI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADirectorAI_Statics::NewProp_agressive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADirectorAI_Statics::NewProp_maxNumberOfAgressiveEnemies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADirectorAI_Statics::NewProp_currentNumberOfAgressiveEnemies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADirectorAI_Statics::NewProp_AttackTokens,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADirectorAI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADirectorAI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADirectorAI_Statics::ClassParams = {
		&ADirectorAI::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADirectorAI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorAI_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorAI_Statics::Class_MetaDataParams), Z_Construct_UClass_ADirectorAI_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorAI_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADirectorAI()
	{
		if (!Z_Registration_Info_UClass_ADirectorAI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADirectorAI.OuterSingleton, Z_Construct_UClass_ADirectorAI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADirectorAI.OuterSingleton;
	}
	template<> PORTFOLIOPIECE1_API UClass* StaticClass<ADirectorAI>()
	{
		return ADirectorAI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADirectorAI);
	ADirectorAI::~ADirectorAI() {}
	struct Z_CompiledInDeferFile_FID_GitRepos_PortfolioPiece1_PortfolioPiece1_Source_PortfolioPiece1_AI_Classes_Director_DirectorAI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitRepos_PortfolioPiece1_PortfolioPiece1_Source_PortfolioPiece1_AI_Classes_Director_DirectorAI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADirectorAI, ADirectorAI::StaticClass, TEXT("ADirectorAI"), &Z_Registration_Info_UClass_ADirectorAI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADirectorAI), 3254275848U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitRepos_PortfolioPiece1_PortfolioPiece1_Source_PortfolioPiece1_AI_Classes_Director_DirectorAI_h_431603132(TEXT("/Script/PortfolioPiece1"),
		Z_CompiledInDeferFile_FID_GitRepos_PortfolioPiece1_PortfolioPiece1_Source_PortfolioPiece1_AI_Classes_Director_DirectorAI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitRepos_PortfolioPiece1_PortfolioPiece1_Source_PortfolioPiece1_AI_Classes_Director_DirectorAI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
