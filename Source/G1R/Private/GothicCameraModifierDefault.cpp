#include "GothicCameraModifierDefault.h"

UGothicCameraModifierDefault::UGothicCameraModifierDefault() {
    this->Priority = 100;
    this->m_CurrentBehaviour = ECamConditions::None;
    this->m_OriginBehaviour = ECamConditions::None;
}


