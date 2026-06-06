#pragma once
#include "CoreMinimal.h"
#include "ESettingsType.generated.h"

UENUM(BlueprintType)
enum class ESettingsType : uint8 {
    Invalid,
    Bool,
    Int,
    Enum,
    Float,
    KeyMapping,
};

