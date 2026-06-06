#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GenericData.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FGenericData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FGameplayTag, bool> m_BoolData;
    
    UPROPERTY()
    TMap<FGameplayTag, int32> m_IntData;
    
    FGenericData();
};

