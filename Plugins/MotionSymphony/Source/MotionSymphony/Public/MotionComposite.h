#pragma once
#include "CoreMinimal.h"
#include "MotionAnimAsset.h"
#include "MotionComposite.generated.h"

class UAnimComposite;

USTRUCT(BlueprintType)
struct MOTIONSYMPHONY_API FMotionComposite : public FMotionAnimAsset {
    GENERATED_BODY()
public:
    UPROPERTY()
    UAnimComposite* AnimComposite;
    
    FMotionComposite();
};

