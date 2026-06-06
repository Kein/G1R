#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayTagContainer.h"
#include "EMovementState.h"
#include "EWalkSpeed.h"
#include "G1RHasWaterChangedDelegateDelegate.h"
#include "GothicActorComponentInterface.h"
#include "GothicBaseMovementComponent.h"
#include "Templates/SubclassOf.h"
#include "GothicMovementComponent.generated.h"

class AGothicCharacter;
class UClimbingConfig;
class UGothicAbilitySystemComponent;
class UGothicAnimationComponent;
class UGothicTrajectoryGenerator_MotionSimphony;
class UGroundConfig;
class ULocomotionAnimInstance;
class ULocomotionCurveConfig;
class UScriptGameplayEffect;
class USwimConfig;
class UWalkSpeedModifierComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class G1R_API UGothicMovementComponent : public UGothicBaseMovementComponent, public IGothicActorComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FG1RHasWaterChangedDelegate m_OnHasWaterChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StepSmoothStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StepSmoothDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StepSmoothMinZDelta;
    
    UPROPERTY(Replicated)
    bool m_wallSideEdge;
    
    UPROPERTY(Replicated)
    bool m_wallVerticalEdge;
    
    UPROPERTY(Replicated)
    float m_WaterFrictionMultiplier;
    
    UPROPERTY(Replicated)
    FVector m_VelocityPreJump;
    
protected:
    UPROPERTY()
    ULocomotionAnimInstance* m_AnimInstance;
    
    UPROPERTY()
    AGothicCharacter* m_Character;
    
    UPROPERTY(ReplicatedUsing=OnRepNewMaxSpeed)
    float m_NewMaxSpeed;
    
    UPROPERTY(ReplicatedUsing=OnRepSpeedForCurve)
    float m_SpeedForCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_MaxWaterfallForceSpeed;
    
    UPROPERTY(Replicated)
    FRotator m_ControllerRotation;
    
    UPROPERTY(Instanced)
    ULocomotionCurveConfig* m_LocomotionCurveConfig;
    
    UPROPERTY(Instanced)
    UGroundConfig* m_GroundConfig;
    
    UPROPERTY(Instanced)
    UClimbingConfig* m_ClimbingConfig;
    
    UPROPERTY(Instanced)
    UClimbingConfig* m_JumpConfig;
    
    UPROPERTY(Instanced)
    USwimConfig* m_SwimConfig;
    
    UPROPERTY(Instanced)
    UGothicAbilitySystemComponent* m_AbilitySystemComponent;
    
    UPROPERTY(Instanced)
    UGothicTrajectoryGenerator_MotionSimphony* m_TrajectoryGenerator;
    
    UPROPERTY(Instanced)
    UGothicAnimationComponent* m_AnimationComponent;
    
    UPROPERTY(Instanced)
    UWalkSpeedModifierComponent* m_WalkSpeedModifierComponent;
    
    UPROPERTY()
    TSubclassOf<UScriptGameplayEffect> m_PreviousWaterEffect;
    
    UPROPERTY()
    FActiveGameplayEffectHandle m_ActiveEffectHandle;
    
    UPROPERTY()
    FVector m_PrevMovementInput;
    
    UPROPERTY()
    TMap<EMovementState, FGameplayTag> m_GothicMovementStateTags;
    
    UPROPERTY(EditDefaultsOnly)
    float m_MaxSecondsBeingStuck;
    
public:
    UGothicMovementComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetCheatFlying(bool Value);
    
    UFUNCTION(Server, Unreliable)
    void Server_SetWallSideEdge(bool WallSideEdge);
    
    UFUNCTION(Server, Unreliable)
    void Server_SetVerticalEdge(bool VerticalEdge);
    
protected:
    UFUNCTION(Reliable, Server)
    void Server_SetCapsuleHalfHeight(float HalfHeight);
    
    UFUNCTION()
    void OnRepSpeedForCurve();
    
    UFUNCTION()
    void OnRepNewMaxSpeed();
    
    UFUNCTION(NetMulticast, Reliable)
    void Multicast_SetCapsuleHalfHeight(float HalfHeight);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsMovingOnSlope() const;
    
    UFUNCTION(BlueprintPure)
    float GetWaterInDepth() const;
    
    UFUNCTION(BlueprintPure)
    float GetWaterDepth() const;
    
    UFUNCTION(BlueprintCallable)
    float GetWalkToSwimHeight();
    
    UFUNCTION(BlueprintPure)
    FVector GetStartMovingDirection() const;
    
    UFUNCTION(BlueprintPure)
    EWalkSpeed GetRequestedWalkSpeed() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetPivotCheckDirection() const;
    
    UFUNCTION(BlueprintPure)
    float GetMovingSlopeAngle() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentSpeed();
    
    UFUNCTION(BlueprintPure)
    float GetCurrentMaxSpeed();
    
    UFUNCTION(BlueprintCallable)
    FRotator GetControllerRotation();
    

    // Fix for true pure virtual functions not being implemented
};

