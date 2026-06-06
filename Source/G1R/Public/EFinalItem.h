#pragma once
#include "CoreMinimal.h"
#include "EFinalItem.generated.h"

UENUM(BlueprintType)
enum class EFinalItem : uint8 {
    NonSpawn,
    SpawnAndStore,
    Spawn,
};

