// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Asteroids/Global.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobal() {}

// Begin Cross Module References
ASTEROIDS_API UClass* Z_Construct_UClass_AGlobal();
ASTEROIDS_API UClass* Z_Construct_UClass_AGlobal_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Asteroids();
// End Cross Module References

// Begin Class AGlobal Function incrementScore
struct Z_Construct_UFunction_AGlobal_incrementScore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Global.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGlobal_incrementScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGlobal, nullptr, "incrementScore", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGlobal_incrementScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGlobal_incrementScore_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGlobal_incrementScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGlobal_incrementScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGlobal::execincrementScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->incrementScore();
	P_NATIVE_END;
}
// End Class AGlobal Function incrementScore

// Begin Class AGlobal
void AGlobal::StaticRegisterNativesAGlobal()
{
	UClass* Class = AGlobal::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "incrementScore", &AGlobal::execincrementScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGlobal);
UClass* Z_Construct_UClass_AGlobal_NoRegister()
{
	return AGlobal::StaticClass();
}
struct Z_Construct_UClass_AGlobal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Global.h" },
		{ "ModuleRelativePath", "Global.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Global" },
		{ "ModuleRelativePath", "Global.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGlobal_incrementScore, "incrementScore" }, // 1696274844
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGlobal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGlobal_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGlobal, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGlobal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobal_Statics::NewProp_Score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGlobal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGlobal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Asteroids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGlobal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGlobal_Statics::ClassParams = {
	&AGlobal::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGlobal_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGlobal_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGlobal_Statics::Class_MetaDataParams), Z_Construct_UClass_AGlobal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGlobal()
{
	if (!Z_Registration_Info_UClass_AGlobal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGlobal.OuterSingleton, Z_Construct_UClass_AGlobal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGlobal.OuterSingleton;
}
template<> ASTEROIDS_API UClass* StaticClass<AGlobal>()
{
	return AGlobal::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGlobal);
AGlobal::~AGlobal() {}
// End Class AGlobal

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Global_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGlobal, AGlobal::StaticClass, TEXT("AGlobal"), &Z_Registration_Info_UClass_AGlobal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGlobal), 682739644U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Global_h_1681202656(TEXT("/Script/Asteroids"),
	Z_CompiledInDeferFile_FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Global_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Global_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
