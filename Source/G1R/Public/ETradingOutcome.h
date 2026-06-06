#pragma once
#include "CoreMinimal.h"
#include "ETradingOutcome.generated.h"

UENUM(BlueprintType)
enum class ETradingOutcome : uint8 {
    PlayerGetXOre,
    PlayerPaysXOre,
    PlayerNeedsX,
};

