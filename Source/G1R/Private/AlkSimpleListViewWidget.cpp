#include "AlkSimpleListViewWidget.h"

UAlkSimpleListViewWidget::UAlkSimpleListViewWidget() {
    this->ScrollBox_Content = NULL;
    this->SizeBox_Content = NULL;
    this->m_EntryWidgetClass = NULL;
    this->m_Orientation = Orient_Vertical;
    this->m_UseFixedWidth = false;
    this->m_FixedWidth = 250.00f;
    this->m_UseFixedHeight = false;
    this->m_FixedHeight = 250.00f;
    this->m_UseEdgeSnapping = true;
    this->m_EdgeSnappingDistance = 16.00f;
    this->m_SmoothScrolling = true;
    this->m_SmoothScrollingSpeed = 10.00f;
    this->m_ScrollSpeedMouse = 32.00f;
    this->m_ScrollSpeedStick = 512.00f;
    this->m_InitialRepeatDelay = 0.50f;
    this->m_RepeatDelay = 0.10f;
}

void UAlkSimpleListViewWidget::StopScroll() {
}

void UAlkSimpleListViewWidget::StartScrollForth() {
}

void UAlkSimpleListViewWidget::StartScrollBack() {
}

void UAlkSimpleListViewWidget::ScrollToTop() {
}

void UAlkSimpleListViewWidget::ScrollToBottom() {
}

void UAlkSimpleListViewWidget::ScrollTo(float _Offset) {
}

void UAlkSimpleListViewWidget::ScrollBy(float _Amount) {
}


void UAlkSimpleListViewWidget::HandleUserScrolled(float _Offset) {
}

float UAlkSimpleListViewWidget::GetScrollOffsetFromEnd() const {
    return 0.0f;
}

float UAlkSimpleListViewWidget::GetScrollOffset() const {
    return 0.0f;
}

void UAlkSimpleListViewWidget::EnableInput() {
}

void UAlkSimpleListViewWidget::DisableInput() {
}


