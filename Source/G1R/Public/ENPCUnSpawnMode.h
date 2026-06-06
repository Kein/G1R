#pragma once
#include "CoreMinimal.h"
#include "ENPCUnSpawnMode.generated.h"

UENUM(BlueprintType)
enum class ENPCUnSpawnMode : uint8 {
    Everything,
    KeepPreloaded,
};

