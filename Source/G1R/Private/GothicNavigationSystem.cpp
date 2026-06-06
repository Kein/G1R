#include "GothicNavigationSystem.h"
#include "AI/Navigation/NavigationTypes.h"

UGothicNavigationSystem::UGothicNavigationSystem() {
    this->DefaultAgentName = TEXT("Human_NavMesh");
    this->bSkipAgentHeightCheckWhenPickingNavData = true;
    this->DataGatheringMode = ENavDataGatheringModeConfig::Instant;
    this->SupportedAgents.AddDefaulted(3);
}


