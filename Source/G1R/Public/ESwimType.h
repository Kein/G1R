#pragma once
#include "CoreMinimal.h"
#include "ESwimType.generated.h"

UENUM(BlueprintType)
enum class ESwimType : uint8 {
    Normal,
    Diving,
    Count,
};

