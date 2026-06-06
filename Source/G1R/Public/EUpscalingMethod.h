#pragma once
#include "CoreMinimal.h"
#include "EUpscalingMethod.generated.h"

UENUM(BlueprintType)
enum class EUpscalingMethod : uint8 {
    None,
    DLSS,
    FSR,
    XeSS,
    TSR,
    UpscalingMethod_MAX UMETA(Hidden),
};

