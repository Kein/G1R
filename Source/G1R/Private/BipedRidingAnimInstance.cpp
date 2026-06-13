#include "BipedRidingAnimInstance.h"

UBipedRidingAnimInstance::UBipedRidingAnimInstance() {
}

void UBipedRidingAnimInstance::UpdateRideableMotion_ThreadSafe(float DeltaTime) {
}

void UBipedRidingAnimInstance::OnRidingStart(AGothicCharacter* mountCharacter) {
}

void UBipedRidingAnimInstance::OnRidingEnd() {
}

void UBipedRidingAnimInstance::OnPlayerStateSet(APlayerState* newPlayerState, APlayerState* oldPlayerState) {
}

UDataModule_Locomotion* UBipedRidingAnimInstance::GetMountDataModuleLocomotion() const {
    return NULL;
}

AGothicCharacter* UBipedRidingAnimInstance::GetMountCharacter() const {
    return NULL;
}


