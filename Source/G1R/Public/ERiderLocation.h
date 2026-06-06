#pragma once
#include "CoreMinimal.h"
#include "ERiderLocation.generated.h"

UENUM(BlueprintType)
enum class ERiderLocation : uint8 {
    RIGHT,
    LEFT,
    BACK,
    NONE,
};

