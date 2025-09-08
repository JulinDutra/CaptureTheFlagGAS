// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/CTFPlayerController.h"

#ifdef CAPTURETHEFLAGGAS_CTFPlayerController_generated_h
#error "CTFPlayerController.generated.h already included, missing '#pragma once' in CTFPlayerController.h"
#endif
#define CAPTURETHEFLAGGAS_CTFPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ACTFCaptureZone;
class ACTFFlag;
class ACTFPlayerState;
class UCTFPlayerComponent;
enum class ETeam : uint8;

// ********** Begin Class ACTFPlayerController *****************************************************
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleHealthChanged); \
	DECLARE_FUNCTION(execHandleTeamChanged); \
	DECLARE_FUNCTION(execHandleExitedCaptureZone); \
	DECLARE_FUNCTION(execHandleEnteredCaptureZone); \
	DECLARE_FUNCTION(execHandleFlagDropped); \
	DECLARE_FUNCTION(execHandleFlagPickedUp); \
	DECLARE_FUNCTION(execGetCTFPlayerState); \
	DECLARE_FUNCTION(execGetCTFPlayerComponent); \
	DECLARE_FUNCTION(execGetInteractionPrompt); \
	DECLARE_FUNCTION(execFindNearestInteractableFlag); \
	DECLARE_FUNCTION(execIsAlive); \
	DECLARE_FUNCTION(execGetHealthPercentage); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetCurrentCaptureZone); \
	DECLARE_FUNCTION(execIsInCaptureZone); \
	DECLARE_FUNCTION(execGetTeam); \
	DECLARE_FUNCTION(execGetCarriedFlag); \
	DECLARE_FUNCTION(execHasFlag); \
	DECLARE_FUNCTION(execHandleDropFlagPressed); \
	DECLARE_FUNCTION(execHandleInteractPressed);


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerController_h_18_CALLBACK_WRAPPERS
CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFPlayerController_NoRegister();

#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACTFPlayerController(); \
	friend struct Z_Construct_UClass_ACTFPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTURETHEFLAGGAS_API UClass* Z_Construct_UClass_ACTFPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ACTFPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureTheFlagGAS"), Z_Construct_UClass_ACTFPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ACTFPlayerController)


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerController_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACTFPlayerController(ACTFPlayerController&&) = delete; \
	ACTFPlayerController(const ACTFPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACTFPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACTFPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACTFPlayerController) \
	NO_API virtual ~ACTFPlayerController();


#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerController_h_15_PROLOG
#define FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerController_h_18_CALLBACK_WRAPPERS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACTFPlayerController;

// ********** End Class ACTFPlayerController *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Personal_CaptureTheFlagGAS_CaptureTheFlagGAS_CaptureTheFlagGAS_Source_CaptureTheFlagGAS_Public_GameFramework_CTFPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
