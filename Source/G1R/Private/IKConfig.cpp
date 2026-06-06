#include "IKConfig.h"

UIKConfig::UIKConfig() {
    this->m_UpPelvisSpeed = 0.00f;
    this->m_UpSpeed = 0.00f;
    this->m_DownSpeed = 0.00f;
    this->m_HeadSpeed = 0.00f;
    this->m_UpTraceDistance = 0.00f;
    this->m_DownTraceDistance = 0.00f;
    this->m_DistanceLookAtPoint = 100.00f;
    this->m_HeadBoneName = TEXT("Head");
    this->m_NeckBoneName = TEXT("neck_01");
    this->m_SwitchLegSolve = false;
    this->m_SwitchLookSolve = false;
}


