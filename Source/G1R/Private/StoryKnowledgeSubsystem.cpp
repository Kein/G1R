#include "StoryKnowledgeSubsystem.h"

UStoryKnowledgeSubsystem::UStoryKnowledgeSubsystem() {
}

void UStoryKnowledgeSubsystem::Reset() {
}

int32 UStoryKnowledgeSubsystem::RemoveKnowledgeSetFromCharacter(FName CharacterName, const FKnowledgeSet& Set) {
    return 0;
}

bool UStoryKnowledgeSubsystem::RemoveKnowledgeFromCharacter(FName CharacterName, FName Knowledge) {
    return false;
}

void UStoryKnowledgeSubsystem::RemoveCharacter(FName CharacterName) {
}

void UStoryKnowledgeSubsystem::RemoveAllKnowledgeFromCharacter(FName CharacterName) {
}

bool UStoryKnowledgeSubsystem::HasCharacterKnowledge(FName CharacterName, FName Knowledge) const {
    return false;
}

FKnowledgeSet UStoryKnowledgeSubsystem::GetKnowledgeOfCharacter(FName CharacterName) const {
    return FKnowledgeSet{};
}

void UStoryKnowledgeSubsystem::AddKnowledgeToCharacter(FName CharacterName, const FName& Knowledge) {
}

void UStoryKnowledgeSubsystem::AddKnowledgeSetToCharacter(FName CharacterName, const FKnowledgeSet& KnowledgeSet) {
}


