#pragma once
#include "CoreMinimal.h"
#include "EDifficultyGroup.generated.h"

UENUM(BlueprintType)
enum class EDifficultyGroup : uint8 {
    Combat,
    Resources,
    Progression,
};

