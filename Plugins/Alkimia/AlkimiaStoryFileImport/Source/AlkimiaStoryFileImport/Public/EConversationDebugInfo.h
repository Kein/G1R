#pragma once
#include "CoreMinimal.h"
#include "EConversationDebugInfo.generated.h"

UENUM(BlueprintType)
enum class EConversationDebugInfo : uint8 {
    None,
    Available,
    Executing,
    Done,
    Blocked,
    Unimplemented,
};

