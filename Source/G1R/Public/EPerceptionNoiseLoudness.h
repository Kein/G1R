#pragma once
#include "CoreMinimal.h"
#include "EPerceptionNoiseLoudness.generated.h"

UENUM(BlueprintType)
enum class EPerceptionNoiseLoudness : uint8 {
    Silent,
    Whisper,
    Quiet,
    Moderate,
    Loud,
    VeryLoud,
    Count,
};

