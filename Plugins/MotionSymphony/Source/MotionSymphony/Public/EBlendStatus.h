#pragma once
#include "CoreMinimal.h"
#include "EBlendStatus.generated.h"

UENUM(BlueprintType)
enum class EBlendStatus : uint8 {
    Inactive,
    Chosen,
    Dominant,
    Decay,
};

