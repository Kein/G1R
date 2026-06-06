#include "AmbientItemSpawner.h"
#include "Components/StaticMeshComponent.h"

AAmbientItemSpawner::AAmbientItemSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->bAllowRefillWhilePlayerIsLooking = true;
    this->bShowPreviewActors = true;
    this->StaticMesh = (UStaticMeshComponent*)RootComponent;
}

void AAmbientItemSpawner::HandleItemDestroyed(AActor* DestroyedItem) {
}


