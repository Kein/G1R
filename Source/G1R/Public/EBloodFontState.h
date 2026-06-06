#pragma once
#include "CoreMinimal.h"
#include "EBloodFontState.generated.h"

UENUM(BlueprintType)
enum class EBloodFontState : uint8 {
    WaitToStart,
    WaitToPoolFull,
    WaitForBloodStatueFull,
};

