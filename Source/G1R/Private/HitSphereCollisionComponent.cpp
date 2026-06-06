#include "HitSphereCollisionComponent.h"
#include "Templates/SubclassOf.h"

UHitSphereCollisionComponent::UHitSphereCollisionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->m_WeaponData = NULL;
}

void UHitSphereCollisionComponent::K2_SetState(EHitColliderState State) {
}

EHitColliderState UHitSphereCollisionComponent::K2_GetState() {
    return EHitColliderState::None;
}

void UHitSphereCollisionComponent::K2_GetOverlappingActorsCustom(TArray<AActor*>& OutOverlappingActors, TSubclassOf<AActor> ClassFilter) {
}

void UHitSphereCollisionComponent::K2_DoDestroyExplicit() {
}

void UHitSphereCollisionComponent::K2_AddCustomCollisionResponse(TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<ECollisionResponse> CollisionResponse) {
}


