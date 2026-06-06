#pragma once
#include "CoreMinimal.h"
#include "ERagdollState.generated.h"

UENUM(BlueprintType)
enum class ERagdollState : uint8 {
    None,
    WaitingToStart,
    Running,
    WaitingToEnd,
};

