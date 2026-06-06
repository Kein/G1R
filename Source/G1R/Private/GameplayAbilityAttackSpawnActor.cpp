#include "GameplayAbilityAttackSpawnActor.h"
#include "Templates/SubclassOf.h"

UGameplayAbilityAttackSpawnActor::UGameplayAbilityAttackSpawnActor() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->m_PlayMontageTask = NULL;
}

void UGameplayAbilityAttackSpawnActor::ServerSpawnActor_Implementation() {
}

FActiveGameplayEffectHandle UGameplayAbilityAttackSpawnActor::QuickApplyGEToTarget(UAbilitySystemComponent* Target, TSubclassOf<UGameplayEffect> EffectClass, float Duration) {
    return FActiveGameplayEffectHandle{};
}

bool UGameplayAbilityAttackSpawnActor::OnCanActivateAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo) const {
    return false;
}

void UGameplayAbilityAttackSpawnActor::OnActorSpawned_Scriptable_Implementation(AActor* SpawnedActor) {
}

FRotator UGameplayAbilityAttackSpawnActor::GetSpawnRotation_Scriptable_Implementation() {
    return FRotator{};
}

FVector UGameplayAbilityAttackSpawnActor::GetSpawnPosition_Scriptable_Implementation() {
    return FVector{};
}

bool UGameplayAbilityAttackSpawnActor::CanSpawnActor_Scriptable_Implementation() const {
    return false;
}


