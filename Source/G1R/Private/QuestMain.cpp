#include "QuestMain.h"

UQuestMain::UQuestMain() {
    this->GenericFilter_Quests = NULL;
    this->m_SortOrder = EQuestSortOrder::LastUpdateTime_NewestFirst;
    this->m_ActiveQuestStates = 4;
    this->m_CompletedQuestStates = 24;
}

void UQuestMain::UpdateQuests() {
}

TArray<UQuest*> UQuestMain::SortQuestsCopy(const TArray<UQuest*>& _Quests, EQuestSortOrder _Order) {
    return TArray<UQuest*>();
}

void UQuestMain::SelectFilterForQuest(FGameplayTag _FallbackFilterTag, const UQuest* _Quest) {
}

TArray<UQuest*> UQuestMain::GetQuests(FGameplayTag _FilterTag) const {
    return TArray<UQuest*>();
}

FText UQuestMain::GetQuestlineTitle(FGameplayTag _FilterTag) const {
    return FText::GetEmpty();
}

FText UQuestMain::GetQuestlineDescription(FGameplayTag _FilterTag) const {
    return FText::GetEmpty();
}

TArray<UQuest*> UQuestMain::FilterQuestsByStateCopy(const TArray<UQuest*>& _Quests, int32 _StateMask) {
    return TArray<UQuest*>();
}


