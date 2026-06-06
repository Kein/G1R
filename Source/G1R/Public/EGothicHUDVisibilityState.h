#pragma once
#include "CoreMinimal.h"
#include "EGothicHUDVisibilityState.generated.h"

UENUM(BlueprintType)
enum class EGothicHUDVisibilityState : uint8 {
    Empty,
    CompletelyOn,
    DefaultGameplay,
    DefaultTransform,
    DefaultCombat,
    ManagementMenu,
    DefaultMenu,
    DefaultConversation,
    GameOver,
    LockPick,
    DefaultCinematic,
    CompletelyOff,
};

