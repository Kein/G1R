#include "MapCustomMarkerWidget.h"

UMapCustomMarkerWidget::UMapCustomMarkerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->m_PanelParent = NULL;
    this->m_MapWidgetOwner = NULL;
    this->m_RemovingMarkerFinished = true;
}


void UMapCustomMarkerWidget::SetMarkerTag(FGameplayTag MarkerTag) {
}


FGameplayTag UMapCustomMarkerWidget::GetMarkerTag() {
    return FGameplayTag{};
}

FVector2D UMapCustomMarkerWidget::GetMarkerPos() {
    return FVector2D{};
}



