#pragma once
#include "CoreMinimal.h"
#include "EPerceptionSoundLengthType.generated.h"

UENUM(BlueprintType)
enum class EPerceptionSoundLengthType : uint8 {
    Instant,
    Continuous,
    Duration,
};

