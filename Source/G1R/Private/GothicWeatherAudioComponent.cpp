#include "GothicWeatherAudioComponent.h"
#include "GothicAudioComponent.h"

UGothicWeatherAudioComponent::UGothicWeatherAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WindAudio = CreateDefaultSubobject<UGothicAudioComponent>(TEXT("WindAudio"));
    this->RainAudio = CreateDefaultSubobject<UGothicAudioComponent>(TEXT("RainAudio"));
    this->ThunderAudioMaxDistance = 10000.00f;
    this->EasingDuration = 5.00f;
    this->OcclusionEasingDuration = 5.00f;
}

void UGothicWeatherAudioComponent::PlayThunderSounds(const FVector& Location, float EchoDelayMin, float EchoDelayMax) {
}


