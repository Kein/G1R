#pragma once
#include "CoreMinimal.h"
#include "EComboQuality.generated.h"

UENUM(BlueprintType)
enum class EComboQuality : uint8 {
    None,
    Buffer,
    Wrong_Direction,
    Too_Soon,
    Reset_States,
    Great,
    Almost,
    Ok,
};

