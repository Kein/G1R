#pragma once
#include "CoreMinimal.h"
#include "EInteractionSpotComparisonOp.generated.h"

UENUM(BlueprintType)
enum class EInteractionSpotComparisonOp : uint8 {
    LessThan,
    LessOrEqualTo,
    EqualTo,
    GreaterThan,
    GreaterOrEqualTo,
    NotEqualTo,
};

