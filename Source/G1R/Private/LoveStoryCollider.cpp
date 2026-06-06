#include "LoveStoryCollider.h"
#include "Components/BoxComponent.h"

ALoveStoryCollider::ALoveStoryCollider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
    this->BoxComponent = (UBoxComponent*)RootComponent;
    this->IsAreaVisited = false;
    this->m_DecompositionFliesSystem = NULL;
    this->FliesNiagaraComponent = NULL;
    this->MaxFlies = 15;
    this->FliesStartMinFactor = 0.70f;
}

void ALoveStoryCollider::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



