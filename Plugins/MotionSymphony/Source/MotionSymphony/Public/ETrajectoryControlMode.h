#pragma once
#include "CoreMinimal.h"
#include "ETrajectoryControlMode.generated.h"

UENUM(BlueprintType)
enum class ETrajectoryControlMode : uint8 {
    PlayerControlled,
    AIControlled,
};

