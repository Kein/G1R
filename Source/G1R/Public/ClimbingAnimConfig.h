#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ClimbingMontages.h"
#include "EClimbType.h"
#include "EMovementState.h"
#include "EWalkSpeed.h"
#include "GothicBaseConfig.h"
#include "ClimbingAnimConfig.generated.h"

UCLASS(Abstract, BlueprintType, Const, EditInlineNew)
class UClimbingAnimConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TMap<EWalkSpeed, FClimbingMontages> m_AnimMontage;
    
    UPROPERTY(EditAnywhere)
    float m_PlayRate;
    
    UPROPERTY(EditAnywhere)
    FVector m_AnimStartingOffset;
    
    UPROPERTY(EditAnywhere)
    float m_MinHeight;
    
    UPROPERTY(EditAnywhere)
    float m_MaxHeight;
    
    UPROPERTY(EditAnywhere)
    EWalkSpeed m_WalkSpeed;
    
    UPROPERTY(EditAnywhere)
    bool m_RelativeMovement;
    
    UPROPERTY(EditAnywhere)
    float m_NextStepRequestWindowStart;
    
    UPROPERTY(EditAnywhere)
    float m_NextStepRequestWindowSize;
    
    UPROPERTY(EditAnywhere)
    EClimbType m_ClimbingType;
    
    UPROPERTY(EditAnywhere)
    EMovementState m_MovementState;
    
public:
    UClimbingAnimConfig();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void AddMontage(FClimbingMontages Asset, EWalkSpeed Speed, bool Right) const;
    
};

