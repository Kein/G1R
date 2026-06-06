#include "GothicCinematicActorComponent.h"

UGothicCinematicActorComponent::UGothicCinematicActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_Character = NULL;
    this->m_Controller = NULL;
    this->m_TransitionWidgetClass = NULL;
    this->m_CinematicManagerSubsystem = NULL;
    this->m_CameraFade = NULL;
    this->m_HUDCinematicController = NULL;
}

void UGothicCinematicActorComponent::OnSequencerFinished() {
}

void UGothicCinematicActorComponent::OnFadeOutFinished() {
}

void UGothicCinematicActorComponent::OnFadeInFinished() {
}

void UGothicCinematicActorComponent::Client_PlayCinematic_Implementation() {
}

void UGothicCinematicActorComponent::Client_LastFadeOut_Implementation(const FAbilityTaskCameraFadeSetup& FadeConfiguration) {
}

void UGothicCinematicActorComponent::Client_FirstFadeIn_Implementation(const FAbilityTaskCameraFadeSetup& FadeConfiguration) {
}


