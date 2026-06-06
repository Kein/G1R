#pragma once
#include "CoreMinimal.h"
#include "EMSStrideVectorMethod.generated.h"

UENUM(BlueprintType)
enum class EMSStrideVectorMethod : uint8 {
    ManualVelocity,
    ActorVelocity,
};

