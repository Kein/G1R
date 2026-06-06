#pragma once
#include "CoreMinimal.h"
#include "EJointVelocityCalculationMethod.generated.h"

UENUM(BlueprintType)
enum class EJointVelocityCalculationMethod : uint8 {
    BodyIndependent,
    BodyDependent,
};

