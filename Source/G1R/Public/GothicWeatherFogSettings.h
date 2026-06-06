#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "GothicWeatherFogSettings.generated.h"

UCLASS(BlueprintType)
class G1R_API UGothicWeatherFogSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Fog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BaseFogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FogHeightFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor FogInscatteringColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LightsVolumetricFogMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExponentialFogStartingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VolumetricFogStartingDistance;
    
    UGothicWeatherFogSettings();

};

