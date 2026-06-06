#pragma once
#include "CoreMinimal.h"
#include "EGothicFocusPriority.generated.h"

UENUM(BlueprintType)
enum class EGothicFocusPriority : uint8 {
    DefaultMoveOrIdle,
    Follow_MoveOutOfWay_GoalActor,
    Follow_MoveOutOfWay_PathEnd,
    Interaction,
    IdleInteractionFocus,
    DirectMove,
    MoveIntoPositionForInteraction,
    TurnTo,
    Conversation,
    Listen,
    Speak,
    PerceptionResponse,
    UpdateTargetInCombat,
    WatchFight,
    Warning,
    WarningCrime,
    CombatBase,
    CombatMove,
    Fear,
};

