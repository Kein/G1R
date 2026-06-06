#include "AnimatedInteractiveObjectActor.h"
#include "InteractiveObjectDefinition.h"

AAnimatedInteractiveObjectActor::AAnimatedInteractiveObjectActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_InteractiveObjectDefinition = CreateDefaultSubobject<UInteractiveObjectDefinition>(TEXT("InteractiveObjectDefinition"));
}

void AAnimatedInteractiveObjectActor::BP_PlayAnimationMontage(UAnimMontage* Montage, FName StartSection) {
}

FName AAnimatedInteractiveObjectActor::BP_GetCurrentMontageSection() const {
    return NAME_None;
}


