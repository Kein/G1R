#include "ExplosionVisual.h"
#include "GothicFXComponent.h"

AExplosionVisual::AExplosionVisual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->m_FXComponent = CreateDefaultSubobject<UGothicFXComponent>(TEXT("FXComponent"));
}

void AExplosionVisual::OnExplode_Implementation(const FHitResult& HitResult, int32 spellLevel) {
}

void AExplosionVisual::Multicast_OnExplode_Implementation(const FHitResult& HitResult, int32 spellLevel) {
}


