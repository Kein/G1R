#pragma once
#include "CoreMinimal.h"
#include "EMapLayerFilterListState.generated.h"

UENUM(BlueprintType)
enum class EMapLayerFilterListState : uint8 {
    Enabled,
    Disabled,
    Collapsed,
};

