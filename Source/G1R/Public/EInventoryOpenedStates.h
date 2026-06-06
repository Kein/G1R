#pragma once
#include "CoreMinimal.h"
#include "EInventoryOpenedStates.generated.h"

UENUM(BlueprintType)
enum class EInventoryOpenedStates : uint8 {
    Default,
    Crafting,
    Looting,
    TradingInventoryTrader,
    TradingInventoryPlayer,
};

