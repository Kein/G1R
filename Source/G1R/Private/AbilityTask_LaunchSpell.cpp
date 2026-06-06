#include "AbilityTask_LaunchSpell.h"
#include "Templates/SubclassOf.h"

UAbilityTask_LaunchSpell::UAbilityTask_LaunchSpell() {
    this->SpellTarget = NULL;
    this->SpellConfigurationContainer = NULL;
    this->RuneItem = NULL;
}

UAbilityTask_LaunchSpell* UAbilityTask_LaunchSpell::TaskLaunchSpell(UGameplayAbility* NewOwningAbility, TSubclassOf<USpellConfigurationContainer> NewSpellConfigurationContainer, TSubclassOf<UItemDefinition> NewRuneItem, AActor* NewSpellTarget) {
    return NULL;
}


