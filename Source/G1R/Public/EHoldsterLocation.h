#pragma once
#include "CoreMinimal.h"
#include "EHoldsterLocation.generated.h"

UENUM(BlueprintType)
enum class EHoldsterLocation : uint8 {
    Waist,
    Back,
    None,
};

