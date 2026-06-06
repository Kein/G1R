#include "ArrowVisual.h"
#include "Components/StaticMeshComponent.h"

AArrowVisual::AArrowVisual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ProjectileProfileName = TEXT("ArrowProjectileProfile");
    this->m_Bounciness = 0.20f;
    this->m_Friction = 0.20f;
    this->m_BounceVelocityStopSimulatingThreshold = 5.00f;
    this->m_MinFrictionFraction = 0.00f;
    this->m_SurfaceHardnessMakesBounce = 0.80f;
    this->m_MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
    this->m_MeshComp->SetupAttachment(RootComponent);
}

void AArrowVisual::MulticastStop_Implementation() {
}

void AArrowVisual::MulticastDetachFromActor_Implementation() {
}

void AArrowVisual::MulticastBreakArrow_Implementation(float randomValue) {
}

bool AArrowVisual::HasBouncingWhenHit_Scriptable_Implementation(AActor* HitActor, float surfaceHardness) {
    return false;
}

void AArrowVisual::DoInteractableArrowFallBehaviour_Scriptable_Implementation(AItemVisualWorld* InteractableArrow, float kineticEnergyCoef, bool hasBouncingWhenHit) {
}

bool AArrowVisual::CanAttachArrowOnHitActor_Scriptable_Implementation(AActor* HitActor, float surfaceHardness) {
    return false;
}








