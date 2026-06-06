#pragma once
#include "CoreMinimal.h"
#include "EOpenObjectState.generated.h"

UENUM(BlueprintType)
enum class EOpenObjectState : uint8 {
    None,
    GoingToPosition,
    PlayingIntroAnimation,
    Unlocking,
    Unlocked,
    Opened,
    Closed,
};

