#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LightConfig.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FLightConfig {
    GENERATED_BODY()
public:
    UPROPERTY()
    FLinearColor Color;
    
    UPROPERTY()
    float Intensity;
    
    UPROPERTY()
    float VolumetricScattering;
    
    UPROPERTY()
    UMaterialInterface* LightFunctionMaterial;
    
    G1R_API FLightConfig();
};

