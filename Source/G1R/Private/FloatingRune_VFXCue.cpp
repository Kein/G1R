#include "FloatingRune_VFXCue.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Net/UnrealNetwork.h"

AFloatingRune_VFXCue::AFloatingRune_VFXCue(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->m_ItemVisual = NULL;
    this->m_RotatingMovementComp = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("Rotating Movement"));
}

void AFloatingRune_VFXCue::SpawnItemVisual(AGothicCharacter* CharacterToAttach) {
}

void AFloatingRune_VFXCue::OnStartRecoveringRune_Implementation(float totalCastingTime) {
}

void AFloatingRune_VFXCue::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFloatingRune_VFXCue, m_ItemVisual);
}


