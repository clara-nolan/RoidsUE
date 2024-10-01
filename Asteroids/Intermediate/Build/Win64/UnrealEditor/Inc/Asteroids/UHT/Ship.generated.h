// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ship.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTEROIDS_Ship_generated_h
#error "Ship.generated.h already included, missing '#pragma once' in Ship.h"
#endif
#define ASTEROIDS_Ship_generated_h

#define FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Ship_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShip(); \
	friend struct Z_Construct_UClass_AShip_Statics; \
public: \
	DECLARE_CLASS(AShip, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Asteroids"), NO_API) \
	DECLARE_SERIALIZER(AShip)


#define FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Ship_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AShip(AShip&&); \
	AShip(const AShip&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShip); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShip); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShip) \
	NO_API virtual ~AShip();


#define FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Ship_h_10_PROLOG
#define FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Ship_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Ship_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Ship_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTEROIDS_API UClass* StaticClass<class AShip>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_clara_Documents_CIS5680_Asteroids_Asteroids_Source_Asteroids_Ship_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
