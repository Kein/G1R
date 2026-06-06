#include "FastActorOverlapBoxComponent.h"

UFastActorOverlapBoxComponent::UFastActorOverlapBoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BudgetWorkload = TEXT("CharacterMinorVisualUpdates");
    this->FastOverlapActorClass = NULL;
}

void UFastActorOverlapBoxComponent::UpdateOverlapsFast() {
}

bool UFastActorOverlapBoxComponent::IsFastOverlappingActor(const AActor* OtherActor) const {
    return false;
}


