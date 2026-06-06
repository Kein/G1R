#pragma once
#include "CoreMinimal.h"
#include "EMSFootLockState.generated.h"

UENUM(BlueprintType)
enum class EMSFootLockState : uint8 {
    Unlocked,
    Locked,
    TimeLocked,
};

