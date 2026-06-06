#include "GeneralConfig_Camera.h"

UGeneralConfig_Camera::UGeneralConfig_Camera() {
    this->m_TPCameraTraceRName = TEXT("TP_CameraTrace_R");
    this->m_TPCameraTraceLName = TEXT("TP_CameraTrace_L");
    this->m_RightShoulder = true;
    this->m_MinDistToPlayer = 100.00f;
    this->m_MaxDistToPlayer = 1000.00f;
    this->m_DistanceIncreaseInterpolationSpeed = 2.00f;
    this->m_UserInputDistanceChangeStep = 10.00f;
    this->m_UserInputDistanceChangeSpeed = 160.00f;
    this->m_MinDistBeforePlayerFade = 50.00f;
}


