#include "InteractAnimConfig.h"

UInteractAnimConfig::UInteractAnimConfig() {
}

UAnimMontage* UInteractAnimConfig::GetItemMontage(const FGameplayTag& ItemType, EWeaponSkill ItemSkill) const {
    return NULL;
}

UAnimMontage* UInteractAnimConfig::GetInteractObjectMontage() const {
    return NULL;
}

UAnimMontage* UInteractAnimConfig::GetInteractMontageMap(FName Name) const {
    return NULL;
}

UAnimMontage* UInteractAnimConfig::GetInteractMontage() const {
    return NULL;
}

void UInteractAnimConfig::AddAnimForItem(const FGameplayTag& ItemTag, EWeaponSkill ItemSkill, TSoftObjectPtr<UAnimMontage> AnimMontage) {
}


