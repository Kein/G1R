#pragma once
#include "CoreMinimal.h"
#include "EPastTrajectoryMode.generated.h"

UENUM(BlueprintType)
enum class EPastTrajectoryMode : uint8 {
    ActualHistory,
    CopyFromCurrentPose,
};

