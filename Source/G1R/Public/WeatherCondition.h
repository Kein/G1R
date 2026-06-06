#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EWeather.h"
#include "WeatherCondition.generated.h"

UCLASS(Abstract)
class G1R_API UWeatherCondition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bAllWeather;
    
    UPROPERTY()
    TArray<EWeather> Weathers;
    
    UWeatherCondition();

};

