#pragma once
#include "CoreMinimal.h"
#include "EUpscalingQualityTSR.generated.h"

UENUM(BlueprintType)
enum class EUpscalingQualityTSR : uint8 {
    Performance,
    Balanced,
    Quality,
    UltraQuality,
    Native,
    UpscalingQualityTSR_MAX UMETA(Hidden),
};

