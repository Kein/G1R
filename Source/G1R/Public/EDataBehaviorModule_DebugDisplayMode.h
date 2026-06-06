#pragma once
#include "CoreMinimal.h"
#include "EDataBehaviorModule_DebugDisplayMode.generated.h"

UENUM(BlueprintType)
enum class EDataBehaviorModule_DebugDisplayMode : uint8 {
    Behavior,
    DataModule,
    Lessons,
    Pathing,
    Input,
    Count,
};

