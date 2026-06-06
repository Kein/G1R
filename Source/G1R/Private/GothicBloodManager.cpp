#include "GothicBloodManager.h"

AGothicBloodManager::AGothicBloodManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_MaxDecalNum = 30;
    this->m_TexScale = 2.00f;
}

AGothicBloodManager* AGothicBloodManager::GetInstance(UObject* WorldContextObject) {
    return NULL;
}


