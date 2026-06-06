#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BiomeWeatherProbabilities.h"
#include "EBiome.h"
#include "EWeather.h"
#include "FBiomeWeatherProbabilities.generated.h"

UCLASS()
class UFBiomeWeatherProbabilities : public UObject {
    GENERATED_BODY()
public:
    UFBiomeWeatherProbabilities();

    UFUNCTION()
    static void AddWeatherProbabilityForBiome(FBiomeWeatherProbabilities& BiomeProbabilities, EBiome Biome, EWeather Weather, float Probability);
    
};

