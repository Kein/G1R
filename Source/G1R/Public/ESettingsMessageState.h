#pragma once
#include "CoreMinimal.h"
#include "ESettingsMessageState.generated.h"

UENUM(BlueprintType)
enum class ESettingsMessageState : uint8 {
    Hidden,
    FadingIn,
    Shown,
    FadingOut,
};

