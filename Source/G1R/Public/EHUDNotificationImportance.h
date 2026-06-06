#pragma once
#include "CoreMinimal.h"
#include "EHUDNotificationImportance.generated.h"

UENUM(BlueprintType)
enum class EHUDNotificationImportance : uint8 {
    Lowest,
    Lower,
    Low,
    Medium,
    High,
    Higher,
    Highest,
};

