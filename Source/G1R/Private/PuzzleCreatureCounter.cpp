#include "PuzzleCreatureCounter.h"

FPuzzleCreatureCounter::FPuzzleCreatureCounter() {
    this->m_RequiredKills = 0;
    this->m_CurrentKills = 0;
    this->m_NumPlays = 0;
    this->m_PuzzleEvent = EPuzzleEvent::DeathEvent;
    this->m_ExtraData = NULL;
}

