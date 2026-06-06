#pragma once
#include "CoreMinimal.h"
#include "EUpscalingQualityXeSS.generated.h"

UENUM(BlueprintType)
enum class EUpscalingQualityXeSS : uint8 {
    UltraPerformance,
    Performance,
    Balanced,
    Quality,
    UltraQuality,
    UltraQualityPlus,
    AntiAliasing,
    UpscalingQualityXeSS_MAX UMETA(Hidden),
};

