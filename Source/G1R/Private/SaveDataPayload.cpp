#include "SaveDataPayload.h"

FSaveDataPayload::FSaveDataPayload() {
    this->m_QuickSave = false;
    this->m_AutoSave = false;
    this->m_ProfileId = 0;
    this->m_IsPlayerSaveNameCustom = false;
    this->m_difficultyPreset = NULL;
    this->m_customCombatSettings = NULL;
    this->m_customResourcesSettings = NULL;
    this->m_customProgressionSettings = NULL;
    this->m_PermaDeath = false;
    this->m_PermaDeathGameOver = false;
    this->m_SurvivalMode = false;
    this->m_FakeSloppyCombos = false;
    this->m_ForceSave = false;
}

