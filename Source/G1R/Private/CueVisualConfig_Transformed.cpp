#include "CueVisualConfig_Transformed.h"

UCueVisualConfig_Transformed::UCueVisualConfig_Transformed() {
    this->m_CameraTravellingInitialDelay = 0.20f;
    this->m_CameraTravellingDuration = 1.50f;
}

UAnimMontage* UCueVisualConfig_Transformed::GetInMontage() const {
    return NULL;
}

float UCueVisualConfig_Transformed::GetCameraTravellingInitialDelay() const {
    return 0.0f;
}

float UCueVisualConfig_Transformed::GetCameraTravellingDuration() const {
    return 0.0f;
}


