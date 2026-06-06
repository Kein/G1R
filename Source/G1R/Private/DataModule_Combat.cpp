#include "DataModule_Combat.h"
#include "Net/UnrealNetwork.h"

UDataModule_Combat::UDataModule_Combat() {
    this->m_CurrentRangedState = ERangedWeaponState::Idle;
    this->m_Stance = ECombatStance::Idle;
    this->m_DesiredStance = ECombatStance::Idle;
    this->m_AttackState = EAttackState::None;
    this->m_LastAttackerCharacter = NULL;
    this->m_CurrentCombo = NULL;
    this->m_AttackCount = 0;
}

void UDataModule_Combat::SetLastAttackerCharacter(AGothicCharacter* newCharacter) {
}

void UDataModule_Combat::Server_SetStance_Implementation(ECombatStance stance) {
}

void UDataModule_Combat::Server_SetDesiredStance_Implementation(ECombatStance DesiredStance) {
}

void UDataModule_Combat::Server_SetDefeatingAttackDirection_Implementation(FGameplayTag DefeatingAttackDirection) {
}

void UDataModule_Combat::Server_SetCurrentParryDirection_Implementation(FGameplayTag CurrentParryDirection) {
}

void UDataModule_Combat::Server_SetCurrentAttackDirection_Implementation(FGameplayTag CurrentAttackDirection) {
}

void UDataModule_Combat::Server_SetBlockState_Implementation(FGameplayTag BlockState) {
}

void UDataModule_Combat::Server_SetAttackState_Implementation(EAttackState AttackState) {
}

void UDataModule_Combat::SeLastTauntTags(FGameplayTagContainer& LastTauntTags) {
}

void UDataModule_Combat::ResetAttackCount() {
}

void UDataModule_Combat::OnRepStanceChanged() {
}

void UDataModule_Combat::OnRepBlockState() {
}

void UDataModule_Combat::OnRepAttackState() {
}

void UDataModule_Combat::OnRepAttackDirection() {
}

void UDataModule_Combat::IncreaseAttackCount() {
}

FVector UDataModule_Combat::GetTargetClosestHurtCollisionPoint(AGothicCharacter* Target) {
    return FVector{};
}

ECombatStance UDataModule_Combat::GetStance() const {
    return ECombatStance::Idle;
}

float UDataModule_Combat::GetNextAttacksRangeInPlace(FGameplayTag AttackDirection) const {
    return 0.0f;
}

float UDataModule_Combat::GetNextAttacksRange(FGameplayTag AttackDirection) const {
    return 0.0f;
}

UComboAttackConfig* UDataModule_Combat::GetNextAttackConfig(FGameplayTag AttackDirection) const {
    return NULL;
}

UHurtBoxCollisionComponent* UDataModule_Combat::GetMagnetTargetHurtComponent() const {
    return NULL;
}

USceneComponent* UDataModule_Combat::GetMagnetTarget() const {
    return NULL;
}

FVector UDataModule_Combat::GetMagnetDamagePoint() const {
    return FVector{};
}

FVector UDataModule_Combat::GetMagnetDamagePivotPoint() const {
    return FVector{};
}

FGameplayTagContainer UDataModule_Combat::GetLastTauntTags() {
    return FGameplayTagContainer{};
}

AGothicCharacter* UDataModule_Combat::GetLastAttackerCharacter() const {
    return NULL;
}

float UDataModule_Combat::GetHigherAttackRange(const UWeaponMeleeDefinition* WeaponMeleeDefinition) const {
    return 0.0f;
}

UWeaponDefinition* UDataModule_Combat::GetEquipedWeaponDefinition() const {
    return NULL;
}

FGameplayTag UDataModule_Combat::GetDefeatingAttackDirection() const {
    return FGameplayTag{};
}

FGameplayTag UDataModule_Combat::GetCurrentParryDirection() const {
    return FGameplayTag{};
}

UComboAttackConfig* UDataModule_Combat::GetCurrentCombo() const {
    return NULL;
}

EAttackHandle UDataModule_Combat::GetCurrentAttackHandle() const {
    return EAttackHandle::None;
}

FGameplayTag UDataModule_Combat::GetCurrentAttackDirection() const {
    return FGameplayTag{};
}

UAttackMeleeConfig* UDataModule_Combat::GetCurrentAttack() const {
    return NULL;
}

FGameplayTag UDataModule_Combat::GetBlockState() const {
    return FGameplayTag{};
}

float UDataModule_Combat::GetAttackRangeInPlace(const UComboAttackConfig* Combo) const {
    return 0.0f;
}

float UDataModule_Combat::GetAttackRange(const UComboAttackConfig* Combo) const {
    return 0.0f;
}

float UDataModule_Combat::GetAttackCount() const {
    return 0.0f;
}

bool UDataModule_Combat::CheckIfNextAttackConfig(FGameplayTag AttackDirection) const {
    return false;
}

void UDataModule_Combat::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UDataModule_Combat, m_CurrentRangedState);
    DOREPLIFETIME(UDataModule_Combat, m_Stance);
    DOREPLIFETIME(UDataModule_Combat, m_DesiredStance);
    DOREPLIFETIME(UDataModule_Combat, m_AttackState);
    DOREPLIFETIME(UDataModule_Combat, m_BlockState);
    DOREPLIFETIME(UDataModule_Combat, m_CurrentAttackDirection);
    DOREPLIFETIME(UDataModule_Combat, m_DefeatingAttackDirection);
    DOREPLIFETIME(UDataModule_Combat, m_CurrentParryDirection);
    DOREPLIFETIME(UDataModule_Combat, m_CurrentPose);
    DOREPLIFETIME(UDataModule_Combat, m_LastWeaponDamaged);
}


