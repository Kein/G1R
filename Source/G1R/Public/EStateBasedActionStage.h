#pragma once
#include "CoreMinimal.h"
#include "EStateBasedActionStage.generated.h"

UENUM(BlueprintType)
enum class EStateBasedActionStage : uint8 {
    WaitForManualStart,
    SimulatingRoutine,
    None,
    WaitingForUnblock,
    ReadyForAction,
    WaitingForActionToStart,
    DoingAction,
    FinishingAction,
    ActionCompleted,
    Done,
};

