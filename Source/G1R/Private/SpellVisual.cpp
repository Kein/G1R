#include "SpellVisual.h"
#include "Templates/SubclassOf.h"

ASpellVisual::ASpellVisual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    //FIXME this->bNeverApplyTickOptimizations = true;
}

AActor* ASpellVisual::SpawnObject(TSubclassOf<AActor> Actor, FVector position, FRotator Rotation) {
    return NULL;
}

void ASpellVisual::OnSpellEndPlay_Implementation() {
}

void ASpellVisual::OnSpellDisplayDebugImGui_Implementation() const {
}


