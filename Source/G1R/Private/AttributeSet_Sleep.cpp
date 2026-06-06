#include "AttributeSet_Sleep.h"
#include "Net/UnrealNetwork.h"

UAttributeSet_Sleep::UAttributeSet_Sleep() {
}

void UAttributeSet_Sleep::OnRep_SleepTimeRecoveryPeriod(const FGameplayAttributeData& OldSleepTimeRecoveryPeriod) {
}

void UAttributeSet_Sleep::OnRep_SleepTimeRecoveryAmount(const FGameplayAttributeData& OldSleepTimeRecoveryAmount) {
}

void UAttributeSet_Sleep::OnRep_SleepTime(const FGameplayAttributeData& OldSleepTime) {
}

void UAttributeSet_Sleep::OnRep_MaxSleepTime(const FGameplayAttributeData& OldMaxSleepTime) {
}

void UAttributeSet_Sleep::OnRep_MaxRestTime(const FGameplayAttributeData& OldMaxRestTime) {
}

void UAttributeSet_Sleep::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAttributeSet_Sleep, SleepTime);
    DOREPLIFETIME(UAttributeSet_Sleep, MaxSleepTime);
    DOREPLIFETIME(UAttributeSet_Sleep, SleepTimeRecoveryAmount);
    DOREPLIFETIME(UAttributeSet_Sleep, SleepTimeRecoveryPeriod);
    DOREPLIFETIME(UAttributeSet_Sleep, MaxRestTime);
}


