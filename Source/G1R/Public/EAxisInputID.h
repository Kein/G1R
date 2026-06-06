#pragma once
#include "CoreMinimal.h"
#include "EAxisInputID.generated.h"

UENUM(BlueprintType)
enum class EAxisInputID : uint8 {
    MoveForwardBackwards,
    MoveRightLeft,
    LookUpDown,
    LookLeftRight,
    MoveUpDown,
    SelectNextTarget,
};

