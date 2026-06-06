#pragma once
#include "CoreMinimal.h"
#include "EAIAgentMindset.generated.h"

UENUM(BlueprintType)
enum class EAIAgentMindset : uint8 {
    Calm,
    Suspicious,
    Aggressive,
    Count,
};

