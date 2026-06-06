#pragma once
#include "CoreMinimal.h"
#include "DynamicMontage.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FDynamicMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BlendOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayRate;
    
    G1R_API FDynamicMontage();
};

