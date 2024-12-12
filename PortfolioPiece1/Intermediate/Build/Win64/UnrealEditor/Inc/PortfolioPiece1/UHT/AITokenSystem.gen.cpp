// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortfolioPiece1/Systems/AITokenSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITokenSystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_AAITokenSystem();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_AAITokenSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PortfolioPiece1();
// End Cross Module References
	void AAITokenSystem::StaticRegisterNativesAAITokenSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAITokenSystem);
	UClass* Z_Construct_UClass_AAITokenSystem_NoRegister()
	{
		return AAITokenSystem::StaticClass();
	}
	struct Z_Construct_UClass_AAITokenSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTokens_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTokens;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTokens_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentTokens;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAITokenSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PortfolioPiece1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAITokenSystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAITokenSystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Systems/AITokenSystem.h" },
		{ "ModuleRelativePath", "Systems/AITokenSystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAITokenSystem_Statics::NewProp_MaxTokens_MetaData[] = {
		{ "Category", "AITokenSystem" },
		{ "ModuleRelativePath", "Systems/AITokenSystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAITokenSystem_Statics::NewProp_MaxTokens = { "MaxTokens", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAITokenSystem, MaxTokens), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAITokenSystem_Statics::NewProp_MaxTokens_MetaData), Z_Construct_UClass_AAITokenSystem_Statics::NewProp_MaxTokens_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAITokenSystem_Statics::NewProp_CurrentTokens_MetaData[] = {
		{ "Category", "AITokenSystem" },
		{ "ModuleRelativePath", "Systems/AITokenSystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAITokenSystem_Statics::NewProp_CurrentTokens = { "CurrentTokens", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAITokenSystem, CurrentTokens), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAITokenSystem_Statics::NewProp_CurrentTokens_MetaData), Z_Construct_UClass_AAITokenSystem_Statics::NewProp_CurrentTokens_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAITokenSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAITokenSystem_Statics::NewProp_MaxTokens,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAITokenSystem_Statics::NewProp_CurrentTokens,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAITokenSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAITokenSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAITokenSystem_Statics::ClassParams = {
		&AAITokenSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAITokenSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAITokenSystem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAITokenSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_AAITokenSystem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAITokenSystem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAITokenSystem()
	{
		if (!Z_Registration_Info_UClass_AAITokenSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAITokenSystem.OuterSingleton, Z_Construct_UClass_AAITokenSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAITokenSystem.OuterSingleton;
	}
	template<> PORTFOLIOPIECE1_API UClass* StaticClass<AAITokenSystem>()
	{
		return AAITokenSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAITokenSystem);
	AAITokenSystem::~AAITokenSystem() {}
	struct Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_Systems_AITokenSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_Systems_AITokenSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAITokenSystem, AAITokenSystem::StaticClass, TEXT("AAITokenSystem"), &Z_Registration_Info_UClass_AAITokenSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAITokenSystem), 1505547465U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_Systems_AITokenSystem_h_105745662(TEXT("/Script/PortfolioPiece1"),
		Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_Systems_AITokenSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_Systems_AITokenSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
