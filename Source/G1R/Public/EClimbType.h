#pragma once
#include "CoreMinimal.h"
#include "EClimbType.generated.h"

UENUM(BlueprintType)
enum class EClimbType : uint8 {
    None,
    High,
    Mid,
    Low,
    Fence,
    HighFence,
    FallingLow,
    FallingHigh,
    FallingImpact,
    Water,
    WaterLow,
    Acrobatic,
    StepDown,
    JumpGap,
    Count,
};

