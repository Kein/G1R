#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CameraSettings.h"
#include "EMovementAction.h"
#include "EMovementState.h"
#include "ERotationMode.h"
#include "EStance.h"
#include "EWalkSpeed.h"
#include "GothicCameraAnimInstance.generated.h"

class ACharacter;
class UGeneralConfig_Camera;
class UGothicAbilitySystemComponent;

UCLASS(NonTransient)
class G1R_API UGothicCameraAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    ACharacter* m_Character;
    
    UPROPERTY(Instanced)
    UGothicAbilitySystemComponent* m_AbilitySystemComponent;
    
    UPROPERTY(Instanced)
    UGeneralConfig_Camera* m_GeneralConfigCamera;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FCameraSettings m_CameraSettings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool m_RightShoulder;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EMovementState m_MovementState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EMovementAction m_MovementAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    ERotationMode m_RotationMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EWalkSpeed m_WalkSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    EStance m_Stance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool m_InCombat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    int32 m_EnemiesGroundAround;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    int32 m_EnemiesFlyAround;
    
public:
    UGothicCameraAnimInstance();

protected:
    UFUNCTION(BlueprintPure)
    float GetRotationModeBlendTime(ERotationMode RotationMode) const;
    
};

