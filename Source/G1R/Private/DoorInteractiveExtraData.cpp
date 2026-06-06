#include "DoorInteractiveExtraData.h"

UDoorInteractiveExtraData::UDoorInteractiveExtraData() {
    this->m_OpenMultiple = true;
    this->m_NumSteps = -1;
    this->m_DoorType = EDoorType::Triggered;
    this->m_DefaultStep = 0;
    this->m_SaveData = true;
    this->m_NpcSaveData = false;
    this->m_PuzzleTriggers = 0;
    this->m_GetAnimStep = false;
}

UAnimMontage* UDoorInteractiveExtraData::GetMontage() const {
    return NULL;
}


