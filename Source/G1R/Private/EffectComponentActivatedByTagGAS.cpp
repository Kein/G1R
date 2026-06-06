#include "EffectComponentActivatedByTagGAS.h"

UEffectComponentActivatedByTagGAS::UEffectComponentActivatedByTagGAS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UEffectComponentBase* UEffectComponentActivatedByTagGAS::SpawnEffectStateComponent_Scriptable_Implementation(UObject* OuterActor, UClass* VisualActorClass) const {
    return NULL;
}


