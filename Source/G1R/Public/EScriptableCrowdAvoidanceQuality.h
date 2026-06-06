#pragma once
#include "CoreMinimal.h"
#include "EScriptableCrowdAvoidanceQuality.generated.h"

UENUM(BlueprintType)
enum class EScriptableCrowdAvoidanceQuality : uint8 {
    Low,
    Medium,
    High,
    High_BoldMove,
    High_CarefulCombat,
};

