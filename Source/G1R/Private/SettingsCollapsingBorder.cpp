#include "SettingsCollapsingBorder.h"

USettingsCollapsingBorder::USettingsCollapsingBorder() {
    this->m_VisibleType = ESlateVisibility::SelfHitTestInvisible;
    this->m_HiddenType = ESlateVisibility::Collapsed;
}


