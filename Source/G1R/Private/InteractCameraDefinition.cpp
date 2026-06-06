#include "InteractCameraDefinition.h"

UInteractCameraDefinition::UInteractCameraDefinition() {
    this->m_BlendFunction = VTBlend_Linear;
    this->m_BlendExp = 0.00f;
    this->m_LockOutgoing = false;
    this->m_Time = 1.50f;
}


