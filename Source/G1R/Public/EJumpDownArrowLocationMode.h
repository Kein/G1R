#pragma once
#include "CoreMinimal.h"
#include "EJumpDownArrowLocationMode.generated.h"

UENUM(BlueprintType)
enum class EJumpDownArrowLocationMode : uint8 {
    Free,
    BottomEnd,
    Dynamic,
};

