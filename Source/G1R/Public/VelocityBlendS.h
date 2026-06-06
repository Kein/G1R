#pragma once
#include "CoreMinimal.h"
#include "VelocityBlendS.generated.h"

USTRUCT(BlueprintType)
struct FVelocityBlendS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float F;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float R;
    
    G1R_API FVelocityBlendS();
};

