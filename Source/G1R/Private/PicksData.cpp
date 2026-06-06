#include "PicksData.h"

UPicksData::UPicksData() {
}

TMap<FName, FStanceMapMontage> UPicksData::GetMontagesMap() {
    return TMap<FName, FStanceMapMontage>();
}

UAnimMontage* UPicksData::GetMontage(FName Name, EStance stance) const {
    return NULL;
}


