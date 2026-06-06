#pragma once
#include "CoreMinimal.h"
#include "EInventoryFilterTypes.generated.h"

UENUM(BlueprintType)
enum class EInventoryFilterTypes : uint8 {
    Melee,
    Ranged,
    Magic,
    Wearables,
    Food,
    Potions,
    Materials,
    Documents,
    Miscellaneous,
    Artifacts,
    All,
    Trade,
};

