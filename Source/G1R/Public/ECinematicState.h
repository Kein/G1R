#pragma once
#include "CoreMinimal.h"
#include "ECinematicState.generated.h"

UENUM(BlueprintType)
enum class ECinematicState : uint8 {
    None,
    Initializing,
    Loading,
    Playing,
    Unloading,
    DeInitializing,
};

