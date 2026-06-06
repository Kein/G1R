#pragma once
#include "CoreMinimal.h"
#include "ECrimeAffectedEntitySource.generated.h"

UENUM(BlueprintType)
enum class ECrimeAffectedEntitySource : uint8 {
    Area,
    Item,
    Interactable,
    Event,
};

