#pragma once
#include "CoreMinimal.h"
#include "EMotionMatchingMode.generated.h"

UENUM(BlueprintType)
enum class EMotionMatchingMode : uint8 {
    MotionMatching,
    DistanceMatching,
    Action,
};

