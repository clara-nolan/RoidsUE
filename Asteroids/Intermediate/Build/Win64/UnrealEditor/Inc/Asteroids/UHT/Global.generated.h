// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Global.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTEROIDS_Global_generated_h
#error "Global.generated.h already included, missing '#pragma once' in Global.h"
#endif
#define ASTEROIDS_Global_generated_h

#define FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Global_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execincrementScore);


#define FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Global_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGlobal(); \
	friend struct Z_Construct_UClass_AGlobal_Statics; \
public: \
	DECLARE_CLASS(AGlobal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Asteroids"), NO_API) \
	DECLARE_SERIALIZER(AGlobal)


#define FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Global_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGlobal(AGlobal&&); \
	AGlobal(const AGlobal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGlobal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGlobal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGlobal) \
	NO_API virtual ~AGlobal();


#define FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Global_h_9_PROLOG
#define FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Global_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Global_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Global_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Global_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTEROIDS_API UClass* StaticClass<class AGlobal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Global_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
