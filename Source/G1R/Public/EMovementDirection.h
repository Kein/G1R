#pragma once
#include "CoreMinimal.h"
#include "EMovementDirection.generated.h"

UENUM(BlueprintType)
enum class EMovementDirection : uint8 {
    Forward,
    Right,
    Left,
    Backward,
    Count,
};

