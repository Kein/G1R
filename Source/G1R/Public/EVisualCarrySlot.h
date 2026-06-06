#pragma once
#include "CoreMinimal.h"
#include "EVisualCarrySlot.generated.h"

UENUM(BlueprintType)
enum class EVisualCarrySlot : uint8 {
    None,
    RightHand,
    LeftHand,
    InventorySlot,
};

