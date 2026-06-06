#include "GothicWeaponBloodComponent.h"

UGothicWeaponBloodComponent::UGothicWeaponBloodComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_MaterialInstance = NULL;
    this->m_WeatherComponent = NULL;
}


