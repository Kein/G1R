#pragma once
#include "CoreMinimal.h"
#include "EInteractionSpotEntryDirection.generated.h"

UENUM(BlueprintType)
enum class EInteractionSpotEntryDirection : uint8 {
    None,
    Front,
    Back,
    Left,
    Right,
    Count,
};

