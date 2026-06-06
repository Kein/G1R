#include "ReactiveSmallPuddle.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

AReactiveSmallPuddle::AReactiveSmallPuddle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->m_BoxComponent = (UBoxComponent*)RootComponent;
    this->m_StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->m_MaterialInstanceDynamic = NULL;
    this->m_ActorInside = NULL;
    this->m_MaxIntensity = 2.00f;
    this->m_DecayFactor = 1.00f;
    this->m_StaticMeshComponent->SetupAttachment(RootComponent);
}

void AReactiveSmallPuddle::ActorExited(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AReactiveSmallPuddle::ActorEntered(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


