#include "IntegerPickerWidget.h"

UIntegerPickerWidget::UIntegerPickerWidget() {
    this->m_Value = 50;
    this->m_MinValue = 0;
    this->m_MaxValue = 100;
    this->m_StepSize = 1;
    this->m_StartWithInputEnabled = true;
    this->m_InitialRepeatDelay = 0.20f;
    this->m_RepeatDelay = 0.10f;
    this->m_Layout = EIntegerPickerWidget_Layout::Horizontal;
}

void UIntegerPickerWidget::StopRepetition() {
}

void UIntegerPickerWidget::StopIncrement() {
}

void UIntegerPickerWidget::StopDecrement() {
}

void UIntegerPickerWidget::StartIncrement() {
}

void UIntegerPickerWidget::StartDecrement() {
}

void UIntegerPickerWidget::SetVisible(bool _Visible) {
}

void UIntegerPickerWidget::SetValueToMin() {
}

void UIntegerPickerWidget::SetValueToMax() {
}

void UIntegerPickerWidget::SetValueRounded(double _Value) {
}

void UIntegerPickerWidget::SetValueByRatio(double _Ratio) {
}

void UIntegerPickerWidget::SetValue(int32 _Value, bool _Force) {
}

void UIntegerPickerWidget::SetStepSize(int32 _StepSize) {
}

void UIntegerPickerWidget::SetRange(int32 _MinValue, int32 _MaxValue) {
}

void UIntegerPickerWidget::SetMinValue(int32 _MinValue) {
}

void UIntegerPickerWidget::SetMaxValue(int32 _MaxValue) {
}




void UIntegerPickerWidget::Increment() {
}

int32 UIntegerPickerWidget::GetValue() const {
    return 0;
}

int32 UIntegerPickerWidget::GetStepSize() const {
    return 0;
}

void UIntegerPickerWidget::GetRange(int32& _MinValue, int32& _MaxValue) const {
}

int32 UIntegerPickerWidget::GetMinValue() const {
    return 0;
}

int32 UIntegerPickerWidget::GetMaxValue() const {
    return 0;
}

EIntegerPickerWidget_Layout UIntegerPickerWidget::GetLayout() const {
    return EIntegerPickerWidget_Layout::Horizontal;
}

void UIntegerPickerWidget::EnableAdditionalInput() {
}

void UIntegerPickerWidget::DisableAdditionalInput() {
}

void UIntegerPickerWidget::Decrement() {
}


