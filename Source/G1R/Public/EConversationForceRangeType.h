#pragma once
#include "CoreMinimal.h"
#include "EConversationForceRangeType.generated.h"

UENUM(BlueprintType)
enum class EConversationForceRangeType : uint8 {
    DefaultRange,
    CloseRange,
    FarRange,
    SurroundingRange,
};

