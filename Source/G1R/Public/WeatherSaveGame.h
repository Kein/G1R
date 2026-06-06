#pragma once
#include "CoreMinimal.h"
#include "EWeather.h"
#include "WeatherSaveGame.generated.h"

USTRUCT(BlueprintType)
struct FWeatherSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EWeather CurrentWeather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EWeather> DailyWeathers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EWeather, float> WeatherModifiers;
    
    G1R_API FWeatherSaveGame();
};

