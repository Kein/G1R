#include "ParriesData.h"

UParriesData::UParriesData() {
    this->m_SuperArmorResistanceMultiplier = 1.00f;
}

float UParriesData::GetSuperArmorResistanceMultiplier() const {
    return 0.0f;
}

UAnimMontage* UParriesData::GetParry(const FGameplayTagContainer& MetaData) const {
    return NULL;
}

void UParriesData::AddParry(FGameplayTagContainer MetaData, FName Montage) {
}


