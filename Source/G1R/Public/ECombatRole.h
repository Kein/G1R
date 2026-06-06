#pragma once
#include "CoreMinimal.h"
#include "ECombatRole.generated.h"

UENUM(BlueprintType)
enum class ECombatRole : uint8 {
    None,
    PassiveAttacker,
    ActiveAttacker,
    Observer,
    HealSelf,
    Custom1,
    Custom2,
    Custom3,
    Custom4,
};

