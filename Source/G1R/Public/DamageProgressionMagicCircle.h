#pragma once
#include "CoreMinimal.h"
#include "DamageByMagicCircle.h"
#include "DamageProgressionMagicCircle.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FDamageProgressionMagicCircle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDamageByMagicCircle> m_DamageByMagicCircle;
    
    FDamageProgressionMagicCircle();
};

