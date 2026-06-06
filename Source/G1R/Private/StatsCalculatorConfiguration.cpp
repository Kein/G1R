#include "StatsCalculatorConfiguration.h"
#include "Templates/SubclassOf.h"

UStatsCalculatorConfiguration::UStatsCalculatorConfiguration() {
}

void UStatsCalculatorConfiguration::AddStatsGameplayTagWithArgs(const FGameplayTag& StatTag, TSubclassOf<UStatsCalculatorBase> calculatorClass, const TArray<FGameplayTag>& calculatorRequiredTags) {
}

void UStatsCalculatorConfiguration::AddStatsGameplayTag(const FGameplayTag& StatTag, TSubclassOf<UStatsCalculatorBase> calculatorClass) {
}


