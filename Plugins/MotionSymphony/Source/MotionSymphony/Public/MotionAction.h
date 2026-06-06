#pragma once
#include "CoreMinimal.h"
#include "MotionTraitField.h"
#include "MotionAction.generated.h"

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FMotionAction {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 ActionId;
    
    UPROPERTY()
    int32 PoseId;
    
    UPROPERTY()
    float Time;
    
    UPROPERTY()
    FMotionTraitField Trait;
    
    UPROPERTY()
    int32 LastActionId;
    
    UPROPERTY()
    int32 NextActionId;
    
    FMotionAction();
};

