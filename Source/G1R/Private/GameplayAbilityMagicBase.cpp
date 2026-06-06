#include "GameplayAbilityMagicBase.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UGameplayAbilityMagicBase::UGameplayAbilityMagicBase() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->m_TickEnabled = true;
    this->m_bCanEverTick = true;
    this->m_AbilityHasBlockMovement = false;
    this->m_IgnoreReleaseInput = 0.00f;
    this->m_GE_Mana = NULL;
    this->m_EndAbilityTimeoutDelay = 5.00f;
}

bool UGameplayAbilityMagicBase::WasTargetObtainedByTargetDatamodule() {
    return false;
}

bool UGameplayAbilityMagicBase::ShouldForceIgnoreInput_Scriptable_Implementation() {
    return false;
}

void UGameplayAbilityMagicBase::ReleaseTarget() {
}

void UGameplayAbilityMagicBase::RedirectToTarget_Internal(AActor* Actor) {
}

void UGameplayAbilityMagicBase::RedirectToTarget(AActor* Actor) {
}


FActiveGameplayEffectHandle UGameplayAbilityMagicBase::QuickApplyGEToTarget(UAbilitySystemComponent* Target, TSubclassOf<UGameplayEffect> EffectClass, float Duration) {
    return FActiveGameplayEffectHandle{};
}

void UGameplayAbilityMagicBase::PlayLaunchSpellMontage(const FName& SectionName, bool ShouldStopWhenAbilityEnds, bool forceCreateNewTask, float AnimationRateScale) const {
}

void UGameplayAbilityMagicBase::PlayCastMontage(const FName& SectionName, bool ShouldStopWhenAbilityEnds, bool forceCreateNewTask) const {
}

void UGameplayAbilityMagicBase::PlayCancelCastMontage(const FName& SectionName, bool ShouldStopWhenAbilityEnds, bool forceCreateNewTask, float AnimationRateScale) const {
}

void UGameplayAbilityMagicBase::OnTargetValidated_Scriptable_Implementation(AActor* Actor) {
}

bool UGameplayAbilityMagicBase::OnShouldFinishSpellAfterActivation_Scriptable_Implementation() {
    return false;
}

void UGameplayAbilityMagicBase::OnOutMana_Scriptable_Implementation() {
}

void UGameplayAbilityMagicBase::OnActivateAbilityBeforeAssetPreload_Scriptable_Implementation(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData) {
}

bool UGameplayAbilityMagicBase::IsTargetValid_Script_Implementation(AActor* SourceActor, AActor* TargetActor) const {
    return false;
}

bool UGameplayAbilityMagicBase::IsTargetValid(AActor* Actor) {
    return false;
}

bool UGameplayAbilityMagicBase::IsSpellTargetTypeFocused() const {
    return false;
}

bool UGameplayAbilityMagicBase::IsSpellTargetTypeDynamic() const {
    return false;
}

bool UGameplayAbilityMagicBase::IsSpellManaUsageTargetLevel() const {
    return false;
}

bool UGameplayAbilityMagicBase::IsSpellManaUsageRechargeable() const {
    return false;
}

bool UGameplayAbilityMagicBase::IsSpellManaUsageNormalContinuous() const {
    return false;
}

bool UGameplayAbilityMagicBase::IsSpellManaUsageContinuous() const {
    return false;
}

bool UGameplayAbilityMagicBase::IsSpellAbilityActive() {
    return false;
}

bool UGameplayAbilityMagicBase::IsOwnerActorAuthoritative() {
    return false;
}

bool UGameplayAbilityMagicBase::IsOverridingGetStateLockMovementOnSpell_Scriptable_Implementation() {
    return false;
}

bool UGameplayAbilityMagicBase::IsOverridingGetStateLockMovementOnCast_Scriptable_Implementation() {
    return false;
}

bool UGameplayAbilityMagicBase::IsLastSpellLevel() const {
    return false;
}

bool UGameplayAbilityMagicBase::IsInputPressed() const {
    return false;
}

bool UGameplayAbilityMagicBase::IsFinishCastAbilityByAnimNotifyOnLaunchSpell() {
    return false;
}

bool UGameplayAbilityMagicBase::IsCastAbilityActive() {
    return false;
}

void UGameplayAbilityMagicBase::IncrementCurrentSpellLevel() {
}

