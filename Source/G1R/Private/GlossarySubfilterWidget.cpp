#include "GlossarySubfilterWidget.h"

UGlossarySubfilterWidget::UGlossarySubfilterWidget() {
    this->m_Wrap = false;
}

void UGlossarySubfilterWidget::SetSubfilters(const TArray<FGlossarySubfilterData>& _SubfilterData) {
}

void UGlossarySubfilterWidget::SetCurrentIndex(int32 _NewIndex, bool _Force) {
}

void UGlossarySubfilterWidget::SelectPrevious() {
}

void UGlossarySubfilterWidget::SelectNext() {
}



bool UGlossarySubfilterWidget::HasSubfilters() const {
    return false;
}

FGlossarySubfilterData UGlossarySubfilterWidget::GetSubfilterAtIndex(int32 _Index) const {
    return FGlossarySubfilterData{};
}

FGlossarySubfilterData UGlossarySubfilterWidget::GetCurrentSubfilter() const {
    return FGlossarySubfilterData{};
}

int32 UGlossarySubfilterWidget::GetCurrentIndex() const {
    return 0;
}

void UGlossarySubfilterWidget::ClearSubfilters() {
}

bool UGlossarySubfilterWidget::CanSelectPrevious() const {
    return false;
}

bool UGlossarySubfilterWidget::CanSelectNext() const {
    return false;
}


