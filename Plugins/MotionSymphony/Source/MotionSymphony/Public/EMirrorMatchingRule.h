#pragma once
#include "CoreMinimal.h"
#include "EMirrorMatchingRule.generated.h"

UENUM(BlueprintType)
enum class EMirrorMatchingRule : uint8 {
    Never,
    Always,
    ExactMatch,
    HeadMatch,
    TailMatch,
    WordMatch,
};

