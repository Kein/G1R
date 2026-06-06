#include "HitBoxCollisionComponent.h"
#include "Templates/SubclassOf.h"

UHitBoxCollisionComponent::UHitBoxCollisionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->m_WeaponData = NULL;
}

void UHitBoxCollisionComponent::K2_SetState(EHitColliderState State) {
}

EHitColliderState UHitBoxCollisionComponent::K2_GetState() {
    return EHitColliderState::None;
}

void UHitBoxCollisionComponent::K2_GetOverlappingActorsCustom(TArray<AActor*>& OutOverlappingActors, TSubclassOf<AActor> ClassFilter) {
}

void UHitBoxCollisionComponent::K2_DoDestroyExplicit() {
}

void UHitBoxCollisionComponent::K2_AddCustomCollisionResponse(TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<ECollisionResponse> CollisionResponse) {
}


