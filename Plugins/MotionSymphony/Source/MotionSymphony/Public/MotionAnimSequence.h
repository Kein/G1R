#pragma once
#include "CoreMinimal.h"
#include "MotionAnimAsset.h"
#include "MotionAnimSequence.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FMotionAnimSequence : public FMotionAnimAsset {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAnimSequence* Sequence;
    
    FMotionAnimSequence();
};

