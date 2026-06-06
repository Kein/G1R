#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayEffectBase.h"
#include "Templates/SubclassOf.h"
#include "ScriptGameplayEffect.generated.h"

class UAttributeSet;

UCLASS(Abstract)
class G1R_API UScriptGameplayEffect : public UGameplayEffectBase {
    GENERATED_BODY()
public:
    UScriptGameplayEffect();

    UFUNCTION(BlueprintCallable)
    void UseCallerValueAsDuration(const FGameplayTag& DataTag);
    
    UFUNCTION(BlueprintCallable)
    void SetPeriodic(const float NewPeriod, const float NewDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetCallerValueToAttribute(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName, const FGameplayTag& DataTag);
    
    UFUNCTION(BlueprintCallable)
    void SetAttribute(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName, float SetTo);
    
    UFUNCTION(BlueprintCallable)
    void RefreshAttribute(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    void MultiplyAttribute(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName, float MultiplyBy);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseAttributeByPercentage(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName, float Percentage);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseAttribute(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName, float IncreaseBy);
    
    UFUNCTION(BlueprintCallable)
    EGameplayEffectDurationType GetDurationType();
    
    UFUNCTION(BlueprintCallable)
    FGameplayAttribute GetAttribute(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    void DecreaseAttributeByPercentage(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName, float Percentage);
    
    UFUNCTION(BlueprintCallable)
    void DecreaseAttribute(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName, float DecreaseBy);
    
    UFUNCTION(BlueprintCallable)
    void AddCallerValueToAttribute(TSubclassOf<UAttributeSet> AttributeSetClass, FName AttributeName, const FGameplayTag& DataTag);
    
};

