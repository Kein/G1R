#pragma once
#include "CoreMinimal.h"
#include "ECrowdIdleBehaviour.generated.h"

UENUM(BlueprintType)
enum class ECrowdIdleBehaviour : uint8 {
    TryAvoidMe,
    ForceAvoidMe,
    IgnoreMe,
};

