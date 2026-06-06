#include "AbilityTaskCameraFadeSetup.h"

FAbilityTaskCameraFadeSetup::FAbilityTaskCameraFadeSetup() {
    this->m_Duration = 0.00f;
    this->m_StartAlpha = 0.00f;
    this->m_TargetAlpha = 0.00f;
    this->m_FadeAudio = false;
    this->m_LerpType = EAbilityTaskCameraFadeSetupLerpType::Lerp;
    this->m_LerpParam1 = 0.00f;
}

