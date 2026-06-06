#include "ProfileData.h"

FProfileData::FProfileData() {
    this->m_difficultyPreset = NULL;
    this->m_customCombatSettings = NULL;
    this->m_customResourcesSettings = NULL;
    this->m_customProgressionSettings = NULL;
    this->m_Survival = false;
    this->m_PermanentDeath = false;
    this->m_PermanentDeathGameOver = false;
    this->m_FakeSloppyCombos = false;
    this->m_MaxQuick = 0;
    this->m_MaxAuto = 0;
}

