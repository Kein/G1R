#pragma once
#include "CoreMinimal.h"
#include "EAIAgentBehaviorCombatSubState.generated.h"

UENUM(BlueprintType)
enum class EAIAgentBehaviorCombatSubState : uint8 {
    WarnTarget,
    EvaluateTarget,
    Approach,
    Attack,
    Defend,
    Count,
};

