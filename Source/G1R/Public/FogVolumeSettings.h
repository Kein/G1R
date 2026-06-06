#pragma once
#include "CoreMinimal.h"
#include "FogVolumeSettings.generated.h"

USTRUCT(BlueprintType)
struct FFogVolumeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float Alpha;
    
    G1R_API FFogVolumeSettings();
};

