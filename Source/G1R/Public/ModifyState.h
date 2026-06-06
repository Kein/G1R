#pragma once
#include "CoreMinimal.h"
#include "ModifyState.generated.h"

UENUM()
enum class ModifyState : int32 {
    Idle,
    Applied,
    Disposed,
};

