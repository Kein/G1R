#pragma once
#include "CoreMinimal.h"
#include "ENPCSpawnState.generated.h"

UENUM(BlueprintType)
enum class ENPCSpawnState : uint8 {
    None,
    SimulationOnly,
    PreloadComplete,
    WaitingForResourcesToLoad,
    WaitingForLevelStreaming,
    WaitingForMutable,
    WaitingForNavigation,
    WaitingForBudgetToSpawnActor,
    SpawnedAndHiddenForOneFrame,
    SpawnedAndVisible,
};

