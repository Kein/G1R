#include "StatMainWidget.h"

UStatMainWidget::UStatMainWidget() {
    this->m_Orientation = Orient_Vertical;
    this->m_InitialRepeatDelay = 0.50f;
    this->m_RepeatDelay = 0.10f;
    this->m_SelectedEntryWidget = NULL;
}

void UStatMainWidget::UpdateLayout(UPanelWidget* _PanelWidget) {
}

void UStatMainWidget::UpdateAllStatWidgets() {
}

void UStatMainWidget::StopMoveSelection() {
}

void UStatMainWidget::StartMoveSelection(const FVector2D& _Direction) {
}

void UStatMainWidget::SelectSkill(FGameplayTag _SkillTag) {
}

void UStatMainWidget::SelectFirstEntry() {
}

void UStatMainWidget::SelectEntryAt(int32 _Index) {
}

void UStatMainWidget::SelectEntry(UStatEntryWidget* _EntryWidget, bool _ScrollIntoView) {
}

void UStatMainWidget::SelectAttribute(const FGameplayAttribute& _Attribute) {
}


void UStatMainWidget::MoveSelection(const FVector2D& _Direction) {
}

void UStatMainWidget::GetScrollFluffVisibilities(const UScrollBox* _ScrollBox, ESlateVisibility& _VisibilityTop, ESlateVisibility& _VisibilityBottom) const {
}

void UStatMainWidget::EnableInput() {
}

void UStatMainWidget::DisableInput() {
}

void UStatMainWidget::ClearSelection() {
}


