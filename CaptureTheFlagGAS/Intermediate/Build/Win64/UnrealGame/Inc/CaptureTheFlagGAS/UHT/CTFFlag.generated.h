// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/CTFFlag.h"

#ifdef CAPTURETHEFLAGGAS_CTFFlag_generated_h
#error "CTFFlag.generated.h already included, missing '#pragma once' in CTFFlag.h"
#endif
#define CAPTURETHEFLAGGAS_CTFFlag_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class ACTFFlag;
class ACTFPlayerState;
class UPrimitiveComponent;
enum class EFlagState : uint8;
enum class ETeam : uint8;
struct FHitResult;

// ********** Begin Delegate FFlagPickedUpDelegate *************************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFFlag_h_17_DELEGATE \
CAPTURETHEFLAGGAS_API void FFlagPickedUpDelegate_DelegateWrapper(const FMulticastScriptDelegate& FlagPickedUpDelegate, ACTFFlag* Flag, ACTFPlayerState* Player);


// ********** End Delegate FFlagPickedUpDelegate ***************************************************

// ********** Begin Delegate FFlagDroppedDelegate **************************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFFlag_h_18_DELEGATE \
CAPTURETHEFLAGGAS_API void FFlagDroppedDelegate_DelegateWrapper(const FMulticastScriptDelegate& FlagDroppedDelegate, ACTFFlag* Flag, FVector DropLocation);


// ********** End Delegate FFlagDroppedDelegate ****************************************************

// ********** Begin Delegate FFlagReturnedDelegate *************************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFFlag_h_19_DELEGATE \
CAPTURETHEFLAGGAS_API void FFlagReturnedDelegate_DelegateWrapper(const FMulticastScriptDelegate& FlagReturnedDelegate, ACTFFlag* Flag);


// ********** End Delegate FFlagReturnedDelegate ***************************************************

// ********** Begin Delegate FFlagCapturedDelegate *************************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFFlag_h_20_DELEGATE \
CAPTURETHEFLAGGAS_API void FFlagCapturedDelegate_DelegateWrapper(const FMulticastScriptDelegate& FlagCapturedDelegate, ACTFFlag* Flag, ETeam CapturingTeam, ACTFPlayerState* Player);


// ********** End Delegate FFlagCapturedDelegate ***************************************************

// ********** Begin Class ACTFFlag *****************************************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFFlag_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnInteractionSphereBeginOverlap); \
	DECLARE_FUNCTION(execValidateState); \
	DECLARE_FUNCTION(execValidateCapture); \
	DECLARE_FUNCTION(execOnRep_ReturnTimer); \
	DECLARE_FUNCTION(execOnRep_Carrier); \
	DECLARE_FUNCTION(execOnRep_FlagState); \
	DECLARE_FUNCTION(execResetFlag); \
	DECLARE_FUNCTION(execGetReturnProgress); \
	DECLARE_FUNCTION(execGetReturnTimer); \
	DECLARE_FUNCTION(execGetDistanceFromBase); \
	DECLARE_FUNCTION(execGetBaseLocation); \
	DECLARE_FUNCTION(execSetBaseLocation); \
	DECLARE_FUNCTION(execGetOwningTeam); \
	DECLARE_FUNCTION(execSetCarrier); \
	DECLARE_FUNCTION(execGetCarrier); \
	DECLARE_FUNCTION(execTryCapture); \
	DECLARE_FUNCTION(execReturnToBase); \
	DECLARE_FUNCTION(execOnDropped); \
	DECLARE_FUNCTION(execTryPickUp); \
	DECLARE_FUNCTION(execCanBePickedUpBy); \
	DECLARE_FUNCTION(execIsDropped); \
	DECLARE_FUNCTION(execIsCarried); \
	DECLARE_FUNCTION(execIsAtBase); \
	DECLARE_FUNCTION(execGetFlagState); \
	DECLARE_FUNCTION(execSetFlagState);


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFFlag_h_25_CALLBACK_WRAPPERS
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFFlag_NoRegister();

#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFFlag_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACTFFlag(); \
	friend struct Z_Construct_UClass_ACTFFlag_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFFlag_NoRegister(); \
public: \
	DECLARE_CLASS2(ACTFFlag, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureTheFlagGAS"), Z_Construct_UClass_ACTFFlag_NoRegister) \
	DECLARE_SERIALIZER(ACTFFlag) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentState=NETFIELD_REP_START, \
		Carrier, \
		BaseLocation, \
		ReturnTimer, \
		NETFIELD_REP_END=ReturnTimer	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFFlag_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACTFFlag(ACTFFlag&&) = delete; \
	ACTFFlag(const ACTFFlag&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACTFFlag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACTFFlag); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACTFFlag) \
	NO_API virtual ~ACTFFlag();


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFFlag_h_22_PROLOG
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFFlag_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFFlag_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFFlag_h_25_CALLBACK_WRAPPERS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFFlag_h_25_INCLASS_NO_PURE_DECLS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFFlag_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACTFFlag;

// ********** End Class ACTFFlag *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_Gameplay_CTFFlag_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
