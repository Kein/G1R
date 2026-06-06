#include "GameplayAbilitySpellBasic.h"

UGameplayAbilitySpellBasic::UGameplayAbilitySpellBasic() {
    this->bReplicateInputDirectly = true;
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->m_SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
}

void UGameplayAbilitySpellBasic::SpawnSpellServer() {
}

void UGameplayAbilitySpellBasic::SetRuneAsSpellItem(AActor* Actor) {
}

void UGameplayAbilitySpellBasic::Server_InputReleased_Internal_Implementation() {
}

void UGameplayAbilitySpellBasic::OnLaunchSpellMontageInterrupted() {
}

void UGameplayAbilitySpellBasic::OnLaunchSpellMontageCompleted() {
}

void UGameplayAbilitySpellBasic::OnLaunchSpellMontageCancelled() {
}


void UGameplayAbilitySpellBasic::OnCustomLaunchSpellMontageInterrupted() {
}

void UGameplayAbilitySpellBasic::OnCustomLaunchSpellMontageCompleted() {
}

void UGameplayAbilitySpellBasic::OnCustomLaunchSpellMontageCancelled() {
}

bool UGameplayAbilitySpellBasic::OnCanActivateAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo) const {
    return false;
}



void UGameplayAbilitySpellBasic::OnActivateAbilitySyncEnd() {
}

void UGameplayAbilitySpellBasic::NotifySpellCategory() {
}

FRotator UGameplayAbilitySpellBasic::GetSpawnRotationServer_Scriptable_Implementation(AGothicCharacter* Owner, UClass* actorToSpawnClass) const {
    return FRotator{};
}



void UGameplayAbilitySpellBasic::DoSpellBehaviour_Scriptable_Implementation() {
}

void UGameplayAbilitySpellBasic::DoOnActivateAbilitySyncEnd_Scriptable_Implementation() {
}

void UGameplayAbilitySpellBasic::DoEndSpellAction() {
}

void UGameplayAbilitySpellBasic::Client_StopAllMagicAbilitiesMontages_Implementation() {
}

void UGameplayAbilitySpellBasic::Client_PlayFailLaunchMontage_Implementation() {
}


