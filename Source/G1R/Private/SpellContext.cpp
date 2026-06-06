#include "SpellContext.h"

FSpellContext::FSpellContext() {
    this->m_TargetAdquiredByDatamodule = false;
    this->m_SpellConfigurationContainer = NULL;
    this->m_CastMontageTaskRemainingTime = 0.00f;
    this->m_CurrentSpellLevel = 0;
    this->m_IsRechargableSpellCancellableAfterFirstCharge = false;
}

