#include "GuildAreaOwnershipModifier.h"

UGuildAreaOwnershipModifier::UGuildAreaOwnershipModifier() {
    this->Weight = 1.00f;
}

bool UGuildAreaOwnershipModifier::IsApplicableNow_Implementation() const {
    return false;
}


