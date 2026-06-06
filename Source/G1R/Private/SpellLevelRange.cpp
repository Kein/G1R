#include "SpellLevelRange.h"

FSpellLevelRange::FSpellLevelRange() {
    this->CastTime = 0.00f;
    this->CastManaCost = 0.00f;
    this->ManaCostSc = 0.00f;
    this->m_SpellClass = NULL;
    this->m_SpellConfigLevelData = NULL;
}

