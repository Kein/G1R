#include "CharacterCanTransformInto.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"

ACharacterCanTransformInto::ACharacterCanTransformInto(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoPossessAI = EAutoPossessAI::Disabled;
    this->AIControllerClass = NULL;
    this->m_DataModuleComponent = NULL;
    this->m_AnimMontage = NULL;
    this->m_FromCharacter = NULL;
    this->m_ToCharacter = NULL;
    this->m_Montage = NULL;
}

void ACharacterCanTransformInto::TransformFrom(AGothicCharacter* fromCharacter, AGothicCharacter* toCharacter, float InitialDelay, float Duration, UAnimMontage* Montage) {
}

void ACharacterCanTransformInto::OnUntransformMontageBlendInEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void ACharacterCanTransformInto::OnTransformMontageBlendInEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void ACharacterCanTransformInto::OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController) {
}

void ACharacterCanTransformInto::MulticastTransformationVisuals_Implementation(AGothicCharacter* fromCharacter, AGothicCharacter* toCharacter, UAnimMontage* Montage) {
}

void ACharacterCanTransformInto::MulticastStartCameraTravelBeforePossess_Implementation(AGothicCharacter* fromCharacter, AGothicCharacter* toCharacter, float InitialDelay, float Duration) {
}

void ACharacterCanTransformInto::MulticastSaveTransformData_Implementation(AGothicCharacter* fromCharacter, AGothicCharacter* toCharacter, float InitialDelay, float Duration, UAnimMontage* Montage) {
}

void ACharacterCanTransformInto::MulticastEnterUntransformingState_Implementation() {
}


void ACharacterCanTransformInto::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACharacterCanTransformInto, m_SpawnDefinition);
}


