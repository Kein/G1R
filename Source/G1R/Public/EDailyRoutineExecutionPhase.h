#pragma once
#include "CoreMinimal.h"
#include "EDailyRoutineExecutionPhase.generated.h"

UENUM(BlueprintType)
enum class EDailyRoutineExecutionPhase : uint8 {
    JustActivated,
    GoingToTaskLocation,
    DoTask,
    WaitingForCancel,
    WaitingForNextTask,
};

