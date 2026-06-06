#pragma once
#include "CoreMinimal.h"
#include "EHUDNotificationGroup.generated.h"

UENUM(BlueprintType)
enum class EHUDNotificationGroup : uint8 {
    None,
    Inventory,
    Character,
    Quest,
};

