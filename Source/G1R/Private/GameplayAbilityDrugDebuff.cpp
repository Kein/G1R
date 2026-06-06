#include "GameplayAbilityDrugDebuff.h"

UGameplayAbilityDrugDebuff::UGameplayAbilityDrugDebuff() {
    this->ReplicationPolicy = EGameplayAbilityReplicationPolicy::ReplicateYes;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
    this->m_AttributeSetClass = NULL;
    this->m_DepletionGEClass = NULL;
    this->m_SwimmingDepletionGEClass = NULL;
    this->m_ResetDrugAttribute = NULL;
    this->m_CurrentDrugDebuffGEClass = NULL;
    this->m_DebuffStateGEClass = NULL;
    this->m_PlayMontageTask = NULL;
    this->m_DrunkAffectAlpha = 0.60f;
    this->m_DrunkStrengthDegrees = 65.00f;
    this->m_NoiseFrequency = 0.60f;
    this->m_SmoothInterpSpeed = 2.50f;
    this->m_DrunkAffectAimingAlpha = 0.80f;
    this->m_DrunkStrengthDegreesCamera = 25.00f;
    this->m_NoiseFrequencyCameraPitch = 0.80f;
    this->m_NoiseFrequencyCameraYaw = 0.50f;
    this->m_SmoothInterpSpeedCamera = 0.25f;
    this->m_ShouldNotifyConsumeItem = false;
}

void UGameplayAbilityDrugDebuff::UpdateAnimBP() {
}

void UGameplayAbilityDrugDebuff::ResetDrugAttribute_Implementation() {
}

void UGameplayAbilityDrugDebuff::PlayMontageTask(TSoftObjectPtr<UAnimMontage> Montage) {
}

void UGameplayAbilityDrugDebuff::OnUpdateAbility_Scriptable_Implementation(float DeltaTime) {
}

void UGameplayAbilityDrugDebuff::OnEndAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo, bool WasCancelled) {
}

void UGameplayAbilityDrugDebuff::OnConsumeItem_Scriptable_Implementation(const FItemVirtualData& ItemVirtualData) {
}

void UGameplayAbilityDrugDebuff::OnConsumeItem(const FItemVirtualData& ItemVirtualData) {
}

void UGameplayAbilityDrugDebuff::OnCompleted() {
}

bool UGameplayAbilityDrugDebuff::OnCanActivateAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GameplayAbilityActorInfo) const {
    return false;
}

void UGameplayAbilityDrugDebuff::OnAttributeIncreased_Scriptable_Implementation() {
}

void UGameplayAbilityDrugDebuff::OnApplyThresholdEffect_Implementation(UDrugDebuffThreshold* NewThreshold) {
}

void UGameplayAbilityDrugDebuff::OnActivateAbilityBeforeAssetPreload_Scriptable_Implementation(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData) {
}

void UGameplayAbilityDrugDebuff::OnActivateAbility_Scriptable_Implementation(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData) {
}

void UGameplayAbilityDrugDebuff::DrunkMovementInput() {
}

void UGameplayAbilityDrugDebuff::DrunkControllerInput() {
}

void UGameplayAbilityDrugDebuff::ActivateDepletionGE() {
}


