#pragma once
#include "CoreMinimal.h"
#include "EBiome.h"
#include "WeatherProbability.h"
#include "BiomeWeatherProbabilities.generated.h"

USTRUCT(BlueprintType)
struct FBiomeWeatherProbabilities {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<EBiome, FWeatherProbability> WeatherProbabilities;
    
    G1R_API FBiomeWeatherProbabilities();
};

