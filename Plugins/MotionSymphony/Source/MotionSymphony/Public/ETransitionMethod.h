#pragma once
#include "CoreMinimal.h"
#include "ETransitionMethod.generated.h"

UENUM(BlueprintType)
enum class ETransitionMethod : uint8 {
    None,
    Inertialization,
    Blend,
};

