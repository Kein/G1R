#include "CheckElementsInsideVolume.h"
#include "Components/BoxComponent.h"

ACheckElementsInsideVolume::ACheckElementsInsideVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->Box = (UBoxComponent*)RootComponent;
}

void ACheckElementsInsideVolume::OnValid_Implementation() {
}

void ACheckElementsInsideVolume::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ACheckElementsInsideVolume::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


