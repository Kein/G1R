#pragma once
#include "CoreMinimal.h"
#include "EAIAgentSpawningCreatorType.generated.h"

UENUM(BlueprintType)
enum class EAIAgentSpawningCreatorType : uint8 {
    None,
    Proxy,
    Player,
    AI,
};

