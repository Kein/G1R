#pragma once
#include "CoreMinimal.h"
#include "EDivergeState.generated.h"

UENUM(BlueprintType)
enum class EDivergeState : uint8 {
    DefaultMove,
    StartZDiverge,
    StopZDiverge,
    ZDivergeMove,
};

