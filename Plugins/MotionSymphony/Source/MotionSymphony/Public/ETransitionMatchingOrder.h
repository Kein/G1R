#pragma once
#include "CoreMinimal.h"
#include "ETransitionMatchingOrder.generated.h"

UENUM(BlueprintType)
enum class ETransitionMatchingOrder : uint8 {
    TransitionPriority,
    PoseAndTransitionCombined,
};

