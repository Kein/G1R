#pragma once
#include "CoreMinimal.h"
#include "EWeather.generated.h"

UENUM(BlueprintType)
enum class EWeather : uint8 {
    Sunny,
    Rain_Level1,
    Rain_Level2,
    Rain_Level3,
    Cloudy,
    Count,
};

