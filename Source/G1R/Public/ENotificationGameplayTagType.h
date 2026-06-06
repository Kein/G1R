#pragma once
#include "CoreMinimal.h"
#include "ENotificationGameplayTagType.generated.h"

UENUM(BlueprintType)
enum class ENotificationGameplayTagType : uint8 {
    ExactTag,
    TagAndAllChildTags,
    OnlyLeafChildTags,
};

