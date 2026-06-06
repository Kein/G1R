#pragma once
#include "CoreMinimal.h"
#include "EAttackState.generated.h"

UENUM(BlueprintType)
enum class EAttackState : uint8 {
    None,
    Damage,
    Combo,
    Count,
};

