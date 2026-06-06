#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "GothicWeatherFogPostProcessSettings.generated.h"

UCLASS(BlueprintType)
class G1R_API UGothicWeatherFogPostProcessSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector4 GlobalContrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SkyLightLeaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SunVolumetricScatteringIntensity;
    
    UGothicWeatherFogPostProcessSettings();

};

