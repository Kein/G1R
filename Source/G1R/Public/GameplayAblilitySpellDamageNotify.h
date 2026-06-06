#pragma once
#include "CoreMinimal.h"
#include "ScriptGameplayAbility.h"
#include "GameplayAblilitySpellDamageNotify.generated.h"

class UAbilityTask_PlayMontage_Extended;
class UAnimMontage;

UCLASS()
class G1R_API UGameplayAblilitySpellDamageNotify : public UScriptGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UAbilityTask_PlayMontage_Extended* m_PlayMontageTask;
    
public:
    UGameplayAblilitySpellDamageNotify();

protected:
    UFUNCTION(BlueprintCallable)
    void PlayMontageTask(UAnimMontage* Montage);
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnUpdateAbility_Scriptable(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnNotifyDamageEnd_Scriptable();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnNotifyDamageBegin_Scriptable(float TotalDuration);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnInterrupted_Scriptable();
    
    UFUNCTION()
    void OnInterrupted();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnCompleted_Scriptable();
    
    UFUNCTION()
    void OnCompleted();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnCancelled_Scriptable();
    
    UFUNCTION()
    void OnCancelled();
    
public:
    UFUNCTION(BlueprintNativeEvent)
    void OnActivateAbility_Scriptable();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DoEndAbility();
    
};

