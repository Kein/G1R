#include "AbilityTask_Interact_Ladder.h"

UAbilityTask_Interact_Ladder::UAbilityTask_Interact_Ladder() {
    this->MontageEntryFrontSection = TEXT("EntranceUp");
    this->MontageEntryBackSection = TEXT("EntranceDown");
    this->bBlockExitWhenNoExitSectionAvailable = true;
    this->LootAtPointOffset = 80.00f;
}

ALadderObject* UAbilityTask_Interact_Ladder::GetLadder() const {
    return NULL;
}

bool UAbilityTask_Interact_Ladder::ConditionCanStepUp2() {
    return false;
}

bool UAbilityTask_Interact_Ladder::ConditionCanStepUp() {
    return false;
}

bool UAbilityTask_Interact_Ladder::ConditionCanStepDown3() {
    return false;
}

bool UAbilityTask_Interact_Ladder::ConditionCanStepDown2() {
    return false;
}

bool UAbilityTask_Interact_Ladder::ConditionCanStepDown() {
    return false;
}

bool UAbilityTask_Interact_Ladder::ConditionCanExitTop() {
    return false;
}

bool UAbilityTask_Interact_Ladder::ConditionCanExitBottom2() {
    return false;
}

bool UAbilityTask_Interact_Ladder::ConditionCanExitBottom() {
    return false;
}


