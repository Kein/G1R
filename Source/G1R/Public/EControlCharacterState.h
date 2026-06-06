#pragma once
#include "CoreMinimal.h"
#include "EControlCharacterState.generated.h"

UENUM(BlueprintType)
enum class EControlCharacterState : uint8 {
    Idle,
    WaitingFramesBeforeWork,
    WaitingFramesAfterWorkDone,
    DoWork,
    CameraTravellingStart,
    CameraTravellingEnd,
    Controlling,
    WaitingServerFinishPossessUnpossess,
};

