#include "GothicSpectatorPawn.h"
#include "GothicAbilitySystemComponent.h"

AGothicSpectatorPawn::AGothicSpectatorPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_AbilitySystemComponent = CreateDefaultSubobject<UGothicAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
}


