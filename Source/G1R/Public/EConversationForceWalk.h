#pragma once
#include "CoreMinimal.h"
#include "EConversationForceWalk.generated.h"

UENUM()
enum class EConversationForceWalk : int32 {
    None,
    LetOtherWalk,
    WalkToOther,
};

