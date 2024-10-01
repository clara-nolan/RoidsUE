// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Asteroid.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FHitResult;
#ifdef ASTEROIDS_Asteroid_generated_h
#error "Asteroid.generated.h already included, missing '#pragma once' in Asteroid.h"
#endif
#define ASTEROIDS_Asteroid_generated_h

#define FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Asteroid_h_12_DELEGATE \
ASTEROIDS_API void FDelegate_DelegateWrapper(const FScriptDelegate& Delegate);


#define FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Asteroid_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execonHit);


#define FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Asteroid_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAsteroid(); \
	friend struct Z_Construct_UClass_AAsteroid_Statics; \
public: \
	DECLARE_CLASS(AAsteroid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Asteroids"), NO_API) \
	DECLARE_SERIALIZER(AAsteroid)


#define FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Asteroid_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAsteroid(AAsteroid&&); \
	AAsteroid(const AAsteroid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsteroid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsteroid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAsteroid) \
	NO_API virtual ~AAsteroid();


#define FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Asteroid_h_13_PROLOG
#define FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Asteroid_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Asteroid_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Asteroid_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Asteroid_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTEROIDS_API UClass* StaticClass<class AAsteroid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Asteroid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
