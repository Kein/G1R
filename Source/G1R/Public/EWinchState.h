#pragma once
#include "CoreMinimal.h"
#include "EWinchState.generated.h"

UENUM(BlueprintType)
enum class EWinchState : uint8 {
    None,
    Enter,
    Idle,
    MoveRight,
    RightFailure,
    MoveFastRight,
    MoveLeft,
    LeftFailure,
    MoveFastLeft,
    Exit,
};

