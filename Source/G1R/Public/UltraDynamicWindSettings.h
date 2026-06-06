#pragma once
#include "CoreMinimal.h"
#include "UltraDynamicWindSettings.generated.h"

USTRUCT(BlueprintType)
struct FUltraDynamicWindSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float WindRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite)
    float MaxWindStrength;
    
    UPROPERTY(BlueprintReadWrite)
    float MaxWindSpeed;
    
    G1R_API FUltraDynamicWindSettings();
};

