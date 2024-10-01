// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Asteroids/Ship.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShip() {}

// Begin Cross Module References
ASTEROIDS_API UClass* Z_Construct_UClass_ABullet_NoRegister();
ASTEROIDS_API UClass* Z_Construct_UClass_AShip();
ASTEROIDS_API UClass* Z_Construct_UClass_AShip_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APawn();
UPackage* Z_Construct_UPackage__Script_Asteroids();
// End Cross Module References

// Begin Class AShip
void AShip::StaticRegisterNativesAShip()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShip);
UClass* Z_Construct_UClass_AShip_NoRegister()
{
	return AShip::StaticClass();
}
struct Z_Construct_UClass_AShip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Ship.h" },
		{ "ModuleRelativePath", "Ship.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Projectile class to spawn\n" },
#endif
		{ "ModuleRelativePath", "Ship.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Projectile class to spawn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AShip_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShip, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABullet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileClass_MetaData), NewProp_ProjectileClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShip_Statics::NewProp_ProjectileClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AShip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Asteroids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AShip_Statics::ClassParams = {
	&AShip::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AShip_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShip_Statics::Class_MetaDataParams), Z_Construct_UClass_AShip_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShip()
{
	if (!Z_Registration_Info_UClass_AShip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShip.OuterSingleton, Z_Construct_UClass_AShip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShip.OuterSingleton;
}
template<> ASTEROIDS_API UClass* StaticClass<AShip>()
{
	return AShip::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShip);
AShip::~AShip() {}
// End Class AShip

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Ship_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShip, AShip::StaticClass, TEXT("AShip"), &Z_Registration_Info_UClass_AShip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShip), 2763312227U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Ship_h_482860458(TEXT("/Script/Asteroids"),
	Z_CompiledInDeferFile_FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Ship_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Ship_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
