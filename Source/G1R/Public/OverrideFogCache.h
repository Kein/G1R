#pragma once
#include "CoreMinimal.h"
#include "FogVolumeSettings.h"
#include "OverrideFogCache.generated.h"

USTRUCT(BlueprintType)
struct FOverrideFogCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<FFogVolumeSettings> FogSettingsWithAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float FogAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float WeatherAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float ExtraFogStart;
    
    UPROPERTY(BlueprintReadOnly)
    bool ShouldStopRain;
    
    G1R_API FOverrideFogCache();
};

