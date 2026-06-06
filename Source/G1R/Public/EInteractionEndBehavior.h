#pragma once
#include "CoreMinimal.h"
#include "EInteractionEndBehavior.generated.h"

UENUM(BlueprintType)
enum class EInteractionEndBehavior : uint8 {
    Normal,
    Quick,
    Instant,
};

