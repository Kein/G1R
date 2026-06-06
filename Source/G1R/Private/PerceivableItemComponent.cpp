#include "PerceivableItemComponent.h"

UPerceivableItemComponent::UPerceivableItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivationType = Disabled;
    this->PerceptionRadius = 1000.00f;
}


