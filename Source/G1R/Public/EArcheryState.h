#pragma once
#include "CoreMinimal.h"
#include "EArcheryState.generated.h"

UENUM()
enum class EArcheryState : int32 {
    WaitingBowOrCrossbowExist,
    UnEquipped,
    Equipped,
    BowInHandRelaxed,
    BowInHandNotchedAiming,
    WaitingToAiming,
    BowInHandNotchedRelaxed,
    WaitingToFinishNotch,
    WaitingToFinishQuickNotch,
    ReleaseBowString,
    QuickReleaseBowString,
    WaitingToEnterQuickRelease,
    Interrupted,
    NotchArrowOntoBow,
    NotchArrowOntoBowAfterRelease,
    DrawingBowString,
    CountingResistanceTimeWhileDrawingBowString,
    QuickNotchArrowOntoBow,
    NotchArrowOntoBowFromRelax,
    NotchArrowOntoBowFromQuickRelease,
    NotchArrowOntoBowFromAiming,
    ReleaseCrossbow,
    WaitingToFinishRelease,
    WaitingToFinishQuickRelease,
};

