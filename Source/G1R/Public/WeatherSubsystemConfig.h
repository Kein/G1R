#pragma once
#include "CoreMinimal.h"
#include "ClockTime.h"
#include "EWeather.h"
#include "GothicBaseConfig.h"
#include "WeatherSubsystemConfig.generated.h"

class UMaterialParameterCollection;

UCLASS(BlueprintType, Const, EditInlineNew)
class G1R_API UWeatherSubsystemConfig : public UGothicBaseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UMaterialParameterCollection> MaterialParameterCollection;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EWeather, float> WindForce;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WindForceVariability;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WindForceChangeProbability;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxCharacterWetnessWhenSunny;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxCharacterWetnessWhenRain;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WetnessIncreaseFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WetnessDecreaseFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinLightingSpawnTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxLightingSpawnTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InitialThunderBias;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FClockTime StaticSkyTime;
    
public:
    UWeatherSubsystemConfig();

};

