#include "GameplayAbilitySpellTargetable.h"

UGameplayAbilitySpellTargetable::UGameplayAbilitySpellTargetable() {
    this->m_TickEnabled = false;
    this->m_Target = NULL;
    this->m_TargetConfig = NULL;
    this->m_RequestDoEndSpellAction = false;
}

AActor* UGameplayAbilitySpellTargetable::SpawnObject(UClass* Actor, FVector position, FRotator Rotation) {
    return NULL;
}

bool UGameplayAbilitySpellTargetable::ShouldEndSpell_Scriptable_Implementation() {
    return false;
}

void UGameplayAbilitySpellTargetable::PlayLaunchSpell_Scriptable_Implementation() {
}

void UGameplayAbilitySpellTargetable::PlayEndAbilityMontages() {
}

void UGameplayAbilitySpellTargetable::OnUpdateSpell_Scriptable_Implementation(float DeltaTime) {
}

void UGameplayAbilitySpellTargetable::OnReleaseTarget_Scriptable_Implementation(AActor* Entity, AActor* Target) {
}

void UGameplayAbilitySpellTargetable::OnReleaseTarget(AActor* Entity, AActor* Target) {
}

void UGameplayAbilitySpellTargetable::OnNewTarget_Scriptable_Implementation(AActor* NewTarget) {
}

void UGameplayAbilitySpellTargetable::OnLaunchSpellAnimNotify_Scriptable_Implementation() {
}

bool UGameplayAbilitySpellTargetable::IsTargetVisibleOnServer_Scriptable_Implementation() {
    return false;
}

bool UGameplayAbilitySpellTargetable::IsTargetVisibleOnServer_Implementation() {
    return false;
}

bool UGameplayAbilitySpellTargetable::IsTargetDefeated() {
    return false;
}

bool UGameplayAbilitySpellTargetable::IsTargetDead() {
    return false;
}

void UGameplayAbilitySpellTargetable::DoOnActivateAbility() {
}

void UGameplayAbilitySpellTargetable::ClientPlayEndSpellMontage_Implementation() {
}

void UGameplayAbilitySpellTargetable::ClearReleaseTargetDelegate() {
}

bool UGameplayAbilitySpellTargetable::CanDoEndSpellAction_Scriptable_Implementation() {
    return false;
}

void UGameplayAbilitySpellTargetable::BindTriggerBeginOnTag(FGameplayTag TriggerBeginOnSpellTag) {
}


