#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HitCueData.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FHitCueData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_DefaultHitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FGameplayTag, FGameplayTag> m_HitCueDataBySpecie;
    
    FHitCueData();
};

