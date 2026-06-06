#pragma once
#include "CoreMinimal.h"
#include "EMotionAnimAssetType.generated.h"

UENUM(BlueprintType)
enum class EMotionAnimAssetType : uint8 {
    None,
    Sequence,
    BlendSpace,
    Composite,
};

