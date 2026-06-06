#pragma once
#include "CoreMinimal.h"
#include "EMagnetConfig.generated.h"

UENUM(BlueprintType)
enum class EMagnetConfig : uint8 {
    SetByBestAlignment,
    SetByFurthestDamagePoint,
    SetByIndex,
    SetManually,
};

