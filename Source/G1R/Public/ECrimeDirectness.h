#pragma once
#include "CoreMinimal.h"
#include "ECrimeDirectness.generated.h"

UENUM(BlueprintType)
enum class ECrimeDirectness : uint8 {
    None,
    Indirect,
    Direct,
};

