#include "CinematicCharacter.h"
#include "GothicAbilitySystemComponent.h"

ACinematicCharacter::ACinematicCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilitySystemComponent = CreateDefaultSubobject<UGothicAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
    this->ForceCinematicLOD = false;
}

UAbilitySystemComponent* ACinematicCharacter::GetAbilitySystemComponent() const {
    return NULL;
}


