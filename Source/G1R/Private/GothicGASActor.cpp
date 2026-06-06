#include "GothicGASActor.h"
#include "GothicAbilitySystemComponent.h"
#include "GothicFXComponent.h"

AGothicGASActor::AGothicGASActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AbilitySystem = CreateDefaultSubobject<UGothicAbilitySystemComponent>(TEXT("AbilitySystem"));
    this->m_FXComponent = CreateDefaultSubobject<UGothicFXComponent>(TEXT("GothicFXComponent"));
}

void AGothicGASActor::StopEffect(const FGameplayTag& EffectTag) const {
}

void AGothicGASActor::PlayEffect(const FGameplayTag& EffectTag) const {
}


UGothicFXComponent* AGothicGASActor::GetFXComponent() const {
    return NULL;
}



