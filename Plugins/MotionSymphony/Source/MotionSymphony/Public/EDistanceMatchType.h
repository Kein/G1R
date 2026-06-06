#pragma once
#include "CoreMinimal.h"
#include "EDistanceMatchType.generated.h"

UENUM(BlueprintType)
enum class EDistanceMatchType : uint8 {
    None,
    Backward,
    Forward,
    Both,
};

