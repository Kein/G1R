#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "StatsCalculatorConfiguration.generated.h"

class UGenericStat;
class UStatsCalculatorBase;

UCLASS(BlueprintType)
class G1R_API UStatsCalculatorConfiguration : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<UGenericStat>> m_GenericStats;
    
    UStatsCalculatorConfiguration();

    UFUNCTION(BlueprintCallable)
    void AddStatsGameplayTagWithArgs(const FGameplayTag& StatTag, TSubclassOf<UStatsCalculatorBase> calculatorClass, const TArray<FGameplayTag>& calculatorRequiredTags);
    
    UFUNCTION(BlueprintCallable)
    void AddStatsGameplayTag(const FGameplayTag& StatTag, TSubclassOf<UStatsCalculatorBase> calculatorClass);
    
};

