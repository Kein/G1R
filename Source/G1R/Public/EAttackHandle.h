#pragma once
#include "CoreMinimal.h"
#include "EAttackHandle.generated.h"

UENUM(BlueprintType)
enum class EAttackHandle : uint8 {
    None,
    RightHand,
    LeftHand,
    BothHands,
};

