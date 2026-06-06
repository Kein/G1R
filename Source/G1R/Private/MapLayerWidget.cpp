#include "MapLayerWidget.h"

UMapLayerWidget::UMapLayerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_FilterBoundTo = NULL;
}

void UMapLayerWidget::SetParentMapTag(FGameplayTag Tag) {
}

void UMapLayerWidget::OnSetCheckedState(ECheckBoxState OldCheckedState, ECheckBoxState NewCheckedState) {
}

FGameplayTag UMapLayerWidget::GetMapTag() {
    return FGameplayTag{};
}

EMapLayerFilterListState UMapLayerWidget::GetFilterState() {
    return EMapLayerFilterListState::Enabled;
}

FText UMapLayerWidget::GetFilterName() {
    return FText::GetEmpty();
}


