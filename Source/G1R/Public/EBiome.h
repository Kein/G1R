#pragma once
#include "CoreMinimal.h"
#include "EBiome.generated.h"

UENUM(BlueprintType)
enum class EBiome : uint8 {
    TemperateDecidiousForest,
    RainfeldUpland,
    Desert,
    Wetland,
    Tundra,
    OrcCity,
    None,
};

