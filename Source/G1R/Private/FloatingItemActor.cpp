#include "FloatingItemActor.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Net/UnrealNetwork.h"

AFloatingItemActor::AFloatingItemActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ItemVisual = NULL;
    this->m_RotatingMovementComp = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("Rotating Movement"));
    this->m_ItemVisualRotatingMovementComp = NULL;
    this->m_TargetMesh = NULL;
    this->m_DataModule_Animation = NULL;
}

void AFloatingItemActor::StopInmediate_Implementation() {
}

void AFloatingItemActor::RestoreItemInHand() {
}

void AFloatingItemActor::OnStartRecoveringRune_Multicast_Implementation(float totalCastingTime) {
}

void AFloatingItemActor::OnStartRecoveringRune_Implementation(float totalCastingTime) {
}

void AFloatingItemActor::OnLaunchSpellOnServer_Scriptable_Implementation() {
}

void AFloatingItemActor::OnLaunchSpellOnServer_Implementation() {
}


void AFloatingItemActor::ObtainItemVisualFromCarryComponent(AGothicCharacter* GothicCharacter) {
}

void AFloatingItemActor::MulticastCancelSpell_Implementation() {
}

void AFloatingItemActor::DetachItemVisualFromOwner() {
}

void AFloatingItemActor::DeactivateItemRotatingMovement() {
}



void AFloatingItemActor::AttachItemVisualToTarget(FName Name, EAttachmentRule AttachmentRule, bool bInWeldSimulatedBodies) {
}

void AFloatingItemActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFloatingItemActor, m_ItemVisual);
    DOREPLIFETIME(AFloatingItemActor, m_TargetMesh);
    DOREPLIFETIME(AFloatingItemActor, m_DataModule_Animation);
}


