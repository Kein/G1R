#pragma once
#include "CoreMinimal.h"
#include "EWeather.h"
#include "StoryActionRegionTrait.h"
#include "WeatherModifierTrait.generated.h"

UCLASS(EditInlineNew)
class G1R_API UWeatherModifierTrait : public UStoryActionRegionTrait {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool bChangeWeatherInstant;
    
    UPROPERTY(EditAnywhere)
    bool bHasDuration;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UPROPERTY(EditAnywhere)
    EWeather Weather;
    
    UPROPERTY(EditAnywhere)
    TArray<EWeather> BlockedWeathers;
    
public:
    UWeatherModifierTrait();

};

