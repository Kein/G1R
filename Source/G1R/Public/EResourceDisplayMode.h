#pragma once
#include "CoreMinimal.h"
#include "EResourceDisplayMode.generated.h"

UENUM(BlueprintType)
enum class EResourceDisplayMode : uint8 {
    Normal,
    Short,
    Count,
};

