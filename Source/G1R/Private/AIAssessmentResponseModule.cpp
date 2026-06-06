#include "AIAssessmentResponseModule.h"

UAIAssessmentResponseModule::UAIAssessmentResponseModule() {
}

bool UAIAssessmentResponseModule::IsApplicableToCharacter(const FGameplayTagContainer& CharacterOwnedTags) const {
    return false;
}

FAssessmentBits UAIAssessmentResponseModule::GatherRequiredConditionBits(const FGameplayTag& EventTag, const FGameplayTagContainer& CharacterOwnedTags, const FGameplayTagContainer& ExtraEventTags) const {
    return FAssessmentBits{};
}

FAssessmentBits UAIAssessmentResponseModule::EvaluateConditionBits(UGameplayAbility_CharacterAI* AI, const FAssessmentBits& RequestedConditionBits, const FGameplayTag& EventTag, const FRememberedPerception& ForPerception) {
    return FAssessmentBits{};
}


