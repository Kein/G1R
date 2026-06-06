#pragma once
#include "CoreMinimal.h"
#include "EConversationCameraLoopMode.generated.h"

UENUM(BlueprintType)
enum class EConversationCameraLoopMode : uint8 {
    None,
    Repeat,
    WindBack,
};

