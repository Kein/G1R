#include "ScriptGameplayEffect.h"
#include "Templates/SubclassOf.h"

UScriptGameplayEffect::UScriptGameplayEffect() {
    //FIXME this->GEComponents.AddDefaulted(6);
}

void UScriptGameplayEffect::UseCallerValueAsDuration(const FGameplayTag& DataTag) {
}

void UScriptGameplayEffect::SetPeriodic(const float NewPeriod, const float NewDuration) {
}

void UScriptGameplayEffect::SetCallerValueToAttribute(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName, const FGameplayTag& DataTag) {
}

void UScriptGameplayEffect::SetAttribute(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName, float SetTo) {
}

void UScriptGameplayEffect::RefreshAttribute(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName) {
}

void UScriptGameplayEffect::MultiplyAttribute(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName, float MultiplyBy) {
}

void UScriptGameplayEffect::IncreaseAttributeByPercentage(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName, float Percentage) {
}

void UScriptGameplayEffect::IncreaseAttribute(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName, float IncreaseBy) {
}

EGameplayEffectDurationType UScriptGameplayEffect::GetDurationType() {
    return EGameplayEffectDurationType::Instant;
}

FGameplayAttribute UScriptGameplayEffect::GetAttribute(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName) {
    return FGameplayAttribute{};
}

void UScriptGameplayEffect::DecreaseAttributeByPercentage(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName, float Percentage) {
}

void UScriptGameplayEffect::DecreaseAttribute(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName, float DecreaseBy) {
}

void UScriptGameplayEffect::AddCallerValueToAttribute(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName, const FGameplayTag& DataTag) {
}


