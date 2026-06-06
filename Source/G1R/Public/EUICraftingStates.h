#pragma once
#include "CoreMinimal.h"
#include "EUICraftingStates.generated.h"

UENUM(BlueprintType)
enum class EUICraftingStates : uint8 {
    Default,
    ForgeOpened,
    ForgeStarted,
    ForgeFinished,
    AnvilStarted,
    AnvilFinished,
    BarrelStarted,
    BarrelFinished,
    ExitDefault,
    ExitInProgress,
};

