#include "AIGroup_Combat_Base.h"

UAIGroup_Combat_Base::UAIGroup_Combat_Base() {
    this->ListenToAttributeChangesOf.AddDefaulted(3);
    this->WeakestMember = NULL;
    this->HighestStrengthInGroup = 0.00f;
    this->HighestLevelInGroup = 0.00f;
    this->HighestHealthInGroup = 0.00f;
}

void UAIGroup_Combat_Base::ScheduleFitnessUpdates() {
}

void UAIGroup_Combat_Base::ScheduleAvailableRoleUpdates() {
}

float UAIGroup_Combat_Base::GetStrengthRatioOf(AGothicCharacter* Character) const {
    return 0.0f;
}

float UAIGroup_Combat_Base::GetFitnessOf(AGothicCharacter* Character) const {
    return 0.0f;
}

TArray<ECombatRole> UAIGroup_Combat_Base::GetAvailableRolesOf(AGothicCharacter* Character) const {
    return TArray<ECombatRole>();
}


void UAIGroup_Combat_Base::FullyRecalculateGroupMemberStrengths() {
}




