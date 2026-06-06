#pragma once
#include "CoreMinimal.h"
#include "GothicBaseConfig.h"
#include "GroundConfig.generated.h"

UCLASS(Abstract, BlueprintType, Const, EditInlineNew)
class UGroundConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_UpdateRotationMinimumSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_TargetInterpSpeedInteractuablesRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_TargetInterpSpeedVelocityDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_TargetInterpSpeedLookingDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_TargetInterpSpeedAiming;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_ActorInterpSpeedFallingAiming;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_ActorInterpFalling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_GroundedRotationRate_Aiming;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_GroundedRotationRate_Roll;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_GroundedRotationRate_Dodge;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_VelocityBlendInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_GroundedLeanInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_SmoothedAimingRotationInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_InputYawOffsetInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MovementInputMinimumAmountToSprint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MovementInputMaximumYawToSprint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_UpdateGaitSpeedOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_LimitMovementOnEdge;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MaxStepHeightNormal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_MaxStepHeightStrafe;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_CrouchCapsuleHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_EnterSlopeDegrees;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_ExitSlopeDegrees;
    
public:
    UGroundConfig();

};

