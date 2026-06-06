#include "AttributeSet_Pickpocketing.h"
#include "Net/UnrealNetwork.h"

UAttributeSet_Pickpocketing::UAttributeSet_Pickpocketing() {
}

void UAttributeSet_Pickpocketing::OnRep_PickPocketing(const FGameplayAttributeData& OldPickPocketing) {
}

void UAttributeSet_Pickpocketing::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAttributeSet_Pickpocketing, PickPocketing);
}


