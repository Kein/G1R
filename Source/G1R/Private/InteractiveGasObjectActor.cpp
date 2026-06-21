#include "InteractiveGasObjectActor.h"
#include "GothicAbilitySystemComponent.h"
#include "GothicFXComponent.h"

AInteractiveGasObjectActor::AInteractiveGasObjectActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OnOverlapGameplayEffectClass = NULL;
    this->m_FXComponent = CreateDefaultSubobject<UGothicFXComponent>(TEXT("FXComponent"));
    this->m_AbilitySystemComponent = CreateDefaultSubobject<UGothicAbilitySystemComponent>(TEXT("m_AbilitySystemComponent"));
    this->m_FXComponent->SetupAttachment(RootComponent);
}

void AInteractiveGasObjectActor::SetLit(bool mustLit, bool isPlayer) {
}

void AInteractiveGasObjectActor::OnImpact() {
}

void AInteractiveGasObjectActor::NetMulticast_SetLit_Implementation(bool mustLit, bool isPlayer) {
}

UAbilitySystemComponent* AInteractiveGasObjectActor::GetAbilitySystemComponent() const {
    return NULL;
}

void AInteractiveGasObjectActor::CanSetOnFire(bool canSet) {
}

bool AInteractiveGasObjectActor::CanReceiveImpact_Implementation() const {
    return false;
}


