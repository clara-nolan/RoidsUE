// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Asteroids/Asteroid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsteroid() {}

// Begin Cross Module References
ASTEROIDS_API UClass* Z_Construct_UClass_AAsteroid();
ASTEROIDS_API UClass* Z_Construct_UClass_AAsteroid_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Asteroids();
// End Cross Module References

// Begin Class AAsteroid
void AAsteroid::StaticRegisterNativesAAsteroid()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAsteroid);
UClass* Z_Construct_UClass_AAsteroid_NoRegister()
{
	return AAsteroid::StaticClass();
}
struct Z_Construct_UClass_AAsteroid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Asteroid.h" },
		{ "ModuleRelativePath", "Asteroid.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsteroid>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAsteroid_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Asteroids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroid_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAsteroid_Statics::ClassParams = {
	&AAsteroid::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroid_Statics::Class_MetaDataParams), Z_Construct_UClass_AAsteroid_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAsteroid()
{
	if (!Z_Registration_Info_UClass_AAsteroid.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAsteroid.OuterSingleton, Z_Construct_UClass_AAsteroid_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAsteroid.OuterSingleton;
}
template<> ASTEROIDS_API UClass* StaticClass<AAsteroid>()
{
	return AAsteroid::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAsteroid);
AAsteroid::~AAsteroid() {}
// End Class AAsteroid

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Asteroid_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAsteroid, AAsteroid::StaticClass, TEXT("AAsteroid"), &Z_Registration_Info_UClass_AAsteroid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAsteroid), 560297363U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Asteroid_h_568752772(TEXT("/Script/Asteroids"),
	Z_CompiledInDeferFile_FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Asteroid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Asteroid_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
