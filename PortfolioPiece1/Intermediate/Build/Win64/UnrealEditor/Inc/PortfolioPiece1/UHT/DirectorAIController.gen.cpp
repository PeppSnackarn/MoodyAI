// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PortfolioPiece1/AI Classes/Director/DirectorAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectorAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_ADirectorAIController();
	PORTFOLIOPIECE1_API UClass* Z_Construct_UClass_ADirectorAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PortfolioPiece1();
// End Cross Module References
	void ADirectorAIController::StaticRegisterNativesADirectorAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADirectorAIController);
	UClass* Z_Construct_UClass_ADirectorAIController_NoRegister()
	{
		return ADirectorAIController::StaticClass();
	}
	struct Z_Construct_UClass_ADirectorAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackBoardComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackBoardComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADirectorAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_PortfolioPiece1,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorAIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADirectorAIController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI Classes/Director/DirectorAIController.h" },
		{ "ModuleRelativePath", "AI Classes/Director/DirectorAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADirectorAIController_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "DirectorAIController" },
		{ "ModuleRelativePath", "AI Classes/Director/DirectorAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADirectorAIController_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADirectorAIController, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorAIController_Statics::NewProp_BehaviorTree_MetaData), Z_Construct_UClass_ADirectorAIController_Statics::NewProp_BehaviorTree_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADirectorAIController_Statics::NewProp_BlackBoardComp_MetaData[] = {
		{ "Category", "DirectorAIController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI Classes/Director/DirectorAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADirectorAIController_Statics::NewProp_BlackBoardComp = { "BlackBoardComp", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADirectorAIController, BlackBoardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorAIController_Statics::NewProp_BlackBoardComp_MetaData), Z_Construct_UClass_ADirectorAIController_Statics::NewProp_BlackBoardComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADirectorAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADirectorAIController_Statics::NewProp_BehaviorTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADirectorAIController_Statics::NewProp_BlackBoardComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADirectorAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADirectorAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADirectorAIController_Statics::ClassParams = {
		&ADirectorAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADirectorAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADirectorAIController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADirectorAIController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADirectorAIController()
	{
		if (!Z_Registration_Info_UClass_ADirectorAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADirectorAIController.OuterSingleton, Z_Construct_UClass_ADirectorAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADirectorAIController.OuterSingleton;
	}
	template<> PORTFOLIOPIECE1_API UClass* StaticClass<ADirectorAIController>()
	{
		return ADirectorAIController::StaticClass();
	}
	ADirectorAIController::ADirectorAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADirectorAIController);
	ADirectorAIController::~ADirectorAIController() {}
	struct Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AI_Classes_Director_DirectorAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AI_Classes_Director_DirectorAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADirectorAIController, ADirectorAIController::StaticClass, TEXT("ADirectorAIController"), &Z_Registration_Info_UClass_ADirectorAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADirectorAIController), 2551376433U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AI_Classes_Director_DirectorAIController_h_4290765647(TEXT("/Script/PortfolioPiece1"),
		Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AI_Classes_Director_DirectorAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_nikodemius_ivarsson_Documents_GitHub_Portfolio1_PortfolioPiece1_Source_PortfolioPiece1_AI_Classes_Director_DirectorAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
