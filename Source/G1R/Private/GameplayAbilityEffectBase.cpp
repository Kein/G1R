#include "GameplayAbilityEffectBase.h"

UGameplayAbilityEffectBase::UGameplayAbilityEffectBase() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->m_MontageTask = NULL;
    this->m_Montage = NULL;
}

void UGameplayAbilityEffectBase::PlayMontage(UAnimMontage* MontageToPlay, const FName& SectionName, float Rate, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds) {
}

void UGameplayAbilityEffectBase::OnUpdateAbility_Scriptable_Implementation(float DeltaTime) {
}

void UGameplayAbilityEffectBase::OnEndAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& Info, bool WasCancelled) {
}

bool UGameplayAbilityEffectBase::OnCanActivateAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GAActorInfo) const {
    return false;
}

void UGameplayAbilityEffectBase::OnActivateAbilityBeforeAssetPreload_Scriptable_Implementation(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData) {
}

void UGameplayAbilityEffectBase::OnActivateAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData) {
}

void UGameplayAbilityEffectBase::JumpToSection(const FName& SectionName) {
}

void UGameplayAbilityEffectBase::ExecuteSectionMontage(UAnimMontage* Montage, const FName& SectionName) {
}

void UGameplayAbilityEffectBase::DoEndDebuffMontage_Scriptable_Implementation() {
}


