#include "GE_ModMagnitudeCalculationBase.h"
#include "Templates/SubclassOf.h"

UGE_ModMagnitudeCalculationBase::UGE_ModMagnitudeCalculationBase() {
}

FGameplayAttribute UGE_ModMagnitudeCalculationBase::GetAttribute(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName) {
    return FGameplayAttribute{};
}


