#pragma once
#include "CoreMinimal.h"
#include "ERelativeCrimeOrigin.generated.h"

UENUM(BlueprintType)
enum class ERelativeCrimeOrigin : uint8 {
    Witness,
    ConflictSync,
    PathwaySync,
    Unknown,
};

