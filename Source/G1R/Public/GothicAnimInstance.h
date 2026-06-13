#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "BaseGothicAnimInstance.h"
#include "CacheProxyData.h"
#include "EHLSHipsDirection.h"
#include "EItemState.h"
#include "EMovementAction.h"
#include "EMovementDirection.h"
#include "EMovementState.h"
#include "EPivotTrigger.h"
#include "ERotationMode.h"
#include "EStance.h"
#include "ESwimType.h"
#include "EViewMode.h"
#include "EWalkSpeed.h"
#include "EWeaponSkill.h"
#include "LeanAmountS.h"
#include "OnNotifyEventDelegate.h"
#include "RandomSequence.h"
#include "RandomSequencePlayer.h"
#include "VelocityBlendS.h"
#include "GothicAnimInstance.generated.h"

class UAnimMontage;
class UAnimSequenceBase;
class UArcheryComponent;
class UCarryComponent;
class UDataModule_BaseStats;
class UDataModule_Locomotion;
class UDataModule_LookAt;
class UDataModule_Targeting;
class UGothicAnimationComponent;
class UGothicMovementComponent;
class UItemAnimConfig;
class ULocomotionConfig;
class ULocomotionSequencesData;

UCLASS(NonTransient)
class G1R_API UGothicAnimInstance : public UBaseGothicAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    float m_RandomCyclesStartPosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EStance m_Stance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EStance m_PrevStance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EStance m_DesiredStance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EMovementState m_MovementState;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    EMovementState m_PrevMovementState;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float m_MovementStateTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EMovementAction m_MovementAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EMovementAction m_DesiredMovementAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EWalkSpeed m_WalkSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EWalkSpeed m_DesiredWalkSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EWalkSpeed m_PrevDesiredWalkSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    ERotationMode m_RotationMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EMovementDirection m_MovementDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float m_Speed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float m_prevSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FRotator m_ControllerRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FRotator m_PreviousCharacterRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FRotator m_CharacterRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FVector m_CharacterVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FVector m_PreviousVelocity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool m_bHasMovementInput;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool m_HasControllerInput;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float m_FacingAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float m_Direction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool m_LookPointsOfInterestPassively;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool m_IsPoiAvailable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EViewMode ViewMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_IsInFrontWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EHLSHipsDirection TrackedHipsDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector RelativeAccelerationAmount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShouldMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStopped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStopping;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bBlockedState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bPrevBlockedState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bLockedMovement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bPrevLockedMovement;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRotateL;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRotateR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPivot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPivotTrigger PivotTrigger;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotateRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AnimationRotateRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RotateScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DiagonalScaleAmount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WalkRunBlend;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StandingPlayRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CrouchingPlayRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StrideBlend;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVelocityBlendS VelocityBlend;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLeanAmountS LeanAmount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FYaw;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BYaw;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LYaw;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RYaw;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float JumpPlayRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FallSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_FallDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LandPrediction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_IsInWater;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_InWaterDepth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_JumpIntoWater;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_JumpIntoWaterDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_SwimBlendPitchJumpingIntoWater;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_SwimTimeJumpingIntoWater;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_SwimBlendPitchSmoothTime;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    ESwimType m_DesiredSwimType;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float m_SwimPlayRate;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float m_SwimSpeed;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float m_SwimBlendPitch;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    float m_SwimBlendYaw;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRotator SpineRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D AimingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_AimYawRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D SmoothedAimingAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AimSweepTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InputYawOffsetTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ForwardYawTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LeftYawTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float RightYawTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator m_AimingRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FlailRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_BasePose_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_BasePose_CLF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_BasePose_Combat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_IsTurning;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float m_LookAtAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_IsFiring;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_IsAiming;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_IsStrafing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_IsAlive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_IsTargeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EItemState m_ItemState;
    
    UPROPERTY(BlueprintReadOnly)
    bool m_IsAggressive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsLinkedLayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName m_BoneToCut;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_CutBoneInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EWeaponSkill m_WeaponSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsInCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsUsingCrossBow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Enable_AimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Enable_HandIK_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Enable_HandIK_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsFootIKEnabled;
    
    UPROPERTY()
    FOnNotifyEvent OnNotifyEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_SkipFacials;
    
    UPROPERTY(Instanced, Transient)
    UCarryComponent* m_CarryComponent;
    
    UPROPERTY(Instanced, Transient)
    UArcheryComponent* m_ArcheryComponent;
    
    UPROPERTY(BlueprintReadOnly)
    FVector LookAtPoint;
    
    UPROPERTY(BlueprintReadOnly)
    float EnableLookAt;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator LookAtRotator;
    
    UPROPERTY(BlueprintReadOnly)
    bool EnableMicroGestures;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag WeaponTagTS;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsThrowing;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasItemInHand;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasTorchInHand;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsTransformed;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsTransforming;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsUnTransforming;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsInConversation;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsInCinematic;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsOnLadder;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsCrouching;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    ULocomotionSequencesData* m_LocomotionSequencesData;
    
    UPROPERTY()
    FCacheProxyData m_CachedLocomotionData;
    
