#pragma once
#include "CoreMinimal.h"
#include "EDistanceMatchBasis.generated.h"

UENUM(BlueprintType)
enum class EDistanceMatchBasis : uint8 {
    Positional,
    Rotational,
};

