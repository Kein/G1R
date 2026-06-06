#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BiomeWeatherProbabilities.h"
#include "BiomeWeatherProbabilitiesDataTable.generated.h"

UCLASS(BlueprintType)
class G1R_API UBiomeWeatherProbabilitiesDataTable : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBiomeWeatherProbabilities BiomeWeather;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UnselectedWeatherModifier;
    
    UBiomeWeatherProbabilitiesDataTable();

};

