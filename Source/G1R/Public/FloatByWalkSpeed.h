#pragma once
#include "CoreMinimal.h"
#include "EWalkSpeed.h"
#include "FloatByWalkSpeed.generated.h"

USTRUCT(BlueprintType)
struct FFloatByWalkSpeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EWalkSpeed, float> m_valuesByWalkSpeed;
    
    G1R_API FFloatByWalkSpeed();
};

