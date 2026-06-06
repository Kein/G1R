#include "GameplayAbilityEquipWeaponAuto.h"

UGameplayAbilityEquipWeaponAuto::UGameplayAbilityEquipWeaponAuto() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;
}

void UGameplayAbilityEquipWeaponAuto::EquippingFinished() {
}


