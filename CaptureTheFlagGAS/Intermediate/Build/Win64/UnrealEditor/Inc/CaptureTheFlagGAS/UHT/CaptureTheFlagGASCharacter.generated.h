// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CaptureTheFlagGASCharacter.h"

#ifdef CAPTURETHEFLAGGAS_CaptureTheFlagGASCharacter_generated_h
#error "CaptureTheFlagGASCharacter.generated.h already included, missing '#pragma once' in CaptureTheFlagGASCharacter.h"
#endif
#define CAPTURETHEFLAGGAS_CaptureTheFlagGASCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ACaptureTheFlagGASCharacter;
class UCTFPlayerComponent;
enum class ETeam : uint8;

// ********** Begin Class ACaptureTheFlagGASCharacter **********************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASCharacter_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoInteract); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execGetHealthPercentage); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execOnRespawn); \
	DECLARE_FUNCTION(execOnKilled); \
	DECLARE_FUNCTION(execGetCTFPlayerComponent); \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASCharacter_h_32_CALLBACK_WRAPPERS
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACaptureTheFlagGASCharacter_NoRegister();

#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASCharacter_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACaptureTheFlagGASCharacter(); \
	friend struct Z_Construct_UClass_ACaptureTheFlagGASCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACaptureTheFlagGASCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ACaptureTheFlagGASCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureTheFlagGAS"), Z_Construct_UClass_ACaptureTheFlagGASCharacter_NoRegister) \
	DECLARE_SERIALIZER(ACaptureTheFlagGASCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ACaptureTheFlagGASCharacter*>(this); }


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASCharacter_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACaptureTheFlagGASCharacter(ACaptureTheFlagGASCharacter&&) = delete; \
	ACaptureTheFlagGASCharacter(const ACaptureTheFlagGASCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACaptureTheFlagGASCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACaptureTheFlagGASCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACaptureTheFlagGASCharacter) \
	NO_API virtual ~ACaptureTheFlagGASCharacter();


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASCharacter_h_29_PROLOG
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASCharacter_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASCharacter_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASCharacter_h_32_CALLBACK_WRAPPERS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASCharacter_h_32_INCLASS_NO_PURE_DECLS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASCharacter_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACaptureTheFlagGASCharacter;

// ********** End Class ACaptureTheFlagGASCharacter ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_CaptureTheFlagGASCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
