#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GenericStat.generated.h"

UCLASS(BlueprintType)
class G1R_API UGenericStat : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName m_StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_StatsTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> m_StatsArgs;
    
    UGenericStat();

};

