#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AssessmentBits.h"
#include "AIAssessmentResponseRule.generated.h"

class UAIEventResponse;

USTRUCT(BlueprintType)
struct FAIAssessmentResponseRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAssessmentBits MaskRequiredTrueConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAssessmentBits MaskRequiredFalseConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer RequireEventMustHaveAllExtraTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer RequireEventMustNotHaveAnyExtraTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UAIEventResponse*> Responses;
    
    G1R_API FAIAssessmentResponseRule();
};

