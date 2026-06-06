#include "AlkVerticalBoxSlot.h"

UAlkVerticalBoxSlot::UAlkVerticalBoxSlot() {
    this->m_HorizontalAlignment = HAlign_Fill;
    this->m_VerticalAlignment = VAlign_Fill;
}

void UAlkVerticalBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> _VerticalAlignment) {
}

void UAlkVerticalBoxSlot::SetSize(FSlateChildSize _Size) {
}

void UAlkVerticalBoxSlot::SetPadding(FMargin _Padding) {
}

void UAlkVerticalBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> _HorizontalAlignment) {
}


