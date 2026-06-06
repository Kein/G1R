#pragma once
#include "CoreMinimal.h"
#include "ECinematicVisibilityMode.generated.h"

UENUM(BlueprintType)
enum ECinematicVisibilityMode {
    ShowAndBlockPlayerInput,
    ShowAndNotBlockPlayerInput,
    Hidden,
};

