#include "ConversationTopicSet.h"
#include "Templates/SubclassOf.h"

UConversationTopicSet::UConversationTopicSet() {
}

void UConversationTopicSet::RemoveTopicsOf(FName CharacterName, FName instigatorName) {
}

UConversationTopicSet* UConversationTopicSet::NewTopicSet(UObject* Owner) {
    return NULL;
}

TArray<UConversationTopic*> UConversationTopicSet::GetAvailableUIRelevantRootTopics(const AGothicCharacter* Other) const {
    return TArray<UConversationTopic*>();
}

TArray<UConversationTopic*> UConversationTopicSet::GetAvailableSubdialogTopics(const AGothicCharacter* Other) const {
    return TArray<UConversationTopic*>();
}

TArray<UConversationTopic*> UConversationTopicSet::GetAvailableRootTopics(const AGothicCharacter* Other) const {
    return TArray<UConversationTopic*>();
}

TArray<UConversationTopic*> UConversationTopicSet::GetAvailableFollowupTopics(const AGothicCharacter* Other, const FKnowledgeSet& KnowledgesToConsider) const {
    return TArray<UConversationTopic*>();
}

TArray<UConversationTopic*> UConversationTopicSet::GetAvailableFallbackTopics(const AGothicCharacter* Other) const {
    return TArray<UConversationTopic*>();
}

UConversationTopic* UConversationTopicSet::FindTopicInstanceOfClass(TSubclassOf<UConversationTopic> TopicClass) const {
    return NULL;
}

TArray<TSubclassOf<UConversationTopic>> UConversationTopicSet::FindAllRootTopicsOf(FName CharacterName) {
    return TArray<TSubclassOf<UConversationTopic>>();
}

TArray<TSubclassOf<UConversationTopic>> UConversationTopicSet::FindAllForcedRootTopicsOf(FName CharacterName) {
    return TArray<TSubclassOf<UConversationTopic>>();
}

TArray<TSubclassOf<UConversationTopic>> UConversationTopicSet::FindAllFollowupTopicsOf(FName CharacterName) {
    return TArray<TSubclassOf<UConversationTopic>>();
}

TArray<TSubclassOf<UConversationTopic>> UConversationTopicSet::FindAllFallbackTopicsOf(FName CharacterName) {
    return TArray<TSubclassOf<UConversationTopic>>();
}

void UConversationTopicSet::AddTopicsOfIncludedCharacter(FName IncludedCharacterName, FName instigatorName, FName ThisCharacterName) {
}

void UConversationTopicSet::AddTopicsOf(FName CharacterName, FName instigatorName, FName ReplaceNameWith) {
}

void UConversationTopicSet::AddTopics(const TArray<TSubclassOf<UConversationTopic>>& Topics, FName ReplaceCharacterName) {
}

UConversationTopic* UConversationTopicSet::AddTopic(TSubclassOf<UConversationTopic> TopicClass, FName ReplaceCharacterName) {
    return NULL;
}


