#include "ProgressiveBoxCollisionByAngle.h"
#include "Templates/SubclassOf.h"

UProgressiveBoxCollisionByAngle::UProgressiveBoxCollisionByAngle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->m_BoxDepth = 0.00f;
    this->m_YBoxRadius = 0.00f;
    this->m_ZBoxRadius = 0.00f;
    this->m_WeaponData = NULL;
}

void UProgressiveBoxCollisionByAngle::SetZBoxRadius(float ZBoxRadius, bool bUpdateOverlaps) {
}

void UProgressiveBoxCollisionByAngle::SetYBoxRadius(float YBoxRadius, bool bUpdateOverlaps) {
}

void UProgressiveBoxCollisionByAngle::SetBoxDepth(float BoxDepth, bool bUpdateOverlaps) {
}

void UProgressiveBoxCollisionByAngle::MoveForwardOverCone(float AccumulatedDistance, float Angle, float MinFloorHeight, float MaxFloorHeight, TEnumAsByte<ECollisionChannel> Channel, bool EvaluateWaterSurface) {
}

void UProgressiveBoxCollisionByAngle::K2_SetState(EHitColliderState State) {
}

EHitColliderState UProgressiveBoxCollisionByAngle::K2_GetState() {
    return EHitColliderState::None;
}

void UProgressiveBoxCollisionByAngle::K2_GetOverlappingActorsCustom(TArray<AActor*>& OutOverlappingActors, TSubclassOf<AActor> ClassFilter) {
}

void UProgressiveBoxCollisionByAngle::K2_DoDestroyExplicit() {
}

void UProgressiveBoxCollisionByAngle::K2_AddCustomCollisionResponse(TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<ECollisionResponse> CollisionResponse) {
}

bool UProgressiveBoxCollisionByAngle::GetFloorLocation(FVector& OutPosition, FVector CurrentPosition, float MinFloorHeight, float MaxFloorHeight, TEnumAsByte<ECollisionChannel> Channel, bool EvaluateWaterSurface) {
    return false;
}

float UProgressiveBoxCollisionByAngle::GetConeRadius(float Angle, float Length) {
    return 0.0f;
}


