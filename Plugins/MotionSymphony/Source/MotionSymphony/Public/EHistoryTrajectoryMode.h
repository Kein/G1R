#pragma once
#include "CoreMinimal.h"
#include "EHistoryTrajectoryMode.generated.h"

UENUM(BlueprintType)
enum class EHistoryTrajectoryMode : uint8 {
    ActualHistory,
    IntendedMaxSpeedHistory,
};

