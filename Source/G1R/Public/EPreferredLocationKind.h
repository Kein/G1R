#pragma once
#include "CoreMinimal.h"
#include "EPreferredLocationKind.generated.h"

UENUM(BlueprintType)
enum class EPreferredLocationKind : uint8 {
    None,
    InteractionSpot,
    Position,
    StartingPosition,
};

