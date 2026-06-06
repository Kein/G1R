#include "AttributeSet_LevelProgression.h"
#include "Net/UnrealNetwork.h"

UAttributeSet_LevelProgression::UAttributeSet_LevelProgression() {
}

void UAttributeSet_LevelProgression::OnRep_XPKillOrDefeatBounty(const FGameplayAttributeData& OldXPBounty) {
}

void UAttributeSet_LevelProgression::OnRep_XPExecutedBounty(const FGameplayAttributeData& OldXPBounty) {
}

void UAttributeSet_LevelProgression::OnRep_Skillpoints(const FGameplayAttributeData& OldSkillpoints) {
}

void UAttributeSet_LevelProgression::OnRep_Level(const FGameplayAttributeData& OldLevel) {
}

void UAttributeSet_LevelProgression::OnRep_Experience(const FGameplayAttributeData& OldExperience) {
}

void UAttributeSet_LevelProgression::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAttributeSet_LevelProgression, Level);
    DOREPLIFETIME(UAttributeSet_LevelProgression, Experience);
    DOREPLIFETIME(UAttributeSet_LevelProgression, SkillPoints);
    DOREPLIFETIME(UAttributeSet_LevelProgression, XPExecutedBounty);
    DOREPLIFETIME(UAttributeSet_LevelProgression, XPKillOrDefeatBounty);
}


