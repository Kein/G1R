#include "ProgressiveCapsuleCollisionByRadius.h"
#include "Templates/SubclassOf.h"

UProgressiveCapsuleCollisionByRadius::UProgressiveCapsuleCollisionByRadius(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->m_WeaponData = NULL;
}

void UProgressiveCapsuleCollisionByRadius::K2_SetState(EHitColliderState State) {
}

EHitColliderState UProgressiveCapsuleCollisionByRadius::K2_GetState() {
    return EHitColliderState::None;
}

void UProgressiveCapsuleCollisionByRadius::K2_GetOverlappingActorsCustom(TArray<AActor*>& OutOverlappingActors, TSubclassOf<AActor> ClassFilter) {
}

void UProgressiveCapsuleCollisionByRadius::K2_DoDestroyExplicit() {
}

void UProgressiveCapsuleCollisionByRadius::K2_AddCustomCollisionResponse(TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<ECollisionResponse> CollisionResponse) {
}


