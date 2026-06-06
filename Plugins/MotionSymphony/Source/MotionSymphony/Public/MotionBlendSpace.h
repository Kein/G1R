#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MotionAnimAsset.h"
#include "MotionBlendSpace.generated.h"

class UBlendSpace;

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FMotionBlendSpace : public FMotionAnimAsset {
    GENERATED_BODY()
public:
    UPROPERTY()
    UBlendSpace* BlendSpace;
    
    UPROPERTY()
    FVector2D SampleSpacing;
    
    FMotionBlendSpace();
};

