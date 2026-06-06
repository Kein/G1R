#pragma once
#include "CoreMinimal.h"
#include "EConversationPresetMonologState.generated.h"

UENUM(BlueprintType)
enum class EConversationPresetMonologState : uint8 {
    Any,
    DuringMonolog,
    OutsideOfMonolog,
};

