#pragma once
#include "CoreMinimal.h"
#include "EComboTiming.generated.h"

UENUM(BlueprintType)
enum class EComboTiming : uint8 {
    None,
    ComboWindow,
    ResetStates,
};

