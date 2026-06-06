#pragma once
#include "CoreMinimal.h"
#include "ELogicalLightSampleFunction.generated.h"

UENUM(BlueprintType)
enum class ELogicalLightSampleFunction : uint8 {
    Max,
    Average,
};

