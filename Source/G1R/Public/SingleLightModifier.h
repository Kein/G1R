#pragma once
#include "CoreMinimal.h"
#include "SingleLightModifier.generated.h"

USTRUCT(BlueprintType)
struct FSingleLightModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxThreshold;
    
    G1R_API FSingleLightModifier();
};

