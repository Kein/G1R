#pragma once
#include "CoreMinimal.h"
#include "EDailyRoutineTeleportMode.generated.h"

UENUM()
enum class EDailyRoutineTeleportMode : int32 {
    Never,
    WhenOutOfBounds,
};

