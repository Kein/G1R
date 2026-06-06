#pragma once
#include "CoreMinimal.h"
#include "EWeatherEvent.generated.h"

UENUM(BlueprintType)
enum class EWeatherEvent : uint8 {
    Sunny,
    Rain,
    Cloud,
    Snow,
    Sand,
};

