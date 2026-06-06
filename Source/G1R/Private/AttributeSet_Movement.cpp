#include "AttributeSet_Movement.h"
#include "Net/UnrealNetwork.h"

UAttributeSet_Movement::UAttributeSet_Movement() {
}

void UAttributeSet_Movement::OnRep_SpeedModifier(const FGameplayAttributeData& OldSpeedModifier) {
}

void UAttributeSet_Movement::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAttributeSet_Movement, SpeedModifier);
}


