// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/CTFAttributeSet.h"

#ifdef CAPTURETHEFLAGGAS_CTFAttributeSet_generated_h
#error "CTFAttributeSet.generated.h already included, missing '#pragma once' in CTFAttributeSet.h"
#endif
#define CAPTURETHEFLAGGAS_CTFAttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayAttributeData;

// ********** Begin Class UCTFAttributeSet *********************************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GAS_CTFAttributeSet_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_FlagSpeedMultiplier); \
	DECLARE_FUNCTION(execOnRep_MovementSpeedMultiplier); \
	DECLARE_FUNCTION(execOnRep_MovementSpeed); \
	DECLARE_FUNCTION(execOnRep_HealthRegenRate); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health);


CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_UCTFAttributeSet_NoRegister();

#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GAS_CTFAttributeSet_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCTFAttributeSet(); \
	friend struct Z_Construct_UClass_UCTFAttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_UCTFAttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UCTFAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CaptureTheFlagGAS"), Z_Construct_UClass_UCTFAttributeSet_NoRegister) \
	DECLARE_SERIALIZER(UCTFAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Health=NETFIELD_REP_START, \
		MaxHealth, \
		HealthRegenRate, \
		MovementSpeed, \
		MovementSpeedMultiplier, \
		FlagSpeedMultiplier, \
		NETFIELD_REP_END=FlagSpeedMultiplier	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(UCTFAttributeSet) \
public:


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GAS_CTFAttributeSet_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCTFAttributeSet(UCTFAttributeSet&&) = delete; \
	UCTFAttributeSet(const UCTFAttributeSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCTFAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCTFAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCTFAttributeSet) \
	NO_API virtual ~UCTFAttributeSet();


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GAS_CTFAttributeSet_h_10_PROLOG
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GAS_CTFAttributeSet_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GAS_CTFAttributeSet_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GAS_CTFAttributeSet_h_13_INCLASS_NO_PURE_DECLS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GAS_CTFAttributeSet_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCTFAttributeSet;

// ********** End Class UCTFAttributeSet ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GAS_CTFAttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
