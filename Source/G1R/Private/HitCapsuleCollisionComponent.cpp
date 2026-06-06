#include "HitCapsuleCollisionComponent.h"
#include "Templates/SubclassOf.h"

UHitCapsuleCollisionComponent::UHitCapsuleCollisionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->m_WeaponData = NULL;
}

void UHitCapsuleCollisionComponent::K2_SetState(EHitColliderState State) {
}

EHitColliderState UHitCapsuleCollisionComponent::K2_GetState() {
    return EHitColliderState::None;
}

void UHitCapsuleCollisionComponent::K2_GetOverlappingActorsCustom(TArray<AActor*>& OutOverlappingActors, TSubclassOf<AActor> ClassFilter) {
}

void UHitCapsuleCollisionComponent::K2_DoDestroyExplicit() {
}

void UHitCapsuleCollisionComponent::K2_AddCustomCollisionResponse(TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<ECollisionResponse> CollisionResponse) {
}


