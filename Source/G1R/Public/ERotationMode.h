#pragma once
#include "CoreMinimal.h"
#include "ERotationMode.generated.h"

UENUM(BlueprintType)
enum class ERotationMode : uint8 {
    LookingDirection,
    VelocityDirection,
    Aiming,
    PointOfInterest,
    Count,
};

