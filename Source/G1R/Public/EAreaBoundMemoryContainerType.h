#pragma once
#include "CoreMinimal.h"
#include "EAreaBoundMemoryContainerType.generated.h"

UENUM(BlueprintType)
enum class EAreaBoundMemoryContainerType : uint8 {
    SubGuild,
    CampGuild,
    GeneralLocation,
    MAX,
};

