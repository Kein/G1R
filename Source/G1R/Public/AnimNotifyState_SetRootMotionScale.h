#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_Base.h"
#include "AnimNotifyState_SetRootMotionScale.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class G1R_API UAnimNotifyState_SetRootMotionScale : public UAnimNotifyState_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float m_RootMotionScale;
    
    UAnimNotifyState_SetRootMotionScale();

};

