#pragma once
#include "CoreMinimal.h"
#include "EBloodType.generated.h"

UENUM(BlueprintType)
enum class EBloodType : uint8 {
    Unknown,
    Red,
    Blue,
    Purple,
    Yellow,
    Black,
    None,
    Light,
    Green,
};

