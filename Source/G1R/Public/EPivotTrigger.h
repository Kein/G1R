#pragma once
#include "CoreMinimal.h"
#include "EPivotTrigger.generated.h"

UENUM(BlueprintType)
enum class EPivotTrigger : uint8 {
    None,
    Left_90,
    Right_90,
    Left_135,
    Right_135,
    Left_180,
    Right_180,
};