bool UGameplayAbilityMagicBase::HasMoreLaunches() {
    return false;
}

bool UGameplayAbilityMagicBase::HasInfiniteLaunches() {
    return false;
}

bool UGameplayAbilityMagicBase::HasEndLaunchAnimation() {
    return false;
}



AActor* UGameplayAbilityMagicBase::GetTargetOrOwner() const {
    return NULL;
}

FGameplayEventData UGameplayAbilityMagicBase::GetTargetEventData_Scriptable_Implementation(AActor* Actor) {
    return FGameplayEventData{};
}

AActor* UGameplayAbilityMagicBase::GetTarget() const {
    return NULL;
}

float UGameplayAbilityMagicBase::GetSpellManaCostPerSecond() const {
    return 0.0f;
}

int32 UGameplayAbilityMagicBase::GetSpellLevels() const {
    return 0;
}

FSpellContext UGameplayAbilityMagicBase::GetSpellContextRef() {
    return FSpellContext{};
}

USpellConfigurationContainer* UGameplayAbilityMagicBase::GetSpellConfigurationContainer() const {
    return NULL;
}

float UGameplayAbilityMagicBase::GetSpellAreaRange() const {
    return 0.0f;
}

float UGameplayAbilityMagicBase::GetSpellAreaAngle() const {
    return 0.0f;
}

bool UGameplayAbilityMagicBase::GetOverrideGetStateLockMovementOnSpell_Scriptable_Implementation() {
    return false;
}

bool UGameplayAbilityMagicBase::GetOverrideGetStateLockMovementOnCast_Scriptable_Implementation() {
    return false;
}

TSubclassOf<USpellConfigLevelData> UGameplayAbilityMagicBase::GetLevelSpawnActorClassServer() const {
    return NULL;
}

float UGameplayAbilityMagicBase::GetLevelCastingTime() const {
    return 0.0f;
}

AActor* UGameplayAbilityMagicBase::GetFocusedTarget_Scriptable_Implementation(AActor* AvatarActor) const {
    return NULL;
}


TArray<AActor*> UGameplayAbilityMagicBase::GetCustomTarget_Scriptable_Implementation(AActor* SourceActor, float TraceRange, float TraceRadius, TSubclassOf<AActor> FilterClass) const {
    return TArray<AActor*>();
}

int32 UGameplayAbilityMagicBase::GetCurrentSpellLevel() const {
    return 0;
}

float UGameplayAbilityMagicBase::GetCurrentMontageRemainingTime_Scriptable_Implementation() {
    return 0.0f;
}

TSubclassOf<UGameplayEffect> UGameplayAbilityMagicBase::GetConsumeManaGE_Scriptable_Implementation() {
    return NULL;
}

float UGameplayAbilityMagicBase::GetCastManaCost() const {
    return 0.0f;
}

bool UGameplayAbilityMagicBase::GetCancelSpellAfterFirstCharge() {
    return false;
}

void UGameplayAbilityMagicBase::FindTargetsInArea_Server(TArray<AActor*>& Targets, FVector AreaLocation, FVector AreaForward, float areaRange, float AreaAngle, AActor* SourceActor) {
}

void UGameplayAbilityMagicBase::DecrementCurrentSpellLevel() {
}

void UGameplayAbilityMagicBase::DeactivateTarget_Internal() {
}

void UGameplayAbilityMagicBase::DeactivateTarget() {
}

void UGameplayAbilityMagicBase::ClientRedirectToTarget_Implementation(AActor* Actor) {
}

void UGameplayAbilityMagicBase::ClientOutOfMana_Implementation() {
}

void UGameplayAbilityMagicBase::ClientDeactivateTarget_Implementation() {
}

void UGameplayAbilityMagicBase::ClientActivateTarget_Implementation(AActor* Actor) {
}

void UGameplayAbilityMagicBase::CheckNumLaunches() {
}

void UGameplayAbilityMagicBase::ApplyManaEffect(float ManaValue, float Duration, TSubclassOf<UGameplayEffect> GameplayEffectClass) {
}

void UGameplayAbilityMagicBase::ActivateTarget_Interal(AActor* Actor) {
}

void UGameplayAbilityMagicBase::ActivateTarget(AActor* Actor) {
}

void UGameplayAbilityMagicBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGameplayAbilityMagicBase, m_IgnoreReleaseInput);
}


