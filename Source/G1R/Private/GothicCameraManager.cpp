#include "GothicCameraManager.h"

AGothicCameraManager::AGothicCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
    this->m_CameraConfig = NULL;
    this->LineOfSightProbeSize = 12.00f;
    this->m_TimeSinceLastEnemyCheck = 0.00f;
    this->m_EnemyCheckInterval = 0.25f;
    this->m_EnemiesGroundAround = 0;
    this->m_EnemiesFlyAround = 0;
    this->m_TargetIsBig = false;
    this->m_Character = NULL;
    this->m_Spell = NULL;
    this->m_AbilitySystemComponent = NULL;
    this->m_CurrentBehaviour = ECamConditions::None;
    this->m_ViewPitchMinCache = 0.00f;
    this->m_ViewPitchMaxCache = 0.00f;
}

void AGothicCameraManager::RefreshCameraConfig() {
}


