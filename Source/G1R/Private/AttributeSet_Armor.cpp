#include "AttributeSet_Armor.h"
#include "Net/UnrealNetwork.h"

UAttributeSet_Armor::UAttributeSet_Armor() {
}

void UAttributeSet_Armor::OnRep_SuperArmor(const FGameplayAttributeData& OldSuperArmor) {
}

void UAttributeSet_Armor::OnRep_Resistance_Wind(const FGameplayAttributeData& OldResistance_Wind) {
}

void UAttributeSet_Armor::OnRep_Resistance_Point(const FGameplayAttributeData& OldResistance_Point) {
}

void UAttributeSet_Armor::OnRep_Resistance_Ice(const FGameplayAttributeData& OldResistance_Ice) {
}

void UAttributeSet_Armor::OnRep_Resistance_Fire(const FGameplayAttributeData& OldResistance_Fire) {
}

void UAttributeSet_Armor::OnRep_Resistance_Falling(const FGameplayAttributeData& OldResistance_Falling) {
}

void UAttributeSet_Armor::OnRep_Resistance_Energy(const FGameplayAttributeData& OldResistance_Energy) {
}

void UAttributeSet_Armor::OnRep_Resistance_Edge(const FGameplayAttributeData& OldResistance_Edge) {
}

void UAttributeSet_Armor::OnRep_Resistance_Blunt(const FGameplayAttributeData& OldResistance_Blunt) {
}

void UAttributeSet_Armor::OnRep_MaxSuperArmor(const FGameplayAttributeData& OldMaxSuperArmor) {
}

void UAttributeSet_Armor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAttributeSet_Armor, SuperArmor);
    DOREPLIFETIME(UAttributeSet_Armor, MaxSuperArmor);
    DOREPLIFETIME(UAttributeSet_Armor, Resistance_Blunt);
    DOREPLIFETIME(UAttributeSet_Armor, Resistance_Edge);
    DOREPLIFETIME(UAttributeSet_Armor, Resistance_Point);
    DOREPLIFETIME(UAttributeSet_Armor, Resistance_Fire);
    DOREPLIFETIME(UAttributeSet_Armor, Resistance_Energy);
    DOREPLIFETIME(UAttributeSet_Armor, Resistance_Ice);
    DOREPLIFETIME(UAttributeSet_Armor, Resistance_Wind);
    DOREPLIFETIME(UAttributeSet_Armor, Resistance_Falling);
}


