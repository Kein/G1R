#include "ClientAuthoritativeCharacter.h"
#include "ClientAuthoritativeCharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"

AClientAuthoritativeCharacter::AClientAuthoritativeCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UClientAuthoritativeCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->bHasOverrideRootMotion = false;
}

void AClientAuthoritativeCharacter::ClientAuthoritativeMove_Implementation(const FClientAuthoritativeMoveData& MoveData) {
}

void AClientAuthoritativeCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AClientAuthoritativeCharacter, bHasOverrideRootMotion);
}


