#include "HitConeCollisionComponent.h"
#include "Templates/SubclassOf.h"

UHitConeCollisionComponent::UHitConeCollisionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->m_WeaponData = NULL;
    this->m_HalfAngle = 30.00f;
    this->m_ConeLength = 100.00f;
    this->m_LineThickness = 0.00f;
}

void UHitConeCollisionComponent::SetHalfAngle(float InAngle, bool bUpdateOverlaps) {
}

void UHitConeCollisionComponent::SetConeLength(float ConeLength, bool bUpdateOverlaps) {
}

void UHitConeCollisionComponent::K2_SetState(EHitColliderState State) {
}

EHitColliderState UHitConeCollisionComponent::K2_GetState() {
    return EHitColliderState::None;
}

void UHitConeCollisionComponent::K2_GetOverlappingActorsCustom(TArray<AActor*>& OutOverlappingActors, TSubclassOf<AActor> ClassFilter) {
}

void UHitConeCollisionComponent::K2_DoDestroyExplicit() {
}

void UHitConeCollisionComponent::K2_AddCustomCollisionResponse(TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<ECollisionResponse> CollisionResponse) {
}

float UHitConeCollisionComponent::GetConeLength() {
    return 0.0f;
}


