#include "SaveGamePublicData.h"

FSaveGamePublicData::FSaveGamePublicData() {
    this->m_IsPlayerSaveNameCustom = false;
    this->m_ChapterID = 0;
    this->m_difficultyPreset = NULL;
    this->m_customCombatSettings = NULL;
    this->m_customResourcesSettings = NULL;
    this->m_customProgressionSettings = NULL;
    this->m_TimePlayed = 0.00f;
    this->m_TimeLoaded = 0.00f;
    this->m_QuickSave = false;
    this->m_AutoSave = false;
    this->m_ProfileId = 0;
}

