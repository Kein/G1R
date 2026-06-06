#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_Base.h"
#include "ETraverseMoveToPoint.h"
#include "AnimNotifyState_MoveToFirstPoint.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class G1R_API UAnimNotifyState_MoveToFirstPoint : public UAnimNotifyState_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float m_RightOffset;
    
    UPROPERTY(EditAnywhere)
    float m_HeightOffset;
    
    UPROPERTY(EditAnywhere)
    float m_distanceOffset;
    
    UPROPERTY(EditAnywhere)
    bool m_entering;
    
    UPROPERTY()
    float m_Overtime;
    
    UPROPERTY(EditAnywhere)
    ETraverseMoveToPoint m_MoveTo;
    
    UAnimNotifyState_MoveToFirstPoint();

};

