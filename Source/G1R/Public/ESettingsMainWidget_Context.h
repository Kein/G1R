#pragma once
#include "CoreMinimal.h"
#include "ESettingsMainWidget_Context.generated.h"

UENUM(BlueprintType)
enum class ESettingsMainWidget_Context : uint8 {
    None,
    MainMenu,
    InGame,
};

