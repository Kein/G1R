#pragma once
#include "CoreMinimal.h"
#include "EAIAgentCombatDistance.generated.h"

UENUM(BlueprintType)
enum class EAIAgentCombatDistance : uint8 {
    TooClose,
    Attack,
    OutOfRange,
    OutOfCombat,
    Count,
};

