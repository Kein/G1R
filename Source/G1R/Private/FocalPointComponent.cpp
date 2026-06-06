#include "FocalPointComponent.h"

UFocalPointComponent::UFocalPointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFocalPointComponent::SetFocalPointComponent(const USceneComponent* NewFocalComponent, EGothicFocusPriority Priority, EGothicFocalPointMode Mode, FName SocketName) {
}

void UFocalPointComponent::SetFocalPoint(const FVector& NewFocalPoint, EGothicFocusPriority Priority, EGothicFocalPointMode Mode) {
}

void UFocalPointComponent::ClearFocalPoint(EGothicFocusPriority Priority) {
}

bool UFocalPointComponent::BP_GetFocalPoint(FVector& OutFocalPoint) const {
    return false;
}


