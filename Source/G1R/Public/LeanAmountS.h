#pragma once
#include "CoreMinimal.h"
#include "LeanAmountS.generated.h"

USTRUCT(BlueprintType)
struct FLeanAmountS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FB;
    
    G1R_API FLeanAmountS();
};

