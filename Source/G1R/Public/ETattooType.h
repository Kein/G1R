#pragma once
#include "CoreMinimal.h"
#include "ETattooType.generated.h"

UENUM(BlueprintType)
enum class ETattooType : uint8 {
    Head,
    Torso,
    Legs,
    None,
};

