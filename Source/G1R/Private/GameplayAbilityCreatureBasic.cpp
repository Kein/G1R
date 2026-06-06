#include "GameplayAbilityCreatureBasic.h"

UGameplayAbilityCreatureBasic::UGameplayAbilityCreatureBasic() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerOnly;
}

void UGameplayAbilityCreatureBasic::UnregisterGameplayAttributeEvent(const FGameplayAttribute& Attribute) const {
}

bool UGameplayAbilityCreatureBasic::RegisterGameplayAttributeEvent(const FGameplayAttribute& Attribute) {
    return false;
}

void UGameplayAbilityCreatureBasic::OnUpdateAbility_Scriptable_Implementation(float DeltaTime) {
}

void UGameplayAbilityCreatureBasic::OnEndAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo, bool WasCancelled) {
}

bool UGameplayAbilityCreatureBasic::OnCanActivateAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo) const {
    return false;
}

void UGameplayAbilityCreatureBasic::OnAttributeValueChanged_Scriptable_Implementation(const FGameplayAttribute& Attribute, float OldValue, float NewValue) {
}

void UGameplayAbilityCreatureBasic::OnActorSpawnedServer_Scriptable_Implementation(AActor* ActorSpawned) {
}

void UGameplayAbilityCreatureBasic::OnActivateAbilityBeforeAssetPreload_Scriptable_Implementation(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData) {
}

void UGameplayAbilityCreatureBasic::OnActivateAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData) {
}

FRotator UGameplayAbilityCreatureBasic::GetSpawnRotationServer_Scriptable_Implementation(AGothicCharacter* Owner, UClass* actorToSpawnClass) const {
    return FRotator{};
}

FVector UGameplayAbilityCreatureBasic::GetSpawnPositionServer_Scriptable_Implementation(AGothicCharacter* Owner, UClass* actorToSpawnClass) const {
    return FVector{};
}

UClass* UGameplayAbilityCreatureBasic::GetSpawnActorClassServer_Scriptable_Implementation() const {
    return NULL;
}

void UGameplayAbilityCreatureBasic::DoSpawnStateActorServer() {
}

void UGameplayAbilityCreatureBasic::ClearAbility() {
}


