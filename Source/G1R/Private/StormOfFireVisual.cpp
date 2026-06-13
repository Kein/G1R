#include "StormOfFireVisual.h"
#include "Components/SphereComponent.h"
#include "HitCapsuleCollisionComponent.h"

AStormOfFireVisual::AStormOfFireVisual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->m_SphereComponent = (USphereComponent*)RootComponent;
    this->m_CollisionComp = CreateDefaultSubobject<UHitCapsuleCollisionComponent>(TEXT("HitCapsuleCollisionComponent"));
    this->m_MinHitCooldownMilliseconds = 500.00f;
    this->m_CollisionComp->SetupAttachment(RootComponent);
}

bool AStormOfFireVisual::ShouldNotifyEnvironmentDebuff_Scriptable_Implementation(AActor* OtherActor) {
    return false;
}

void AStormOfFireVisual::OnBeginOverlapServer_Implementation(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



void AStormOfFireVisual::DeactivateCollision() const {
}

bool AStormOfFireVisual::CanApplyDamage_Scriptable_Implementation(const UAbilitySystemComponent* Source, const UAbilitySystemComponent* Target) const {
    return false;
}


