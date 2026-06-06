#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AIAssessmentResponseRules.h"
#include "AssessmentBits.h"
#include "RememberedPerception.h"
#include "Templates/SubclassOf.h"
#include "AIAssessmentResponseModule.generated.h"

class UAIAssessmentResponseModule;
class UGameplayAbility_CharacterAI;

UCLASS(BlueprintType)
class G1R_API UAIAssessmentResponseModule : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer ModuleCategoryTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer RequiredOwnedTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer RequireAnyOwnedTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer BlockIfHasAnyOwnedTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer RequireAssessedToHaveAllOwnedTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer RequireAssessedToHaveAnyOwnedTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer BlockIfAssessedHasAnyOwnedTags;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer RequirePursueCrimesOnAssessedCharacter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer RequirePursueCrimesOnAssessedInstigator;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer RequireNotPursueCrimesOnAssessedCharacter;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayTagContainer RequireNotPursueCrimesOnAssessedInstigator;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<UAIAssessmentResponseModule>> SubModules;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FAIAssessmentResponseRules Rules;
    
    UAIAssessmentResponseModule();

    UFUNCTION(BlueprintPure)
    bool IsApplicableToCharacter(const FGameplayTagContainer& CharacterOwnedTags) const;
    
    UFUNCTION(BlueprintPure)
    FAssessmentBits GatherRequiredConditionBits(const FGameplayTag& EventTag, const FGameplayTagContainer& CharacterOwnedTags, const FGameplayTagContainer& ExtraEventTags) const;
    
    UFUNCTION()
    static FAssessmentBits EvaluateConditionBits(UGameplayAbility_CharacterAI* AI, const FAssessmentBits& RequestedConditionBits, const FGameplayTag& EventTag, const FRememberedPerception& ForPerception);
    
};

