#pragma once
#include "CoreMinimal.h"
#include "EUpscalingQualityDLSS.generated.h"

UENUM(BlueprintType)
enum class EUpscalingQualityDLSS : uint8 {
    DLSS_SR_Performance,
    DLSS_SR_Balanced,
    DLSS_SR_Quality,
    DLAA,
    UpscalingQualityDLSS_MAX UMETA(Hidden),
};

