#pragma once
#include "CoreMinimal.h"
#include "EConversationCameraFocusMode.generated.h"

UENUM(BlueprintType)
enum class EConversationCameraFocusMode : uint8 {
    Default,
    Middle,
    Speaker,
    Listener,
    ReferencePoint,
    Manual,
};

