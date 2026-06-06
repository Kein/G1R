#pragma once
#include "CoreMinimal.h"
#include "EAdaptZDivergeMode.generated.h"

UENUM(BlueprintType)
enum class EAdaptZDivergeMode : uint8 {
    AsTheCrowFlies,
    RelativeToNavGround,
    RelativeToOtherCharacter,
};

