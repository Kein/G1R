#include "PuzzleBloodFontManager.h"

APuzzleBloodFontManager::APuzzleBloodFontManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_FontState = EBloodFontState::WaitToStart;
    this->m_FontStateOld = EBloodFontState::WaitToStart;
    this->m_BloodPuzzle03 = NULL;
    this->m_BloodPuzzle02 = NULL;
    this->m_BloodPuzzle01 = NULL;
}


