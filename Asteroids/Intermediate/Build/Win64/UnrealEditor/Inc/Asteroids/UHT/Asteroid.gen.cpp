// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Asteroids/Asteroid.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsteroid() {}

// Begin Cross Module References
ASTEROIDS_API UClass* Z_Construct_UClass_AAsteroid();
ASTEROIDS_API UClass* Z_Construct_UClass_AAsteroid_NoRegister();
ASTEROIDS_API UFunction* Z_Construct_UDelegateFunction_Asteroids_Delegate__DelegateSignature();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_Asteroids();
// End Cross Module References

// Begin Delegate FDelegate
struct Z_Construct_UDelegateFunction_Asteroids_Delegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Asteroid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Asteroids_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Asteroids, nullptr, "Delegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Asteroids_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Asteroids_Delegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Asteroids_Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Asteroids_Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDelegate_DelegateWrapper(const FScriptDelegate& Delegate)
{
	Delegate.ProcessDelegate<UObject>(NULL);
}
// End Delegate FDelegate

// Begin Class AAsteroid Function onHit
struct Z_Construct_UFunction_AAsteroid_onHit_Statics
{
	struct Asteroid_eventonHit_Parms
	{
		AActor* SelfActor;
		AActor* OtherActor;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Asteroid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAsteroid_onHit_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Asteroid_eventonHit_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAsteroid_onHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Asteroid_eventonHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAsteroid_onHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Asteroid_eventonHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAsteroid_onHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Asteroid_eventonHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAsteroid_onHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsteroid_onHit_Statics::NewProp_SelfActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsteroid_onHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsteroid_onHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAsteroid_onHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAsteroid_onHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAsteroid_onHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAsteroid, nullptr, "onHit", nullptr, nullptr, Z_Construct_UFunction_AAsteroid_onHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAsteroid_onHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAsteroid_onHit_Statics::Asteroid_eventonHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAsteroid_onHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAsteroid_onHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAsteroid_onHit_Statics::Asteroid_eventonHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAsteroid_onHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAsteroid_onHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAsteroid::execonHit)
{
	P_GET_OBJECT(AActor,Z_Param_SelfActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->onHit(Z_Param_SelfActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// End Class AAsteroid Function onHit

// Begin Class AAsteroid
void AAsteroid::StaticRegisterNativesAAsteroid()
{
	UClass* Class = AAsteroid::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "onHit", &AAsteroid::execonHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitDelegate_MetaData[] = {
		{ "Category", "Asteroid" },
		{ "ModuleRelativePath", "Asteroid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_HitDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAsteroid_onHit, "onHit" }, // 1437317847
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsteroid>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AAsteroid_Statics::NewProp_HitDelegate = { "HitDelegate", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsteroid, HitDelegate), Z_Construct_UDelegateFunction_Asteroids_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitDelegate_MetaData), NewProp_HitDelegate_MetaData) }; // 464738895
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAsteroid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsteroid_Statics::NewProp_HitDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroid_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_AAsteroid_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroid_Statics::PropPointers),
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
		{ Z_Construct_UClass_AAsteroid, AAsteroid::StaticClass, TEXT("AAsteroid"), &Z_Registration_Info_UClass_AAsteroid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAsteroid), 1715264134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Asteroid_h_2195663910(TEXT("/Script/Asteroids"),
	Z_CompiledInDeferFile_FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Asteroid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Asteroid_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
