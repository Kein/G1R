#pragma once
#include "CoreMinimal.h"
#include "EFishingState.generated.h"

UENUM(BlueprintType)
enum class EFishingState : uint8 {
    Idle,
    Aiming,
    Fishing,
};

