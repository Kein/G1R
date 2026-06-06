#pragma once
#include "CoreMinimal.h"
#include "ESpawningRequestPersistenceType.generated.h"

UENUM(BlueprintType)
enum class ESpawningRequestPersistenceType : uint8 {
    None,
    Persistent,
    Released,
};

