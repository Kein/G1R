#pragma once
#include "CoreMinimal.h"
#include "ESpawningRequestPrioriy.generated.h"

UENUM(BlueprintType)
enum class ESpawningRequestPrioriy : uint8 {
    Normal,
    Mandatory,
};

