#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OcclusionSamplePoint.generated.h"

USTRUCT(BlueprintType)
struct FOcclusionSamplePoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector position;
    
    UPROPERTY(EditAnywhere)
    float OcclusionValue;
    
    G1R_API FOcclusionSamplePoint();
};

