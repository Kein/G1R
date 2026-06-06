#include "AttributeSet_Mana.h"
#include "Net/UnrealNetwork.h"

UAttributeSet_Mana::UAttributeSet_Mana() {
}

void UAttributeSet_Mana::OnRep_RecoveryRatePerHourOfSleep(const FGameplayAttributeData& OldRecoveryRatePerHourOfSleep) {
}

void UAttributeSet_Mana::OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana) {
}

void UAttributeSet_Mana::OnRep_Mana(const FGameplayAttributeData& OldMana) {
}

void UAttributeSet_Mana::OnRep_MagicianLevel(const FGameplayAttributeData& OldMagician) {
}

void UAttributeSet_Mana::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAttributeSet_Mana, Mana);
    DOREPLIFETIME(UAttributeSet_Mana, MaxMana);
    DOREPLIFETIME(UAttributeSet_Mana, MagicianLevel);
    DOREPLIFETIME(UAttributeSet_Mana, RecoveryRatePerHourOfSleep);
}


