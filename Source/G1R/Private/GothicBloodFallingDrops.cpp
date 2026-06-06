#include "GothicBloodFallingDrops.h"
#include "NiagaraComponent.h"

AGothicBloodFallingDrops::AGothicBloodFallingDrops(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent"));
    this->m_BloodParticleComponent = (UNiagaraComponent*)RootComponent;
    this->m_BloodParticles = NULL;
    this->m_DecalMaterial = NULL;
}

void AGothicBloodFallingDrops::StartParticles(float creatureScale, FLinearColor BloodColor, float bloodAmount, UStaticMeshComponent* MeshComponent) {
}

void AGothicBloodFallingDrops::SetDecalMaterial(UMaterialInterface* Material) {
}

void AGothicBloodFallingDrops::SetBloodParticles(UNiagaraSystem* bloodParticles) {
}

void AGothicBloodFallingDrops::ProcessBloodDrops() {
}

void AGothicBloodFallingDrops::DestroyActor() {
}

void AGothicBloodFallingDrops::AttachParticlesToMesh(USkeletalMeshComponent* MeshComponent, const FName& SocketName) {
}


