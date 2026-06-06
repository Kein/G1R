#pragma once
#include "CoreMinimal.h"
#include "EHUDNotificationVisibilityState.generated.h"

UENUM(BlueprintType)
enum class EHUDNotificationVisibilityState : uint8 {
    Hidden,
    Visible,
    Hiding,
    ForceHidden,
};

