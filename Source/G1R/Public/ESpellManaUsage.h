#pragma once
#include "CoreMinimal.h"
#include "ESpellManaUsage.generated.h"

UENUM(BlueprintType)
enum class ESpellManaUsage : uint8 {
    Normal,
    Rechargeable,
    TargetLevel,
    Continuous,
    NormalContinuous,
};

