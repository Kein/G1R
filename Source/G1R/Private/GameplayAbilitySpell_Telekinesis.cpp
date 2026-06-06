#include "GameplayAbilitySpell_Telekinesis.h"
#include "Net/UnrealNetwork.h"

UGameplayAbilitySpell_Telekinesis::UGameplayAbilitySpell_Telekinesis() {
    this->AbilityTriggers.AddDefaulted(1);
    this->m_InteractSensor = NULL;
    this->m_TelekinesisInteractAbility = NULL;
    this->m_MaxOscillationDistance = 500.00f;
    this->m_MinOscillationDistance = 120.00f;
    this->m_IsDoingInteractAction = false;
    this->m_TelekinesisItemMovementVisual = NULL;
    this->m_InteractiveComponent = NULL;
    this->m_TelekinesisVisualsComponent = NULL;
}



bool UGameplayAbilitySpell_Telekinesis::ShouldDetachFromOwner_Scriptable_Implementation() {
    return false;
}

void UGameplayAbilitySpell_Telekinesis::PickUpItem() {
}


void UGameplayAbilitySpell_Telekinesis::OnItemPicked(FGameplayEventData Payload) {
}





UInteractSensor* UGameplayAbilitySpell_Telekinesis::GetInteractSensor() {
    return NULL;
}





void UGameplayAbilitySpell_Telekinesis::DoAutomaticInteraction() {
}


void UGameplayAbilitySpell_Telekinesis::DoActivateAbility() {
}

void UGameplayAbilitySpell_Telekinesis::ClientPlayPickUpEndMontage_Implementation() {
}

void UGameplayAbilitySpell_Telekinesis::ClearInteractableBehaviours() {
}

bool UGameplayAbilitySpell_Telekinesis::AvoidRestoreTargetGravity_Scriptable_Implementation() {
    return false;
}

void UGameplayAbilitySpell_Telekinesis::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGameplayAbilitySpell_Telekinesis, m_IsDoingInteractAction);
    DOREPLIFETIME(UGameplayAbilitySpell_Telekinesis, m_TelekinesisItemMovementVisual);
}


