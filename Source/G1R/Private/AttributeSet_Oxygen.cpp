#include "AttributeSet_Oxygen.h"
#include "Net/UnrealNetwork.h"

UAttributeSet_Oxygen::UAttributeSet_Oxygen() {
}

void UAttributeSet_Oxygen::OnRep_OxygenRecoveryRate(const FGameplayAttributeData& OldOxygenRecoveryRate) {
}

void UAttributeSet_Oxygen::OnRep_OxygenDepletionRate(const FGameplayAttributeData& OldOxygenDepletionRate) {
}

void UAttributeSet_Oxygen::OnRep_Oxygen(const FGameplayAttributeData& OldOxygen) {
}

void UAttributeSet_Oxygen::OnRep_MaxOxygen(const FGameplayAttributeData& OldMaxOxygen) {
}

void UAttributeSet_Oxygen::OnRep_CriticalLevelPercent(const FGameplayAttributeData& OldCriticalLevelPercent) {
}

void UAttributeSet_Oxygen::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAttributeSet_Oxygen, Oxygen);
    DOREPLIFETIME(UAttributeSet_Oxygen, MaxOxygen);
    DOREPLIFETIME(UAttributeSet_Oxygen, OxygenDepletionRate);
    DOREPLIFETIME(UAttributeSet_Oxygen, OxygenRecoveryRate);
    DOREPLIFETIME(UAttributeSet_Oxygen, CriticalLevelPercent);
}


