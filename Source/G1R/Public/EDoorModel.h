#pragma once
#include "CoreMinimal.h"
#include "EDoorModel.generated.h"

UENUM(BlueprintType)
enum class EDoorModel : uint8 {
    Normal,
    Sewer,
    Puzzle,
};

