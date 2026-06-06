#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimNotifyState_Base.h"
#include "AnimNotifyState_ReorientPivotRotation.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class UAnimNotifyState_ReorientPivotRotation : public UAnimNotifyState_Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRotator m_RotationOffset;
    
    UPROPERTY(EditAnywhere)
    bool m_UpdateRotation;
    
    UPROPERTY(EditAnywhere)
    bool m_Interpolate;
    
    UPROPERTY(EditAnywhere)
    float m_InterpolationSpeed;
    
    UAnimNotifyState_ReorientPivotRotation();

};

