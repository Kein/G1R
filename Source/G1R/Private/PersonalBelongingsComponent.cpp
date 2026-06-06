#include "PersonalBelongingsComponent.h"
#include "Templates/SubclassOf.h"

UPersonalBelongingsComponent::UPersonalBelongingsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartingRegion = NULL;
}

bool UPersonalBelongingsComponent::IsOwningActor(TSoftObjectPtr<AActor> Actor) const {
    return false;
}

TArray<AActor*> UPersonalBelongingsComponent::GetOwnedActorsOfClass(TSubclassOf<AActor> Class) const {
    return TArray<AActor*>();
}

AActor* UPersonalBelongingsComponent::GetOwnedActorOfClass(TSubclassOf<AActor> Class) const {
    return NULL;
}


