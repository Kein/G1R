#pragma once
#include "CoreMinimal.h"
#include "EPoseMatchMethod.generated.h"

UENUM(BlueprintType)
enum class EPoseMatchMethod : uint8 {
    Optimized,
    Linear,
};

