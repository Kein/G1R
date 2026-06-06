#include "GothicNiagaraActor.h"
#include "GothicNiagaraAudioComponent.h"

AGothicNiagaraActor::AGothicNiagaraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AudioComponent = CreateDefaultSubobject<UGothicNiagaraAudioComponent>(TEXT("AudioComponent"));
    this->AudioComponent->SetupAttachment(RootComponent);
}


