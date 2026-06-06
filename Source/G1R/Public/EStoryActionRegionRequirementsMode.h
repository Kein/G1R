#pragma once
#include "CoreMinimal.h"
#include "EStoryActionRegionRequirementsMode.generated.h"

UENUM(BlueprintType)
enum class EStoryActionRegionRequirementsMode : uint8 {
    Fulfilled,
    NotFulfilled,
};

