#pragma once
#include "CoreMinimal.h"
#include "EDistanceMatchTrigger.generated.h"

UENUM(BlueprintType)
enum class EDistanceMatchTrigger : uint8 {
    None,
    Start,
    Stop,
    Plant,
    Jump,
    TurnInPlace,
    Pivot,
};

