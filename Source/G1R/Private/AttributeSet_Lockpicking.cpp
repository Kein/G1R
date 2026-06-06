#include "AttributeSet_Lockpicking.h"
#include "Net/UnrealNetwork.h"

UAttributeSet_Lockpicking::UAttributeSet_Lockpicking() {
}

void UAttributeSet_Lockpicking::OnRep_LockpickPrecision(const FGameplayAttributeData& OldLockpickPrecision) {
}

void UAttributeSet_Lockpicking::OnRep_LockpickDurability(const FGameplayAttributeData& OldLockpickDurability) {
}

void UAttributeSet_Lockpicking::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAttributeSet_Lockpicking, LockpickDurability);
    DOREPLIFETIME(UAttributeSet_Lockpicking, LockpickPrecision);
}


