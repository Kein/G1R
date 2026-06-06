#pragma once
#include "CoreMinimal.h"
#include "AIAssessmentResponseRule.h"
#include "AIAssessmentResponseRuleList.generated.h"

USTRUCT()
struct G1R_API FAIAssessmentResponseRuleList {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FAIAssessmentResponseRule> Rules;
    
    FAIAssessmentResponseRuleList();
};

