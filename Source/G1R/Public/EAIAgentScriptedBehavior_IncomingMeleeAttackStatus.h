#pragma once
#include "CoreMinimal.h"
#include "EAIAgentScriptedBehavior_IncomingMeleeAttackStatus.generated.h"

UENUM(BlueprintType)
enum class EAIAgentScriptedBehavior_IncomingMeleeAttackStatus : uint8 {
    None,
    Start,
    Damage,
    Done,
};

