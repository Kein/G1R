#pragma once
#include "CoreMinimal.h"
#include "ESpellTargetType.generated.h"

UENUM(BlueprintType)
enum class ESpellTargetType : uint8 {
    None,
    Focused,
    Dynamic,
    Area,
    Caster,
    FocusedOrCaster,
    CustomTarget,
};

