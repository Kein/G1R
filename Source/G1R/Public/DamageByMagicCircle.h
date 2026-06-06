#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DamageByMagicCircle.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FDamageByMagicCircle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_CircleTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_Damage;
    
    FDamageByMagicCircle();
};

