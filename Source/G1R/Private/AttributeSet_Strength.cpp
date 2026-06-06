#include "AttributeSet_Strength.h"
#include "Net/UnrealNetwork.h"

UAttributeSet_Strength::UAttributeSet_Strength() {
}

void UAttributeSet_Strength::OnRep_Strength(const FGameplayAttributeData& OldStrength) {
}

void UAttributeSet_Strength::OnRep_Critical_TwoHand(const FGameplayAttributeData& OldCritical_TwoHand) {
}

void UAttributeSet_Strength::OnRep_Critical_Orc(const FGameplayAttributeData& OldCritical_Orc) {
}

void UAttributeSet_Strength::OnRep_Critical_OneHand(const FGameplayAttributeData& OldCritical_OneHand) {
}

void UAttributeSet_Strength::OnRep_Critical_Fists(const FGameplayAttributeData& OldCritical_Fists) {
}

void UAttributeSet_Strength::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAttributeSet_Strength, Strength);
    DOREPLIFETIME(UAttributeSet_Strength, Critical_Fists);
    DOREPLIFETIME(UAttributeSet_Strength, Critical_OneHand);
    DOREPLIFETIME(UAttributeSet_Strength, Critical_TwoHand);
    DOREPLIFETIME(UAttributeSet_Strength, Critical_Orc);
}


