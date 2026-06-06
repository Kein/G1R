#pragma once
#include "CoreMinimal.h"
#include "FreezeParams.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FFreezeParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_CustomTimeDilation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_FreezeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_BlendOutDuration;
    
    FFreezeParams();
};

