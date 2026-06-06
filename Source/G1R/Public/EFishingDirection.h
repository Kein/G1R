#pragma once
#include "CoreMinimal.h"
#include "EFishingDirection.generated.h"

UENUM(BlueprintType)
enum class EFishingDirection : uint8 {
    None,
    Front,
    Right,
    Left,
    Back,
};

