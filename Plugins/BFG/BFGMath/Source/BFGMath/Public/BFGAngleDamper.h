#pragma once
#include "CoreMinimal.h"
#include "BFGAngleDamper.generated.h"

USTRUCT(BlueprintType)
struct BFGMATH_API FBFGAngleDamper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fSmoothTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_fMaxSpeed;
    
    FBFGAngleDamper();
};

