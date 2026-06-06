#include "ConversationWidget.h"

UConversationWidget::UConversationWidget() {
    this->m_DefaultSubtitleTextStyleSet = NULL;
    this->m_LargerSubtitleTextStyleSet = NULL;
    this->TopicListContainer = NULL;
    this->TopicList = NULL;
    this->SubTopicListContainer = NULL;
    this->SubTopicList = NULL;
    this->m_TypeSpeed = 0.03f;
}






void UConversationWidget::RestoreFocus() {
}

void UConversationWidget::OnShowTopicSelection(const TArray<UConversationTopic*> TopicsToShow) {
}

void UConversationWidget::OnShowSubTopicSelection(const TArray<UConversationTopic*> SubTopicsToShow) {
}

void UConversationWidget::OnSelectionKeyUp() {
}

void UConversationWidget::OnSelectionKeyDown() {
}

void UConversationWidget::NotifyUserSelectedTopic(UConversationTopic* Topic) {
}

void UConversationWidget::NotifyUserSelectedSubTopic(UConversationTopic* Topic) {
}

void UConversationWidget::NotifyUserRequestedSkip() {
}


void UConversationWidget::GetLeftStickYAxisValue(const FKey& Key, float Delta) {
}






