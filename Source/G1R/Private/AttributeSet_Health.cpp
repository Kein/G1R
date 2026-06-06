#include "AttributeSet_Health.h"
#include "Net/UnrealNetwork.h"

UAttributeSet_Health::UAttributeSet_Health() {
}

void UAttributeSet_Health::OnRep_RecoveryRatePerHourOfSleep(const FGameplayAttributeData& OldRecoveryRatePerHourOfSleep) {
}

void UAttributeSet_Health::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) {
}

void UAttributeSet_Health::OnRep_Health(const FGameplayAttributeData& OldHealth) {
}

void UAttributeSet_Health::OnRep_DamageMultiplier(const FGameplayAttributeData& OldDamageMultiplier) {
}

void UAttributeSet_Health::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAttributeSet_Health, Health);
    DOREPLIFETIME(UAttributeSet_Health, MaxHealth);
    DOREPLIFETIME(UAttributeSet_Health, DamageMultiplier);
    DOREPLIFETIME(UAttributeSet_Health, RecoveryRatePerHourOfSleep);
}


