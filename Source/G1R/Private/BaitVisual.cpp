#include "BaitVisual.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

ABaitVisual::ABaitVisual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("HitComp"));
    this->m_CollisionComp = (USphereComponent*)RootComponent;
    this->m_MovementComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
    this->m_ParticleComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleComp"));
    this->m_MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
    this->m_MeshComp->SetupAttachment(RootComponent);
    this->m_ParticleComp->SetupAttachment(m_MeshComp);
}

void ABaitVisual::OnOverlapBeginServer(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ABaitVisual::Multicast_StopArrow_Implementation(const FHitResult SweepResult) {
}


