#pragma once
#include "CoreMinimal.h"
#include "OverrideVolumeCache.generated.h"

USTRUCT(BlueprintType)
struct FOverrideVolumeCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<float> Alphas;
    
    UPROPERTY(BlueprintReadOnly)
    float TemperatureOffset;
    
    G1R_API FOverrideVolumeCache();
};