protected:
    UPROPERTY()
    UDataModule_Locomotion* m_DataModule_Locomotion;
    
    UPROPERTY()
    UDataModule_BaseStats* m_DataModule_BaseStats;
    
    UPROPERTY()
    UDataModule_LookAt* m_DataModule_LookAt;
    
    UPROPERTY()
    UDataModule_Targeting* m_DataModule_Targeting;
    
    UPROPERTY(Instanced)
    ULocomotionConfig* m_LocomotionConfig;
    
    UPROPERTY(Instanced)
    UGothicMovementComponent* m_GothicMovementComponent;
    
    UPROPERTY(Instanced)
    UGothicAnimationComponent* m_GothicAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_UseLinkedLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_UseMotionMatching;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MMRootDelta;
    
    UPROPERTY(Instanced)
    UItemAnimConfig* m_CurrentAnimConfig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRandomSequencePlayer m_RandomSequencePlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FRandomSequencePlayer m_RandomSequencePlayerWalk;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FRandomSequence> m_IdleBreakers;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FRandomSequence> m_WalkBreakers;
    
public:
    UGothicAnimInstance();

    UFUNCTION(BlueprintPure)
    float SurfaceDistance();
    
    UFUNCTION(BlueprintPure)
    bool ShouldRecoverDive();
    
    UFUNCTION(BlueprintPure)
    bool ShouldDive();
    
protected:
    UFUNCTION()
    void ResetDynamicTransitionTimer();
    
    UFUNCTION(BlueprintCallable)
    void ResetBreaker();
    
public:
    UFUNCTION(BlueprintCallable)
    UAnimMontage* PlayDynamicTransition(UAnimSequenceBase* Animation, FName SlotName, float BlendInTime, float BlendOutTime, float PlayRate, float StartTime, float reTriggerDelay);
    
    UFUNCTION(BlueprintPure)
    bool MoveSlopeDown();
    
    UFUNCTION(BlueprintPure)
    bool JumpingIntoWater();
    
    UFUNCTION(BlueprintPure)
    float JumpingAnimDelta();
    
    UFUNCTION(BlueprintPure)
    bool isAcrobatic();
    
    UFUNCTION(BlueprintPure)
    bool HasGameplayTag(FGameplayTag Tag, bool bExactMatch) const;
    
    UFUNCTION(BlueprintPure)
    float GroundClearance();
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetWeaponTagTS();
    
    UFUNCTION(BlueprintPure)
    float GetPredictedWaterDepth();
    
protected:
    UFUNCTION(BlueprintPure)
    ULocomotionSequencesData* GetLocomotionSequencesData();
    
public:
    UFUNCTION(BlueprintPure)
    float GetInitialFallDistance();
    
protected:
    UFUNCTION(BlueprintPure)
    UGothicMovementComponent* GetGothicMovementComponent() const;
    
public:
    UFUNCTION(BlueprintPure)
    TArray<FName> GetFootStepSocketNames(float HeightDifferentTolerance, float ForwardDistanceTolerance) const;
    
    UFUNCTION(BlueprintPure)
    FName GetFeetSocket() const;
    
    UFUNCTION(BlueprintPure)
    float GetFeetPosition() const;
    
protected:
    UFUNCTION()
    void CheckStates();
    
public:
    UFUNCTION(BlueprintPure)
    FVector AltVelocity();
    
    UFUNCTION(BlueprintPure)
    float AltDirection();
    
};

