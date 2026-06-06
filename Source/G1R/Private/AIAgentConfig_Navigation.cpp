#include "AIAgentConfig_Navigation.h"

UAIAgentConfig_Navigation::UAIAgentConfig_Navigation() {
    this->m_NavigationQueryFilter = NULL;
    this->m_PreferedNavigationType = ENavigationType::Walk;
    this->NavShotQueryDistance = 5000.00f;
    this->GlobalMetaRepathRadius = 1000.00f;
}


