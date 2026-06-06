#pragma once
#include "CoreMinimal.h"
#include "EUpscalingQualityFSR.generated.h"

UENUM(BlueprintType)
enum class EUpscalingQualityFSR : uint8 {
    NativeAA,
    Quality,
    Balanced,
    Performance,
    UltraPerformance,
    UpscalingQualityFSR_MAX UMETA(Hidden),
};

