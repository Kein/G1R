#pragma once
#include "CoreMinimal.h"
#include "ECombatStance.generated.h"

UENUM(BlueprintType)
enum class ECombatStance : uint8 {
    Idle,
    Blocking,
    Attacking,
    Parry,
    Count,
};

