#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_Base.h"
#include "EMovementState.h"
#include "ERotationMode.h"
#include "EStance.h"
#include "AnimNotifyState_EarlyBlendout.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_EarlyBlendout : public UAnimNotifyState_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_BlendoutTime;
    
    UPROPERTY(EditAnywhere)
    bool m_CheckMovementState;
    
    UPROPERTY(EditAnywhere)
    EMovementState m_MovementState;
    
    UPROPERTY(EditAnywhere)
    bool m_UpdateMovementStance;
    
    UPROPERTY(EditAnywhere)
    EMovementState m_NewMovementState;
    
    UPROPERTY(EditAnywhere)
    bool m_CheckMovementInput;
    
    UPROPERTY(EditAnywhere)
    bool m_CheckNoInput;
    
    UPROPERTY(EditAnywhere)
    bool m_CheckStance;
    
    UPROPERTY(EditAnywhere)
    EStance m_Stance;
    
    UPROPERTY(EditAnywhere)
    bool m_CheckRotationMode;
    
    UPROPERTY(EditAnywhere)
    ERotationMode m_RotationMode;
    
    UPROPERTY(EditAnywhere)
    bool m_ForceBlendOut;
    
    UPROPERTY(EditAnywhere)
    bool m_IgnorePlayer;
    
    UPROPERTY(EditAnywhere)
    bool m_IgnoreAI;
    
    UAnimNotifyState_EarlyBlendout();

};

