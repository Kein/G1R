#pragma once
#include "CoreMinimal.h"
#include "EWallClimbLinkStatus.generated.h"

UENUM(BlueprintType)
enum class EWallClimbLinkStatus : uint8 {
    Errorous,
    NormalClimb,
    JumpAndClimbDown,
    JumpAndClimbUp,
    ClimbToDrop_TopToBottom,
    ClimbToDrop_BottomSideways,
};

