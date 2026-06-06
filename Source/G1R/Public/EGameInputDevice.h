#pragma once
#include "CoreMinimal.h"
#include "EGameInputDevice.generated.h"

UENUM(BlueprintType)
enum class EGameInputDevice : uint8 {
    MouseAndKeyboard,
    Gamepad,
};

