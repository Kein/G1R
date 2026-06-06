#include "ReachableTargetIndicatorForProjectilesComponent.h"

UReachableTargetIndicatorForProjectilesComponent::UReachableTargetIndicatorForProjectilesComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ItemVisual = NULL;
    this->m_HUDCrosshairController = NULL;
    this->m_HUDAmmoLeftController = NULL;
}


