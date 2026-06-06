#pragma once
#include "CoreMinimal.h"
#include "ETrajectoryErrorWarpMode.generated.h"

UENUM(BlueprintType)
enum class ETrajectoryErrorWarpMode : uint8 {
    Disabled,
    Standard,
    Strafe,
};

