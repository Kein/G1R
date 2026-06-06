#pragma once
#include "CoreMinimal.h"
#include "EStencilsUsage.generated.h"

UENUM(BlueprintType)
enum class EStencilsUsage : uint8 {
    None,
    OutlineInSight,
    OutlineAction,
    TelekinesisOnRange,
    TelekinesisOutOfRange,
};

