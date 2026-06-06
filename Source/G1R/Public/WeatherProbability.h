#pragma once
#include "CoreMinimal.h"
#include "EWeather.h"
#include "WeatherProbability.generated.h"

USTRUCT(BlueprintType)
struct FWeatherProbability {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EWeather, float> Probabilities;
    
    G1R_API FWeatherProbability();
};

