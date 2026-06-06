#include "TabSelectorWidget.h"

UTabSelectorWidget::UTabSelectorWidget() {
    this->InputHint_NextTab = NULL;
    this->InputHint_PreviousTab = NULL;
    this->m_SelectedTabIndex = 0;
    this->m_StartWithInputEnabled = true;
}


void UTabSelectorWidget::SelectTabIndex(int32 _Index) {
}


void UTabSelectorWidget::PreviousTab() {
}


void UTabSelectorWidget::NextTab() {
}

int32 UTabSelectorWidget::GetTabIndex() const {
    return 0;
}

void UTabSelectorWidget::EnableInput() {
}

void UTabSelectorWidget::DisableInput() {
}

void UTabSelectorWidget::ClearTabList() {
}


void UTabSelectorWidget::AddTab(const FText& _Text) {
}


