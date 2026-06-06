#pragma once
#include "CoreMinimal.h"
#include "EPerceptionSense.generated.h"

UENUM(BlueprintType)
enum class EPerceptionSense : uint8 {
    None,
    See,
    Hear,
    Smell,
    Count,
};

