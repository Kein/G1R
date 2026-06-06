#pragma once
#include "CoreMinimal.h"
#include "ENPCSpawnMode.generated.h"

UENUM(BlueprintType)
enum class ENPCSpawnMode : uint8 {
    None,
    PreloadOnly,
    SpawnAfterEverythingIsLoaded,
    SpawnViaBlockingLoad,
};

