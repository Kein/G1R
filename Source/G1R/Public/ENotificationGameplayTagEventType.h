#pragma once
#include "CoreMinimal.h"
#include "ENotificationGameplayTagEventType.generated.h"

UENUM(BlueprintType)
enum class ENotificationGameplayTagEventType : uint8 {
    New,
    Removed,
};

