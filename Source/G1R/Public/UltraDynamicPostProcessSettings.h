#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UltraDynamicPostProcessSettings.generated.h"

USTRUCT(BlueprintType)
struct FUltraDynamicPostProcessSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector4 GlobalContrast;
    
    UPROPERTY(BlueprintReadWrite)
    float SkyLightLeaking;
    
    UPROPERTY(BlueprintReadWrite)
    float SunVolumetricScattering;
    
    G1R_API FUltraDynamicPostProcessSettings();
};

