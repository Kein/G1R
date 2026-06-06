#pragma once
#include "CoreMinimal.h"
#include "EInteractionSpotRequirementsMode.generated.h"

UENUM(BlueprintType)
enum class EInteractionSpotRequirementsMode : uint8 {
    Fulfilled,
    NotFulfilled,
};

