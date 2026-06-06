#include "GameplayAbilityCastSpell.h"
#include "Net/UnrealNetwork.h"

UGameplayAbilityCastSpell::UGameplayAbilityCastSpell() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->AbilityTriggers.AddDefaulted(1);
    this->m_TickEnabled = false;
    this->m_FinishOnInputReleased = true;
    this->m_HasCreatedSpellAbilityServer = false;
    this->m_AbilitySystemComponent = NULL;
    this->m_SpellConfigurationContainerClass = NULL;
    this->m_SpellConfigurationContainer = NULL;
    this->m_ExecutionValidator = NULL;
}

void UGameplayAbilityCastSpell::ServerClearMontageTaskDelegates_Implementation(bool WasCancelled) {
}






void UGameplayAbilityCastSpell::OnManaConsumedOnServer(const FGameplayEffectRemovalInfo& Info) {
}


void UGameplayAbilityCastSpell::OnFailCastSpellMontageInterrupted() {
}

void UGameplayAbilityCastSpell::OnFailCastSpellMontageCompleted() {
}

void UGameplayAbilityCastSpell::OnFailCastSpellMontageCancelled() {
}


void UGameplayAbilityCastSpell::OnDisableCancel() {
}

void UGameplayAbilityCastSpell::OnCastSpellMontageInterrupted() {
}

void UGameplayAbilityCastSpell::OnCastSpellMontageCompleted() {
}

void UGameplayAbilityCastSpell::OnCastSpellMontageCancelled() {
}

void UGameplayAbilityCastSpell::OnCastEndSpellMontageInterrupted() {
}

void UGameplayAbilityCastSpell::OnCastEndSpellMontageCancelled() {
}

bool UGameplayAbilityCastSpell::OnCanActivateAbilityServer_Scriptable_Implementation(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo) const {
    return false;
}


bool UGameplayAbilityCastSpell::NeedUseManaToCast_Scriptable_Implementation() const {
    return false;
}

bool UGameplayAbilityCastSpell::NeedItemInHand_Scriptable_Implementation() const {
    return false;
}


bool UGameplayAbilityCastSpell::IsCastingToCancelPreviousSpell_Scriptable_Implementation() {
    return false;
}

bool UGameplayAbilityCastSpell::HasCreatedSpellAbilityServer() {
    return false;
}

float UGameplayAbilityCastSpell::GetCastSectionDuration(const FName& SectionName) const {
    return 0.0f;
}


void UGameplayAbilityCastSpell::FinishCastAfterLaunchSpell() {
}

bool UGameplayAbilityCastSpell::ExecuteValidator(USpellExecutionValidatorData* ExecutionValidatorData) const {
    return false;
}

void UGameplayAbilityCastSpell::DoActivateAbility() {
}

void UGameplayAbilityCastSpell::ConsumeManaServer() {
}

void UGameplayAbilityCastSpell::ClientSpellLaunched_Implementation() {
}

void UGameplayAbilityCastSpell::ClientPlayLaunch_Implementation() {
}

void UGameplayAbilityCastSpell::ClientPlayFailCastMontage_Implementation() {
}

void UGameplayAbilityCastSpell::ClientPlayCancelCastMontage_Implementation() {
}

void UGameplayAbilityCastSpell::ClientClearMontageTaskDelegates_Implementation(bool WasCancelled) {
}

bool UGameplayAbilityCastSpell::CanLaunchSpellAbilityServer_Scriptable_Implementation() {
    return false;
}

void UGameplayAbilityCastSpell::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGameplayAbilityCastSpell, m_HasCreatedSpellAbilityServer);
}


