#include "G1RGameModeCooperative.h"

AG1RGameModeCooperative::AG1RGameModeCooperative(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_WorldDefinition = NULL;
    this->m_MainPlayerConfig = NULL;
    this->m_CleanSaveGame = false;
    this->m_CanAutosave = true;
}


