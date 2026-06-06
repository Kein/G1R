#pragma once
#include "CoreMinimal.h"
#include "ECoumpoundInputHintLocation.generated.h"

UENUM(BlueprintType)
enum class ECoumpoundInputHintLocation : uint8 {
    Up,
    Left,
    Down,
    Right,
};

