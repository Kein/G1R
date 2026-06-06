#pragma once
#include "CoreMinimal.h"
#include "EDodgeWindowTimeframe.generated.h"

UENUM(BlueprintType)
enum class EDodgeWindowTimeframe : uint8 {
    Any,
    Early,
    Late,
};

