#pragma once
#include "CoreMinimal.h"
#include "ERangedWeaponState.generated.h"

UENUM(BlueprintType)
enum class ERangedWeaponState : uint8 {
    Idle,
    Ready,
    Aim,
};

