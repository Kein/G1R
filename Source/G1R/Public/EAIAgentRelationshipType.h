#pragma once
#include "CoreMinimal.h"
#include "EAIAgentRelationshipType.generated.h"

UENUM(BlueprintType)
enum class EAIAgentRelationshipType : uint8 {
    None,
    Neutral,
    Friendly,
    Hostile,
    Prey,
    Count,
};

