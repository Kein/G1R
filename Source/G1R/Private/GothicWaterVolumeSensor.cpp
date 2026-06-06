#include "GothicWaterVolumeSensor.h"

UGothicWaterVolumeSensor::UGothicWaterVolumeSensor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_GothicCharacter = NULL;
    this->m_GothicAbilitySystemComponent = NULL;
    this->m_PreviousWaterEffect = NULL;
}

void UGothicWaterVolumeSensor::OnHasWaterChanged(bool hasWater) {
}


