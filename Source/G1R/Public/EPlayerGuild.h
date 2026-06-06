#pragma once
#include "CoreMinimal.h"
#include "EPlayerGuild.generated.h"

UENUM(BlueprintType)
enum class EPlayerGuild : uint8 {
    None,
    Templars,
    Novices,
    MagesWater,
    Mercenaries,
    Rogues,
    MagesFire,
    Guards,
    Shadows,
};

