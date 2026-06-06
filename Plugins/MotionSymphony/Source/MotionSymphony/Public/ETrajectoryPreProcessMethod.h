#pragma once
#include "CoreMinimal.h"
#include "ETrajectoryPreProcessMethod.generated.h"

UENUM(BlueprintType)
enum class ETrajectoryPreProcessMethod : uint8 {
    None,
    IgnoreEdges,
    Extrapolate,
    Animation,
};

