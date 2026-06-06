#pragma once
#include "CoreMinimal.h"
#include "EMovementState.generated.h"

UENUM(BlueprintType)
enum class EMovementState : uint8 {
    None,
    Grounded,
    Swimming,
    Falling,
    Flying,
    Climbing,
    Traversing,
    RagDoll,
    Interaction,
    Ladder,
    Riding,
    WallClimbing,
    Floating,
    Count,
};

