#pragma once
#include "CoreMinimal.h"
#include "EBodyVelocityMethod.generated.h"

UENUM(BlueprintType)
enum class EBodyVelocityMethod : uint8 {
    None,
    Manual,
    Reported,
};

