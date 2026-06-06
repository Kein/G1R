#include "AlkimiaLightweightDecorationComponent.h"

UAlkimiaLightweightDecorationComponent::UAlkimiaLightweightDecorationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = true;
    this->Mobility = EComponentMobility::Static;
    this->bAlwaysCreatePhysicsState = true;
    this->bMultiBodyOverlap = true;
}


