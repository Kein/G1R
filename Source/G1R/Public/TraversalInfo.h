#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EClimbType.h"
#include "EMovementState.h"
#include "EWalkSpeed.h"
#include "TraversalInfo.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct G1R_API FTraversalInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTransform m_FirstHitPoint;
    
    UPROPERTY()
    FTransform m_FirstTargetPoint;
    
    UPROPERTY()
    FTransform m_LastHitPoint;
    
    UPROPERTY()
    bool m_HasLastHitPoint;
    
    UPROPERTY()
    float m_ObstacleHeight;
    
    UPROPERTY()
    float m_ObstacleWidth;
    
    UPROPERTY()
    EMovementState m_MovementState;
    
    UPROPERTY()
    EClimbType m_ClimbType;
    
    UPROPERTY()
    bool m_IsStuck;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UPrimitiveComponent> m_TargetObject;
    
    UPROPERTY()
    EWalkSpeed m_Speed;
    
    UPROPERTY()
    EWalkSpeed m_Input;
    
    FTraversalInfo();
};

