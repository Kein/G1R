#pragma once
#include "CoreMinimal.h"
#include "EPickpocketDifficultyType.generated.h"

UENUM(BlueprintType)
enum class EPickpocketDifficultyType : uint8 {
    None,
    VeryEasy,
    Easy,
    Risky,
    Hard,
    VeryHard,
    Impossible,
};

