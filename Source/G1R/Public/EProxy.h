#pragma once
#include "CoreMinimal.h"
#include "EProxy.generated.h"

UENUM(BlueprintType)
enum class EProxy : uint8 {
    None,
    Bottom,
    WeaponBase,
    Side,
    Hanging,
    Pivot,
};

