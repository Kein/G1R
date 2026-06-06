#include "GothicAmbientSoundActor.h"
#include "GothicAudioComponent.h"

AGothicAmbientSoundActor::AGothicAmbientSoundActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UGothicAudioComponent>(TEXT("FMODAudioComponent0"))) {
    this->AudioComponent = (UFMODAudioComponent*)RootComponent;
}


