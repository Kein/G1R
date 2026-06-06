#include "MapWidget.h"

UMapWidget::UMapWidget() {
    this->ImageMap = NULL;
    this->ImageMap_Overlay = NULL;
    this->ImageMap_Debug = NULL;
    this->MapImageSizeBox = NULL;
    this->m_IsWorldMap = false;
    this->m_IsEmpty = true;
    this->m_ActiveMapData = NULL;
    this->m_PlayerPosAngle = 0.00f;
    this->m_MapDebugMode = false;
    this->CanvasPanel_CustomMarkers = NULL;
    this->m_MarkerSelectorHoldTimer = 0.00f;
    this->m_HoldRemoveAllMarkersTimer = 0.00f;
    this->InputHint_Marker_RemoveAll = NULL;
    this->m_MapData = NULL;
    this->m_TexPosCorrection = NULL;
    this->m_MapPanelSlot = NULL;
}


void UMapWidget::UpdateMapOffset(FVector2D& GameWorldPosNorm, bool RemoveOffset) {
}



bool UMapWidget::ShowMakerSelector(FVector2D CursorPos) {
    return false;
}

void UMapWidget::SetDebugMode(bool IsDebugModeEnabled) {
}

void UMapWidget::RemoveCustomMarker(FVector2D MarkerPos) {
}

void UMapWidget::RemoveAllMarkers() {
}

void UMapWidget::ReloadCustomMarkers() {
}

void UMapWidget::OnSelectedMarker(FGameplayTag MarkerTag) {
}



bool UMapWidget::AddCustomMarker(FVector2D MarkerPos, FGameplayTag MarkerTag, bool ShowAddAnimation) {
    return false;
}


