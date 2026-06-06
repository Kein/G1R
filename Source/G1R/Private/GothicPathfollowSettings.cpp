#include "GothicPathfollowSettings.h"

FGothicPathfollowSettings::FGothicPathfollowSettings() {
    this->CrowdAgentSeparationWeight = 0.00f;
    this->CrowdAgentRadiusMultiplier = 0.00f;
    this->CrowdAgentHalfHeightMultiplier = 0.00f;
    this->AgentRadiusMultiplier = 0.00f;
    this->AgentHalfHeightMultiplier = 0.00f;
    this->bSlowDownAtGoal = false;
    this->bEnableAnticipateTurns = false;
    this->bStrafeTurnToPotentialBlockingAgent = false;
    this->CrowdGroupsBehaviour = ECrowdGroupsBehaviour::UseSocialHierarchy;
    this->CrowdIdleBehaviour = ECrowdIdleBehaviour::TryAvoidMe;
    this->CrowdAvoidanceQuality = EScriptableCrowdAvoidanceQuality::Low;
    this->bEnablePathPolyOptimization = false;
}

