#include "BookVisualConfiguration.h"

FBookVisualConfiguration::FBookVisualConfiguration() {
    this->m_BookDamageState = 0;
    this->m_BookTitleFontSize = 0.00f;
    this->m_BookTitleOpacity = 0.00f;
    this->m_TitleHorizontalAlignment = EHorizontalAlignmenet::LEFT;
    this->m_TitleVerticalAlignment = EVerticalAlignmenet::TOP;
    this->m_BookTitleShadowIntensity = 0.00f;
    this->m_BookTitleWearIntensity = 0.00f;
}

