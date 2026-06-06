#include "WorldDefinition.h"

UWorldDefinition::UWorldDefinition() {
    this->m_DefaultOre = NULL;
    this->m_Regions = NULL;
    this->m_TradersType = NULL;
    this->m_CharactersDefaultInteraction = NULL;
    this->m_CharactersLootInteraction = NULL;
    this->m_CharactersExecutionInteraction = NULL;
    this->m_CharactersRideInteraction = NULL;
    this->m_MaxRegionalMultiplier = 0.15f;
    this->m_RegionalMultiplierMax = 0.20f;
    this->m_RegionalMultiplierMin = -0.40f;
    this->m_RegionalMultiplierDivide = 0.20f;
    this->m_MainRegions = 5.00f;
    this->m_MaxLiquidityMultiplier = 0.15f;
    this->m_LiquidityMultiplierMax = 0.18f;
    this->m_LiquidityMultiplierMin = -0.15f;
    this->m_DefaultPhotoModeConfig = NULL;
    this->m_PhysicsDefinition = NULL;
    this->m_SpawnAllAiFromStart = false;
    this->m_MiningDefinition = NULL;
    this->m_InteractCameraDefinition = NULL;
    this->m_AIAgentsNameDistance = 100.00f;
    this->m_AIAgentsNameImportantConversationsDistance = 1000.00f;
    this->m_ShowAllNamesAndHealthBars = false;
    this->m_ItemDetectionRadius = 1000.00f;
    this->m_GothicGameViewportClientDisableGamepad = false;
    this->m_ShowHealthBarTimer = 2.00f;
    this->m_ShowGameOverTimer = 2.00f;
    this->m_SensorConfigDefinition = NULL;
    this->m_StatsCalculatorConfiguration = NULL;
    this->m_ShowNPCNames = false;
    this->m_ReviveCounter = -1;
    this->m_DropForce = 15000.00f;
    this->m_MaxTorches = 5;
}




void UWorldDefinition::AddStationExperience(FGameplayTag Tag, const int32 Experience) {
}


