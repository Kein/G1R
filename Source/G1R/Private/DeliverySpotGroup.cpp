#include "DeliverySpotGroup.h"
#include "Components/StaticMeshComponent.h"

ADeliverySpotGroup::ADeliverySpotGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->bIsFinalDestination = true;
    this->bShowPreviewItems = false;
    this->bAdjustItemOnPutDown = false;
    this->StaticMesh = (UStaticMeshComponent*)RootComponent;
}

void ADeliverySpotGroup::SetSpotItem(FInteractionSpotHandle SpotHandle, AActor* Item) {
}

bool ADeliverySpotGroup::HasSpotsLeft() const {
    return false;
}

TArray<FInteractionSpotHandle> ADeliverySpotGroup::GetOwnedInteractionSpots() const {
    return TArray<FInteractionSpotHandle>();
}


