#include "OutlineSubsystem.h"

UOutlineSubsystem::UOutlineSubsystem() {
    this->Config = NULL;
}

void UOutlineSubsystem::SetIsSystemEnabled(bool State) {
}

bool UOutlineSubsystem::QueueRemoveOutline(UInteractiveComponent* Interactable) {
    return false;
}

void UOutlineSubsystem::OnActorsInSensorUpdate(const TArray<UInteractiveComponent*>& SightOutlineArray, UInteractiveComponent* ActionOutline) {
}

bool UOutlineSubsystem::GetIsSystemEnabled() {
    return false;
}

void UOutlineSubsystem::ClearOutline() {
}

bool UOutlineSubsystem::AddOutline(UInteractiveComponent* Interactable, EStencilsUsage StencilUsage, bool UseThickOutline) {
    return false;
}


