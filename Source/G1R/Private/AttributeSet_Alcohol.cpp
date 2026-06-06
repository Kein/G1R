#include "AttributeSet_Alcohol.h"
#include "Net/UnrealNetwork.h"

UAttributeSet_Alcohol::UAttributeSet_Alcohol() {
}

void UAttributeSet_Alcohol::OnRep_MaxAlcohol(const FGameplayAttributeData& OldMaxAlcohol) {
}

void UAttributeSet_Alcohol::OnRep_AlcoholDepletionRate(const FGameplayAttributeData& OldAlcoholDepletionRate) {
}

void UAttributeSet_Alcohol::OnRep_Alcohol(const FGameplayAttributeData& OldAlcohol) {
}

void UAttributeSet_Alcohol::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAttributeSet_Alcohol, Alcohol);
    DOREPLIFETIME(UAttributeSet_Alcohol, MaxAlcohol);
    DOREPLIFETIME(UAttributeSet_Alcohol, AlcoholDepletionRate);
}


