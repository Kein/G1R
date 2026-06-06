#pragma once
#include "CoreMinimal.h"
#include "EItemAction.generated.h"

UENUM(BlueprintType)
enum class EItemAction : uint8 {
    Loot,
    Plunder,
    Pick,
    Craft,
    Buy,
    Sell,
    Drop,
    Consume,
    Throw,
    CraftConsume,
};

