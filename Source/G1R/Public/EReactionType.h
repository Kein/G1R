#pragma once
#include "CoreMinimal.h"
#include "EReactionType.generated.h"

UENUM(BlueprintType)
enum class EReactionType : uint8 {
    ReactToCamera,
    ReactToPlayer,
};

