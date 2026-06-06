#pragma once
#include "CoreMinimal.h"
#include "EDayTimeType.generated.h"

UENUM(BlueprintType)
enum class EDayTimeType : uint8 {
    Morning,
    Noon,
    Afternoon,
    Evening,
    Night,
};

