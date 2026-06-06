#pragma once
#include "CoreMinimal.h"
#include "EInteractionSpotConditions.generated.h"

UENUM(BlueprintType)
enum class EInteractionSpotConditions : uint8 {
    Any,
    IsUsableByCharacter,
    IsNotUsableByCharacter,
};

