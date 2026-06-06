#pragma once
#include "CoreMinimal.h"
#include "ESettingsMessagePriority.generated.h"

UENUM(BlueprintType)
enum class ESettingsMessagePriority : uint8 {
    Lowest,
    Lower,
    Low,
    Normal,
    High,
    Higher,
    Highest,
};

