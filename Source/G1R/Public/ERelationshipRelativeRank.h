#pragma once
#include "CoreMinimal.h"
#include "ERelationshipRelativeRank.generated.h"

UENUM(BlueprintType)
enum class ERelationshipRelativeRank : uint8 {
    Unknown,
    Scum,
    LowerThanMe,
    Same,
    HigherThanMe,
    Boss,
    Count,
};

