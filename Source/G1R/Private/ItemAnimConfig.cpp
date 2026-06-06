#include "ItemAnimConfig.h"
#include "Templates/SubclassOf.h"

UItemAnimConfig::UItemAnimConfig() {
    this->m_DodgesData = NULL;
    this->m_EquipData = NULL;
    this->m_NonCombatEquipData = NULL;
    this->m_HitsData = NULL;
    this->m_ConsumablesData = NULL;
    this->m_PicksData = NULL;
    this->m_LootsData = NULL;
    this->m_StartFireData = NULL;
    this->m_EndFireData = NULL;
    this->m_TurnsData = NULL;
    this->m_LocomotionSequencesData = NULL;
    this->m_SpeedsPlayer = NULL;
    this->m_SpeedsNPC = NULL;
    this->m_OverrideLocomotionConfig = false;
}

TArray<FRandomSequence> UItemAnimConfig::GetWalkBreakers() const {
    return TArray<FRandomSequence>();
}

UAnimMontage* UItemAnimConfig::GetUnequipMontage(EStance stance, EHoldsterLocation HoldsterLocation, bool Combat) const {
    return NULL;
}

UTurnsData* UItemAnimConfig::GetTurnsData() const {
    return NULL;
}

UAnimMontage* UItemAnimConfig::GetThrowMontage(bool isCrouch) const {
    return NULL;
}

UPicksData* UItemAnimConfig::GetStartFireData() const {
    return NULL;
}

USpeedConfig* UItemAnimConfig::GetSpeedConfigPlayer() const {
    return NULL;
}

USpeedConfig* UItemAnimConfig::GetSpeedConfigNPC() const {
    return NULL;
}

FName UItemAnimConfig::GetSocketDraw(EHoldsterLocation HoldsterLocation) const {
    return NAME_None;
}

FName UItemAnimConfig::GetSocket() const {
    return NAME_None;
}

UAnimMontage* UItemAnimConfig::GetPukeMontage(EStance stance) const {
    return NULL;
}

UPicksData* UItemAnimConfig::GetPickData() const {
    return NULL;
}

UAnimMontage* UItemAnimConfig::GetPickAndEquipMontage(FName Height, EStance stance, EHoldsterLocation HoldsterLocation, bool Combat) const {
    return NULL;
}

UEquipData* UItemAnimConfig::GetNonCombatEquipData() const {
    return NULL;
}

UPicksData* UItemAnimConfig::GetLootData() const {
    return NULL;
}

ULocomotionSequencesData* UItemAnimConfig::GetLocomotionSequencesData() const {
    return NULL;
}

TArray<FRandomSequence> UItemAnimConfig::GetIdleBreakers() const {
    return TArray<FRandomSequence>();
}

UHitData* UItemAnimConfig::GetHitData() const {
    return NULL;
}

UAnimMontage* UItemAnimConfig::GetEquipMontage(EStance stance, EHoldsterLocation HoldsterLocation, bool Combat) const {
    return NULL;
}

UEquipData* UItemAnimConfig::GetEquipData() const {
    return NULL;
}

UPicksData* UItemAnimConfig::GetEndFireData() const {
    return NULL;
}

UAnimMontage* UItemAnimConfig::GetDropMontage(EStance stance, EHoldsterLocation HoldsterLocation, bool Combat, bool DropBackwards) const {
    return NULL;
}

UAnimMontage* UItemAnimConfig::GetDropAndEquipMontage(EStance stance, EHoldsterLocation HoldsterLocation, bool Combat) const {
    return NULL;
}

UDodgesData* UItemAnimConfig::GetDodgesData() const {
    return NULL;
}

UAnimMontage* UItemAnimConfig::GetDeathAnimForItem(const FGameplayTag& ItemTag, EWeaponSkill ItemSkill) const {
    return NULL;
}

UAnimMontage* UItemAnimConfig::GetConsumeMontage(const FGameplayTag& Tag, EStance stance) const {
    return NULL;
}

UConsumablesData* UItemAnimConfig::GetConsumablesData() const {
    return NULL;
}

TSubclassOf<UAnimInstance> UItemAnimConfig::GetAnimationBp() const {
    return NULL;
}

void UItemAnimConfig::AddWalkBreaker(FName Path, float Chance, int32 LoopsBeforeRemove) {
}

void UItemAnimConfig::AddIdleBreaker(FName Path, float Chance, int32 LoopsBeforeRemove) {
}

void UItemAnimConfig::AddDeathAnimForItem(const FGameplayTag& ItemTag, EWeaponSkill ItemSkill, const TSoftObjectPtr<UAnimMontage>& animHitMontage) {
}


