#include "GameplayAbilityCustomizeArmor.h"

UGameplayAbilityCustomizeArmor::UGameplayAbilityCustomizeArmor() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;
    this->AbilityTriggers.AddDefaulted(1);
    this->CustomizationShopOwner = NULL;
}


