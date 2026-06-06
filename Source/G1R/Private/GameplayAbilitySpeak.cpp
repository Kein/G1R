#include "GameplayAbilitySpeak.h"

UGameplayAbilitySpeak::UGameplayAbilitySpeak() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::ServerInitiated;
    this->AbilityTriggers.AddDefaulted(2);
    this->SayVoiceline = NULL;
}

void UGameplayAbilitySpeak::HandleSayVoicelineEnded(UAbilityTaskGeneric* Task, EGenericTaskResult Result) {
}


