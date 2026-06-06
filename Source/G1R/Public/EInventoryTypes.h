#pragma once
#include "CoreMinimal.h"
#include "EInventoryTypes.generated.h"

UENUM(BlueprintType)
enum class EInventoryTypes : uint8 {
    None,
    MainContainer,
    MainHandDEPRECATED,
    MeleeSlot,
    RangedSlot,
    QuickItems,
    TorchSlot,
    Trader,
    TradingBalance,
    Pouch,
    RingLeft,
    RingRight,
    Amulet,
    ArmorSlot,
    BoughtUpgradeItemsContainer,
    Count,
};

