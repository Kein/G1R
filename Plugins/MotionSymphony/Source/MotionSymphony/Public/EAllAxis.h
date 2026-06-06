#pragma once
#include "CoreMinimal.h"
#include "EAllAxis.generated.h"

UENUM(BlueprintType)
enum class EAllAxis : uint8 {
    X,
    Y,
    Z,
    NegX,
    NegY,
    NegZ,
};

