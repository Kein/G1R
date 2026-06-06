#pragma once
#include "CoreMinimal.h"
#include "ETrajectoryMoveMode.generated.h"

UENUM(BlueprintType)
enum class ETrajectoryMoveMode : uint8 {
    Standard,
    Strafe,
};

