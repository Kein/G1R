#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AIAssessmentResponseRuleList.h"
#include "AIAssessmentResponseRules.generated.h"

USTRUCT(BlueprintType)
struct G1R_API FAIAssessmentResponseRules {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FGameplayTag, FAIAssessmentResponseRuleList> Lists;
    
    FAIAssessmentResponseRules();
};

