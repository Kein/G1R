#include "DodgesData.h"

UDodgesData::UDodgesData() {
    this->m_RollConfig = NULL;
}

UAnimMontage* UDodgesData::GetRoll() const {
    return NULL;
}

FDodgeData UDodgesData::GetDodgeData(const FGameplayTag& Orientation, const FGameplayTag& Direction, const FGameplayTag& Pose) const {
    return FDodgeData{};
}


