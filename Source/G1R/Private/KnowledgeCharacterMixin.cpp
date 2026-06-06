#include "KnowledgeCharacterMixin.h"

UKnowledgeCharacterMixin::UKnowledgeCharacterMixin() {
}

FName UKnowledgeCharacterMixin::TextToKnowledge(const FText& Text, const FString& Prefix) {
    return NAME_None;
}

void UKnowledgeCharacterMixin::RememberVoiceline(AGothicCharacterState* This, const FText& Voiceline) {
}

bool UKnowledgeCharacterMixin::RemembersVoiceline(const AGothicCharacterState* This, const FText& Voiceline) {
    return false;
}

bool UKnowledgeCharacterMixin::Remembers(const AGothicCharacterState* This, FName Knowledge) {
    return false;
}

void UKnowledgeCharacterMixin::Remember(AGothicCharacterState* This, FName Knowledge) {
}


