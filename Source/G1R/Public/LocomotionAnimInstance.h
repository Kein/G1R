#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DistanceMatchPayload.h"
#include "EDistanceMatchTrigger.h"
#include "MotionTraitField.h"
#include "Trajectory.h"
#include "DynamicMontage.h"
#include "EFallingSurfaceType.h"
#include "EPivotTrigger.h"
#include "EStance.h"
#include "GothicAnimInstance.h"
#include "LocomotionAnimInstance.generated.h"

class UAnimConfig;
class UDistanceMatching;
class UGothicTrajectoryGenerator_MotionSimphony;
class UTurnOnSpotAssetConfig;

UCLASS(NonTransient)
class G1R_API ULocomotionAnimInstance : public UGothicAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EFallingSurfaceType m_FallingSurfaceType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    float m_FallingSurfaceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TriggerPivotSpeedLimit;
    
    UPROPERTY(Instanced)
    UAnimConfig* m_AnimConfig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_IsTired;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_AlcoholLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_DrugsLevel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_AllowDrunkTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCheatFlying;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UGothicTrajectoryGenerator_MotionSimphony* m_TrajectoryGenerator;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDistanceMatchPayload M_DistanceMatchPayload;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UDistanceMatching* m_DistanceMatching;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTrajectory m_CurrentTrajectory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMotionTraitField m_MMRequiredTags;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MarkerDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDistanceMatchTrigger m_TriggerTransition;
    
    UPROPERTY()
    FVector m_PrevMMRootLocation;
    
    UPROPERTY(BlueprintReadOnly)
    float m_DefaultNeckSpeed;
    
public:
    ULocomotionAnimInstance();

    UFUNCTION(BlueprintCallable)
    void StopTransition();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RotInPlaceCheck();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetTired();
    
    UFUNCTION(BlueprintCallable)
    void ResetStates();
    
    UFUNCTION(BlueprintCallable)
    void ResetPivot();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRestartRootMotion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnCheckJump() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void DoTurnInPlace(const UTurnOnSpotAssetConfig* TurnOnSpotAsset, float PlayRateScale, float ScaleTurnAngle, float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void DoStop(const FDynamicMontage& Montage);
    
    UFUNCTION(BlueprintCallable)
    void DoPivot(const FDynamicMontage& Montage, EPivotTrigger PivotType, bool isPivot);
    
    UFUNCTION(BlueprintCallable)
    void CheckStopMoving();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckStartMoving();
    
    UFUNCTION(BlueprintCallable)
    void ChangeStance(EStance stance);
    
public:
    UFUNCTION(BlueprintCallable)
    void CalculateRotInPlaceRate();
    
};

