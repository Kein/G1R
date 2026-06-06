#pragma once
#include "CoreMinimal.h"
#include "ERequestPathVelocityInstigator.generated.h"

UENUM(BlueprintType)
enum class ERequestPathVelocityInstigator : uint8 {
    Pathfollowing,
    ClimbTask,
    DirectMoveTask,
    COUNT,
};

