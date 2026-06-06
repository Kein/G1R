#pragma once
#include "CoreMinimal.h"
#include "EDeathCause.generated.h"

UENUM(BlueprintType)
enum class EDeathCause : uint8 {
    None,
    Drowning,
    FallDamage,
    CombatDamage,
};

