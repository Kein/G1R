#pragma once
#include "CoreMinimal.h"
#include "ECrowdGroupsBehaviour.generated.h"

UENUM(BlueprintType)
enum class ECrowdGroupsBehaviour : uint8 {
    UseSocialHierarchy,
    IgnoreAllAgents,
    IgnoreAllAgentsAndObstacles,
    AvoidAllAgents,
    AvoidAllAIAgents,
};

