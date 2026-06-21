#include "GothicSavegameMigrationScript.h"
#include "Templates/SubclassOf.h"

UGothicSavegameMigrationScript::UGothicSavegameMigrationScript() {
    this->SaveGame = NULL;
    this->ApplyToVersionsAfterIncluding = EGothicSaveGameVersion::Initial;
    this->ApplyToVersionsBefore = EGothicSaveGameVersion::VersionPlusOne;
    this->Order = 0.00f;
}

void UGothicSavegameMigrationScript::SetStoryValueInt32(TSubclassOf<UGameStory> story, FName StoryValueName, int32 Value) const {
}

void UGothicSavegameMigrationScript::SetStoryValueInGameTime(TSubclassOf<UGameStory> story, FName StoryValueName, FInGameTime Value) const {
}

void UGothicSavegameMigrationScript::SetQuestState(TSubclassOf<UQuest> Quest, EQuestState State) const {
}

void UGothicSavegameMigrationScript::SetNPCDailyRoutine(FName GlobalId, TSubclassOf<UAIState_DailyRoutine> DailyRoutine) {
}

void UGothicSavegameMigrationScript::SetItemCountInPlayerInventory(TSubclassOf<UItemDefinition> ItemDefinition, int32 Count, const FString& PlayerId) {
}

void UGothicSavegameMigrationScript::SetItemCountInNPCInventory(FName GlobalId, TSubclassOf<UItemDefinition> ItemDefinition, int32 Count) {
}

bool UGothicSavegameMigrationScript::RemoveKnowledgeOfTopicFromCharacter(FName CharacterUniqueName, TSubclassOf<UConversationTopic> TopicClass) {
    return false;
}

bool UGothicSavegameMigrationScript::RemoveKnowledgeOfTextFromCharacter(FName CharacterUniqueName, const FText& Text) {
    return false;
}

bool UGothicSavegameMigrationScript::RemoveKnowledgeFromCharacter(FName CharacterUniqueName, FName Knowledge) {
    return false;
}

bool UGothicSavegameMigrationScript::Migrate_Implementation() {
    return false;
}

bool UGothicSavegameMigrationScript::IsQuestInState(TSubclassOf<UQuest> Quest, EQuestState State) const {
    return false;
}

bool UGothicSavegameMigrationScript::HasNPCDailyRoutine(FName GlobalId, TSubclassOf<UAIState_DailyRoutine> DailyRoutine) const {
    return false;
}

bool UGothicSavegameMigrationScript::HasCharacterKnowledgeOfTopic(FName CharacterUniqueName, TSubclassOf<UConversationTopic> TopicClass) const {
    return false;
}

bool UGothicSavegameMigrationScript::HasCharacterKnowledgeOfText(FName CharacterUniqueName, const FText& Text) const {
    return false;
}

bool UGothicSavegameMigrationScript::HasCharacterKnowledgeOf(FName CharacterUniqueName, FName Knowledge) const {
    return false;
}

int32 UGothicSavegameMigrationScript::GetStoryValueInt32(TSubclassOf<UGameStory> story, FName StoryValueName) const {
    return 0;
}

FInGameTime UGothicSavegameMigrationScript::GetStoryValueInGameTime(TSubclassOf<UGameStory> story, FName StoryValueName) const {
    return FInGameTime{};
}

int32 UGothicSavegameMigrationScript::GetStoryChapter(TSubclassOf<UGameStory> story) const {
    return 0;
}

int32 UGothicSavegameMigrationScript::GetItemCountInPlayerInventory(TSubclassOf<UItemDefinition> ItemDefinition, const FString& PlayerId) const {
    return 0;
}

int32 UGothicSavegameMigrationScript::GetItemCountInNPCInventory(FName GlobalId, TSubclassOf<UItemDefinition> ItemDefinition) const {
    return 0;
}

FInGameTime UGothicSavegameMigrationScript::GetInGameTimeNow() const {
    return FInGameTime{};
}

bool UGothicSavegameMigrationScript::FindGlobalIDForUniqueName(FName UniqueName, FName& OutGlobalID) const {
    return false;
}

bool UGothicSavegameMigrationScript::FindGlobalIDForCharacter(TSubclassOf<UCharacterDefinition> CharacterDefinition, FName& OutGlobalID) const {
    return false;
}


