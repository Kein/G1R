#include "CustomNavCollisionStaticMeshComponent.h"

UCustomNavCollisionStaticMeshComponent::UCustomNavCollisionStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bExportNavigableGeometryEvenIfNotCollidable = true;
    this->bUseCustomNavCollisionPawnChannel = true;
    this->CustomCollisionProfileName = TEXT("CustomNavCollisionProfileWater");
}


