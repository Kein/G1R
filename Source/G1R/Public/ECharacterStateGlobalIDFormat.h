#pragma once
#include "CoreMinimal.h"
#include "ECharacterStateGlobalIDFormat.generated.h"

UENUM(BlueprintType)
enum class ECharacterStateGlobalIDFormat : uint8 {
    Unknown,
    UniqueName,
    SpawnedBy,
    SpawnIndex = 4,
    SpawnLocation = 8,
    Default = 7,
    Legacy = 15,
};

