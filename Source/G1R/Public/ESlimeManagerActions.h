#pragma once
#include "CoreMinimal.h"
#include "ESlimeManagerActions.generated.h"

UENUM(BlueprintType)
enum class ESlimeManagerActions : uint8 {
    Disable,
    Enable,
    StartSlimeBreakEffect,
    Sync,
    StartFadeIn,
};

