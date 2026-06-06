#pragma once
#include "CoreMinimal.h"
#include "EMovementAction.generated.h"

UENUM(BlueprintType)
enum class EMovementAction : uint8 {
    None,
    LowClimbimg,
    HighClimbimg,
    Rolling,
    GettingUp,
    Jumping,
    LayingDown,
    Interact,
    Interaction,
    Pivoting,
    StartFlying,
    Fishing,
    CastingSpell,
    LaunchingSpell,
    Dodge,
    Attack,
    Count,
};

