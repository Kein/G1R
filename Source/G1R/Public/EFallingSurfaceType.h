#pragma once
#include "CoreMinimal.h"
#include "EFallingSurfaceType.generated.h"

UENUM(BlueprintType)
enum class EFallingSurfaceType : uint8 {
    None,
    Ground,
    Water,
    Count,
};

