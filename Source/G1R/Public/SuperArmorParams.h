#pragma once
#include "CoreMinimal.h"
#include "SuperArmorParams.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FSuperArmorParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_ImmunityAfterHitStandardSc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_StartRegenerateSc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_HpRegenerateTick;
    
    FSuperArmorParams();
};

