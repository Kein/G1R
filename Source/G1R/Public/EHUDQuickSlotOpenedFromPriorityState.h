#pragma once
#include "CoreMinimal.h"
#include "EHUDQuickSlotOpenedFromPriorityState.generated.h"

UENUM(BlueprintType)
enum EHUDQuickSlotOpenedFromPriorityState {
    Default,
    HotkeyBinding,
    Aiming,
    Transform,
    Inventory,
};

