#pragma once
#include "CoreMinimal.h"
#include "EDirtAmountType.generated.h"

UENUM(BlueprintType)
enum class EDirtAmountType : uint8 {
    Low,
    Medium,
    High,
    Custom,
};

