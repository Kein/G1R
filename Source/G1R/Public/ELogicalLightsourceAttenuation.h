#pragma once
#include "CoreMinimal.h"
#include "ELogicalLightsourceAttenuation.generated.h"

UENUM(BlueprintType)
enum class ELogicalLightsourceAttenuation : uint8 {
    Linear,
    Quadratic,
};

