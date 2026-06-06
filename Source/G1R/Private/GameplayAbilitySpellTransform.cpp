#include "GameplayAbilitySpellTransform.h"
#include "Net/UnrealNetwork.h"

UGameplayAbilitySpellTransform::UGameplayAbilitySpellTransform() {
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->m_TickEnabled = false;
    this->m_SpawnDefinition = NULL;
    this->m_SpawnCreatureDistance = 100.00f;
    this->m_WaitingForEndUntransformEventTask = NULL;
    this->m_UnTransformPlayMontageTask = NULL;
    this->m_CameraModifier = NULL;
}

void UGameplayAbilitySpellTransform::OnUnTransformPlayMontageBlendInEnded() {
}

void UGameplayAbilitySpellTransform::OnTransformFinished(FGameplayEventData Payload) {
}

void UGameplayAbilitySpellTransform::OnTransformedCharacterGameplayIsReady() {
}

void UGameplayAbilitySpellTransform::OnSync() {
}

void UGameplayAbilitySpellTransform::OnPossessedPawnChanged(APawn* OldPawn, APawn* NewPawn) {
}

void UGameplayAbilitySpellTransform::OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController) {
}

void UGameplayAbilitySpellTransform::MulticastPlayUnTransformMontage_Implementation() {
}

void UGameplayAbilitySpellTransform::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGameplayAbilitySpellTransform, m_NewCharacter);
}


