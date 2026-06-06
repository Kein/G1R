#include "AttributeSet_Dexterity.h"
#include "Net/UnrealNetwork.h"

UAttributeSet_Dexterity::UAttributeSet_Dexterity() {
}

void UAttributeSet_Dexterity::OnRep_Dexterity(const FGameplayAttributeData& OldDexterity) {
}

void UAttributeSet_Dexterity::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAttributeSet_Dexterity, Dexterity);
}


