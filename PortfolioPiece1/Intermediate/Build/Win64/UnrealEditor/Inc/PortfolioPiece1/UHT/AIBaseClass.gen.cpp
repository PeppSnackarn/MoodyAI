// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortfolioPiece1/AI Classes/Enemy/AIBaseClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIBaseClass() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_AAIBaseClass();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_AAIBaseClass_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PortfolioPiece1();
// End Cross Module References
	void AAIBaseClass::StaticRegisterNativesAAIBaseClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIBaseClass);
	UClass* Z_Construct_UClass_AAIBaseClass_NoRegister()
	{
		return AAIBaseClass::StaticClass();
	}
	struct Z_Construct_UClass_AAIBaseClass_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hasSeenPlayer_MetaData[];
#endif
		static void NewProp_hasSeenPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasSeenPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hasTokensToAttack_MetaData[];
#endif
		static void NewProp_hasTokensToAttack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasTokensToAttack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIBaseClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PortfolioPiece1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIBaseClass_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIBaseClass_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI Classes/Enemy/AIBaseClass.h" },
		{ "ModuleRelativePath", "AI Classes/Enemy/AIBaseClass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIBaseClass_Statics::NewProp_agressive_MetaData[] = {
		{ "Category", "AIBaseClass" },
		{ "ModuleRelativePath", "AI Classes/Enemy/AIBaseClass.h" },
	};
#endif
	void Z_Construct_UClass_AAIBaseClass_Statics::NewProp_agressive_SetBit(void* Obj)
	{
		((AAIBaseClass*)Obj)->agressive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAIBaseClass_Statics::NewProp_agressive = { "agressive", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAIBaseClass), &Z_Construct_UClass_AAIBaseClass_Statics::NewProp_agressive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIBaseClass_Statics::NewProp_agressive_MetaData), Z_Construct_UClass_AAIBaseClass_Statics::NewProp_agressive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIBaseClass_Statics::NewProp_hasSeenPlayer_MetaData[] = {
		{ "Category", "AIBaseClass" },
		{ "ModuleRelativePath", "AI Classes/Enemy/AIBaseClass.h" },
	};
#endif
	void Z_Construct_UClass_AAIBaseClass_Statics::NewProp_hasSeenPlayer_SetBit(void* Obj)
	{
		((AAIBaseClass*)Obj)->hasSeenPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAIBaseClass_Statics::NewProp_hasSeenPlayer = { "hasSeenPlayer", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAIBaseClass), &Z_Construct_UClass_AAIBaseClass_Statics::NewProp_hasSeenPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIBaseClass_Statics::NewProp_hasSeenPlayer_MetaData), Z_Construct_UClass_AAIBaseClass_Statics::NewProp_hasSeenPlayer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIBaseClass_Statics::NewProp_hasTokensToAttack_MetaData[] = {
		{ "Category", "AIBaseClass" },
		{ "ModuleRelativePath", "AI Classes/Enemy/AIBaseClass.h" },
	};
#endif
	void Z_Construct_UClass_AAIBaseClass_Statics::NewProp_hasTokensToAttack_SetBit(void* Obj)
	{
		((AAIBaseClass*)Obj)->hasTokensToAttack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAIBaseClass_Statics::NewProp_hasTokensToAttack = { "hasTokensToAttack", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAIBaseClass), &Z_Construct_UClass_AAIBaseClass_Statics::NewProp_hasTokensToAttack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIBaseClass_Statics::NewProp_hasTokensToAttack_MetaData), Z_Construct_UClass_AAIBaseClass_Statics::NewProp_hasTokensToAttack_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIBaseClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIBaseClass_Statics::NewProp_agressive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIBaseClass_Statics::NewProp_hasSeenPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIBaseClass_Statics::NewProp_hasTokensToAttack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIBaseClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIBaseClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIBaseClass_Statics::ClassParams = {
		&AAIBaseClass::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAIBaseClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIBaseClass_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIBaseClass_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIBaseClass_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIBaseClass_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAIBaseClass()
	{
		if (!Z_Registration_Info_UClass_AAIBaseClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIBaseClass.OuterSingleton, Z_Construct_UClass_AAIBaseClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAIBaseClass.OuterSingleton;
	}
	template<> PORTFOLIOPIECE1_API UClass* StaticClass<AAIBaseClass>()
	{
		return AAIBaseClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIBaseClass);
	AAIBaseClass::~AAIBaseClass() {}
	struct Z_CompiledInDeferFile_FID_GitRepos_PortfolioPiece1_PortfolioPiece1_Source_PortfolioPiece1_AI_Classes_Enemy_AIBaseClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitRepos_PortfolioPiece1_PortfolioPiece1_Source_PortfolioPiece1_AI_Classes_Enemy_AIBaseClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAIBaseClass, AAIBaseClass::StaticClass, TEXT("AAIBaseClass"), &Z_Registration_Info_UClass_AAIBaseClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIBaseClass), 412522880U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitRepos_PortfolioPiece1_PortfolioPiece1_Source_PortfolioPiece1_AI_Classes_Enemy_AIBaseClass_h_630758231(TEXT("/Script/PortfolioPiece1"),
		Z_CompiledInDeferFile_FID_GitRepos_PortfolioPiece1_PortfolioPiece1_Source_PortfolioPiece1_AI_Classes_Enemy_AIBaseClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitRepos_PortfolioPiece1_PortfolioPiece1_Source_PortfolioPiece1_AI_Classes_Enemy_AIBaseClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
