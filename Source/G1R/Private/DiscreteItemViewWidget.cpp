#include "DiscreteItemViewWidget.h"

UDiscreteItemViewWidget::UDiscreteItemViewWidget() {
    this->SizeBox_Grid = NULL;
    this->TileView_Grid = NULL;
    this->m_EntryWidgetClass = NULL;
    this->m_ItemWidth = 150.00f;
    this->m_ItemHeight = 150.00f;
    this->m_RemoveOutermostMargin = false;
    this->m_AdjustHeightDependingOnItems = false;
    this->m_ViewWidthItems = 3;
    this->m_ViewHeightItems = 4;
    this->m_AdjustedMinHeight = 1;
    this->m_AdjustedMaxHeight = 3;
    this->m_HideWhenEmpty = false;
    this->m_IsHoverExclusive = true;
    this->m_PreviewRows = 1;
    this->m_SmoothScrolling = true;
    this->m_SmoothScrollingSpeed = 10.00f;
    this->m_StartWithInputEnabled = true;
    this->m_InitialRepeatDelay = 0.50f;
    this->m_RepeatDelay = 0.10f;
    this->m_HoveredItem = NULL;
    this->m_LastHoveredItem = NULL;
}

void UDiscreteItemViewWidget::StopSelectVertical() {
}

void UDiscreteItemViewWidget::StopSelectHorizontal() {
}

void UDiscreteItemViewWidget::StartSelectUp() {
}

void UDiscreteItemViewWidget::StartSelectRight() {
}

void UDiscreteItemViewWidget::StartSelectPreviousPage() {
}

void UDiscreteItemViewWidget::StartSelectNextPage() {
}

void UDiscreteItemViewWidget::StartSelectLeft() {
}

void UDiscreteItemViewWidget::StartSelectDown() {
}

void UDiscreteItemViewWidget::SetViewWidth(int32 _WidthInItems) {
}

void UDiscreteItemViewWidget::SetViewHeight(int32 _HeightInItems) {
}

void UDiscreteItemViewWidget::SetScrollOffset(int32 _Offset) {
}

void UDiscreteItemViewWidget::SetListItemsBP(const TArray<UObject*>& _ListItems, bool _KeepSelection) {
}

void UDiscreteItemViewWidget::SetItemWidth(double _Width) {
}

void UDiscreteItemViewWidget::SetItemHeight(double _Height) {
}

void UDiscreteItemViewWidget::SetCurrentIndex(int32 _Index) {
}

void UDiscreteItemViewWidget::SetAdaptViewHeightToContent(bool _Adapt) {
}

void UDiscreteItemViewWidget::SelectUp() {
}

void UDiscreteItemViewWidget::SelectRight() {
}

void UDiscreteItemViewWidget::SelectPreviousPage() {
}

void UDiscreteItemViewWidget::SelectPrevious() {
}

void UDiscreteItemViewWidget::SelectNextPage() {
}

void UDiscreteItemViewWidget::SelectNext() {
}

void UDiscreteItemViewWidget::SelectLeft() {
}

void UDiscreteItemViewWidget::SelectLast() {
}

void UDiscreteItemViewWidget::SelectItem(UObject* _Item) {
}

void UDiscreteItemViewWidget::SelectFirst() {
}

void UDiscreteItemViewWidget::SelectDown() {
}

void UDiscreteItemViewWidget::ScrollToTop() {
}

void UDiscreteItemViewWidget::ScrollToBottom() {
}

void UDiscreteItemViewWidget::RemoveItemAtIndex(int32 _Index) {
}

void UDiscreteItemViewWidget::RemoveItem(UObject* _Item) {
}










bool UDiscreteItemViewWidget::LongClickCurrentItem(EAlkMouseButton _MouseButton) {
    return false;
}

bool UDiscreteItemViewWidget::IsList() const {
    return false;
}

bool UDiscreteItemViewWidget::IsGrid() const {
    return false;
}

bool UDiscreteItemViewWidget::IsEmpty() const {
    return false;
}

int32 UDiscreteItemViewWidget::GetViewWidth() const {
    return 0;
}

int32 UDiscreteItemViewWidget::GetViewHeight() const {
    return 0;
}

int32 UDiscreteItemViewWidget::GetNumRows() const {
    return 0;
}

int32 UDiscreteItemViewWidget::GetNumItems() const {
    return 0;
}

int32 UDiscreteItemViewWidget::GetNumColumns() const {
    return 0;
}

TArray<UObject*> UDiscreteItemViewWidget::GetListItems() const {
    return TArray<UObject*>();
}

UObject* UDiscreteItemViewWidget::GetItemAt(int32 _Index) const {
    return NULL;
}

int32 UDiscreteItemViewWidget::GetIndexForItem(const UObject* _Item) const {
    return 0;
}

UObject* UDiscreteItemViewWidget::GetHoveredOrSelectedItem() const {
    return NULL;
}

int32 UDiscreteItemViewWidget::GetHoveredOrSelectedIndex() const {
    return 0;
}

int32 UDiscreteItemViewWidget::GetCurrentScrollOffsetFromEnd() const {
    return 0;
}

int32 UDiscreteItemViewWidget::GetCurrentScrollOffset() const {
    return 0;
}

int32 UDiscreteItemViewWidget::GetCurrentIndex() const {
    return 0;
}

void UDiscreteItemViewWidget::EnableInput() {
}

void UDiscreteItemViewWidget::DisableInput() {
}

bool UDiscreteItemViewWidget::ClickCurrentItem(EAlkMouseButton _MouseButton) {
    return false;
}

void UDiscreteItemViewWidget::ClearSelection() {
}

void UDiscreteItemViewWidget::ClearItems() {
}

void UDiscreteItemViewWidget::ClearHoverItem() {
}

void UDiscreteItemViewWidget::AddItem(UObject* _Item) {
}


