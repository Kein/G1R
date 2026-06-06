#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "AIAssessmentResponseRule.h"
#include "AIAssessmentResponseRules.h"
#include "FAIAssessmentResponseRulesMixins.generated.h"

UCLASS(BlueprintType)
class G1R_API UFAIAssessmentResponseRulesMixins : public UObject {
    GENERATED_BODY()
public:
    UFAIAssessmentResponseRulesMixins();

    UFUNCTION(BlueprintCallable)
    static void AddPreconfigured(FAIAssessmentResponseRules& This, const FGameplayTag& Tag, const FAIAssessmentResponseRule& Rule);
    
    UFUNCTION(BlueprintCallable)
    static FAIAssessmentResponseRule Add(FAIAssessmentResponseRules& This, const FGameplayTag& Tag);
    
};

