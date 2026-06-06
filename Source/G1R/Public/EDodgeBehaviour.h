#pragma once
#include "CoreMinimal.h"
#include "EDodgeBehaviour.generated.h"

UENUM(BlueprintType)
enum class EDodgeBehaviour : uint8 {
    SlowMedium,
    SlowShort,
    Fast,
};

