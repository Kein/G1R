#pragma once
#include "CoreMinimal.h"
#include "EInventoryFilterVisibility.generated.h"

UENUM(BlueprintType)
enum class EInventoryFilterVisibility : uint8 {
    ShowAll,
    DisableEmpty,
    HideEmpty,
};

