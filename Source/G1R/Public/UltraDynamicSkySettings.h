#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UltraDynamicSkySettings.generated.h"

USTRUCT(BlueprintType)
struct FUltraDynamicSkySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float SunAngle;
    
    UPROPERTY(BlueprintReadWrite)
    float OverallIntensity;
    
    UPROPERTY(BlueprintReadWrite)
    float Contrast;
    
    UPROPERTY(BlueprintReadWrite)
    float Saturation;
    
    UPROPERTY(BlueprintReadWrite)
    float DirectionalBalance;
    
    UPROPERTY(BlueprintReadWrite)
    float NightBrightness;
    
    UPROPERTY(BlueprintReadWrite)
    float SkyLightIntensity;
    
    UPROPERTY(BlueprintReadWrite)
    float SkyLightTemperature;
    
    UPROPERTY(BlueprintReadWrite)
    FLinearColor SkyLightColorMultiplierDay;
    
    UPROPERTY(BlueprintReadWrite)
    FLinearColor SkyLightColorMultiplierDawn;
    
    UPROPERTY(BlueprintReadWrite)
    FLinearColor SkyLightColorMultiplierNight;
    
    G1R_API FUltraDynamicSkySettings();
};

