#pragma once
#include "CoreMinimal.h"
#include "BFGVectorDamper.generated.h"

USTRUCT(BlueprintType)
struct BFGMATH_API FBFGVectorDamper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fSmoothTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMaxSpeed;
    
    FBFGVectorDamper();
};

