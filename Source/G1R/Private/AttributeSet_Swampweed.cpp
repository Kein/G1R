#include "AttributeSet_Swampweed.h"
#include "Net/UnrealNetwork.h"

UAttributeSet_Swampweed::UAttributeSet_Swampweed() {
}

void UAttributeSet_Swampweed::OnRep_SwampweedDepletionRate(const FGameplayAttributeData& OldSwampweedDepletionRate) {
}

void UAttributeSet_Swampweed::OnRep_Swampweed(const FGameplayAttributeData& OldSwampweed) {
}

void UAttributeSet_Swampweed::OnRep_MaxSwampweed(const FGameplayAttributeData& OldMaxSwampweed) {
}

void UAttributeSet_Swampweed::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAttributeSet_Swampweed, Swampweed);
    DOREPLIFETIME(UAttributeSet_Swampweed, MaxSwampweed);
    DOREPLIFETIME(UAttributeSet_Swampweed, SwampweedDepletionRate);
}


