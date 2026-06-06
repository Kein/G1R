#pragma once
#include "CoreMinimal.h"
#include "EAIAgentWanderType.generated.h"

UENUM(BlueprintType)
enum class EAIAgentWanderType : uint8 {
    None,
    Patrol,
    Zone,
};

