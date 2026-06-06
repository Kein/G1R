#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EWeather.h"
#include "GothicWeatherSettings.generated.h"

UCLASS(BlueprintType)
class G1R_API UGothicWeatherSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EWeather WeatherType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CloudCoverage;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Rain;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Snow;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ThunderLightning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WindIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float GothicWindIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Fog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseFogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float LightsVolumetricFogMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float ExponentialFogStartingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float VolumetricFogStartingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Dust;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float SunVolumetricScatteringIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaterialWetness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaterialSnowCoverage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaterialDustCoverage;
    
    UGothicWeatherSettings();

};

