#pragma once
#include "CoreMinimal.h"
#include "EConversationCameraFocusTarget.generated.h"

UENUM(BlueprintType)
enum class EConversationCameraFocusTarget : uint8 {
    None,
    Middle,
    Speaker,
    Listener,
};

