// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsteroids_init() {}
	ASTEROIDS_API UFunction* Z_Construct_UDelegateFunction_Asteroids_Delegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Asteroids;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Asteroids()
	{
		if (!Z_Registration_Info_UPackage__Script_Asteroids.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Asteroids_Delegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Asteroids",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x61661272,
				0x0AD164F1,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Asteroids.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Asteroids.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Asteroids(Z_Construct_UPackage__Script_Asteroids, TEXT("/Script/Asteroids"), Z_Registration_Info_UPackage__Script_Asteroids, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x61661272, 0x0AD164F1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
