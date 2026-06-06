#include "QuestDetailsWidget.h"

UQuestDetailsWidget::UQuestDetailsWidget() {
    this->m_SortOrder = EQuestSortOrder::LastUpdateTime_NewestFirst;
    this->m_StatesToShow = 28;
}

TArray<UQuest*> UQuestDetailsWidget::GetObjectives(const UQuest* _Quest) const {
    return TArray<UQuest*>();
}


