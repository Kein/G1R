#include "BoxNavShapeComponent.h"

UBoxNavShapeComponent::UBoxNavShapeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CanCharacterStepUpOn = ECB_No;
}


