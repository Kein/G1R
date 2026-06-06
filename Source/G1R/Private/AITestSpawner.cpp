#include "AITestSpawner.h"
#include "Components/ChildActorComponent.h"
#include "Components/SkeletalMeshComponent.h"

AAITestSpawner::AAITestSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("PreviewCharacterActor"));
    this->bEnable = true;
    this->CharacterKind = NULL;
    this->DailyRoutine = NULL;
    this->PreviewCharacterActorComponent = (UChildActorComponent*)RootComponent;
    this->OldRootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SceneComponent"));
}

void AAITestSpawner::SpawnCharacter() {
}


