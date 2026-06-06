#pragma once
#include "CoreMinimal.h"
#include "EFlyDiveMode.generated.h"

UENUM(BlueprintType)
enum class EFlyDiveMode : uint8 {
    DivergeHybrid,
    DivergeNever,
    FlyAlways,
};

