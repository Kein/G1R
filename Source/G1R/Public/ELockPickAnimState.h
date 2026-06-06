#pragma once
#include "CoreMinimal.h"
#include "ELockPickAnimState.generated.h"

UENUM(BlueprintType)
enum class ELockPickAnimState : uint8 {
    Inactive,
    Idle,
    LockPicking,
    Success,
    Failure,
};

