#pragma once
#include "CoreMinimal.h"
#include "EMusicMode.generated.h"

UENUM(BlueprintType)
enum class EMusicMode : uint8 {
    Menu,
    Game,
    Death,
    Credits,
    Cutscene,
    BossFight,
};

