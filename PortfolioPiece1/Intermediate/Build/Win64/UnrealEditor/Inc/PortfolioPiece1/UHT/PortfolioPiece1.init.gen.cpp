// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortfolioPiece1_init() {}
	PORTFOLIOPIECE1_API UFunction* Z_Construct_UDelegateFunction_PortfolioPiece1_HealthSysSig__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PortfolioPiece1;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PortfolioPiece1()
	{
		if (!Z_Registration_Info_UPackage__Script_PortfolioPiece1.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_PortfolioPiece1_HealthSysSig__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PortfolioPiece1",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x373599E3,
				0x8DDCD3DD,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PortfolioPiece1.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PortfolioPiece1.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PortfolioPiece1(Z_Construct_UPackage__Script_PortfolioPiece1, TEXT("/Script/PortfolioPiece1"), Z_Registration_Info_UPackage__Script_PortfolioPiece1, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x373599E3, 0x8DDCD3DD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
