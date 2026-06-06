#include "AttributeSet_Fatigue.h"
#include "Net/UnrealNetwork.h"

UAttributeSet_Fatigue::UAttributeSet_Fatigue() {
}

void UAttributeSet_Fatigue::OnRep_RecoveryRatePerHourOfSleep(const FGameplayAttributeData& OldData) {
}

void UAttributeSet_Fatigue::OnRep_MaxThresholdIndex(const FGameplayAttributeData& OldData) {
}

void UAttributeSet_Fatigue::OnRep_MaxFatigue(const FGameplayAttributeData& OldData) {
}

void UAttributeSet_Fatigue::OnRep_FillRatioPeriod(const FGameplayAttributeData& OldData) {
}

void UAttributeSet_Fatigue::OnRep_FillRatio(const FGameplayAttributeData& OldData) {
}

void UAttributeSet_Fatigue::OnRep_Fatigue(const FGameplayAttributeData& OldData) {
}

void UAttributeSet_Fatigue::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAttributeSet_Fatigue, Fatigue);
    DOREPLIFETIME(UAttributeSet_Fatigue, MaxFatigue);
    DOREPLIFETIME(UAttributeSet_Fatigue, FillRatio);
    DOREPLIFETIME(UAttributeSet_Fatigue, FillRatioPeriod);
    DOREPLIFETIME(UAttributeSet_Fatigue, MaxThresholdIndex);
    DOREPLIFETIME(UAttributeSet_Fatigue, RecoveryRatePerHourOfSleep);
}


