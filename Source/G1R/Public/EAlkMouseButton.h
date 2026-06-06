#pragma once
#include "CoreMinimal.h"
#include "EAlkMouseButton.generated.h"

UENUM(BlueprintType)
enum class EAlkMouseButton : uint8 {
    Invalid,
    Left,
    Right,
    Middle,
    Thumb1,
    Thumb2,
};

