#pragma once
#include "CoreMinimal.h"
#include "EInteractionSpotOccupation.generated.h"

UENUM(BlueprintType)
enum class EInteractionSpotOccupation : uint8 {
    Any,
    Free,
    ClaimedOrInUse,
    InUse,
};

