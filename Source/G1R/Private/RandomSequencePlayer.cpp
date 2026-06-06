#include "RandomSequencePlayer.h"

FRandomSequencePlayer::FRandomSequencePlayer() {
    this->m_MinTimeToBreaker = 0.00f;
    this->m_MaxTimeToBreaker = 0.00f;
    this->m_BreakerSequenceToPlay = NULL;
    this->m_PlayBreaker = false;
    this->m_BreakerType = EBreakerType::Idle;
}

