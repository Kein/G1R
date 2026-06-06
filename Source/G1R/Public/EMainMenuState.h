#pragma once
#include "CoreMinimal.h"
#include "EMainMenuState.generated.h"

UENUM(BlueprintType)
enum class EMainMenuState : uint8 {
    Default,
    LoadMenu,
    SaveMenu,
    SettingsMenu,
};

