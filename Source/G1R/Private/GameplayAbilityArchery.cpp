#include "GameplayAbilityArchery.h"
#include "Net/UnrealNetwork.h"

UGameplayAbilityArchery::UGameplayAbilityArchery() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->m_ActivateAbilityOnGranted = true;
    this->m_ArcheryComponent = NULL;
    this->m_AbilitySystemComponent = NULL;
}

void UGameplayAbilityArchery::OnRep_ArcheryComponent() {
}

void UGameplayAbilityArchery::OnQuickBowStringReleased() {
}

void UGameplayAbilityArchery::OnDrawBowStringStarted() {
}

void UGameplayAbilityArchery::OnBowStringReleased() {
}


FGameplayTagContainer UGameplayAbilityArchery::GetOwnedGameplayTags() const {
    return FGameplayTagContainer{};
}




void UGameplayAbilityArchery::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGameplayAbilityArchery, m_ArcheryComponent);
}


