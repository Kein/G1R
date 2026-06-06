#pragma once
#include "CoreMinimal.h"
#include "EDangerLevel.generated.h"

UENUM(BlueprintType)
enum class EDangerLevel : uint8 {
    Orange,
    Red,
    Safe,
    Warning,
};

