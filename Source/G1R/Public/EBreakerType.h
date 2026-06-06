#pragma once
#include "CoreMinimal.h"
#include "EBreakerType.generated.h"

UENUM(BlueprintType)
enum class EBreakerType : uint8 {
    Idle,
    Walk,
};

