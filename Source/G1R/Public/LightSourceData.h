#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LightSourceData.generated.h"

USTRUCT(BlueprintType)
struct FLightSourceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite)
    FVector position;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Direction;
    
    G1R_API FLightSourceData();
};

