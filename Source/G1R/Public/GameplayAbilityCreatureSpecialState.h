#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityCreatureBasic.h"
#include "GameplayAbilityCreatureSpecialState.generated.h"

UCLASS()
class G1R_API UGameplayAbilityCreatureSpecialState : public UGameplayAbilityCreatureBasic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag m_StateGameplayTag;
    
    UGameplayAbilityCreatureSpecialState();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateRemoved_Scriptable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStateAdded_Scriptable();
    
public:
    UFUNCTION(BlueprintCallable)
    void BindTriggerEndOnTag(FGameplayTag TriggerBeginOnSpellTag);
    
    UFUNCTION(BlueprintCallable)
    void BindTriggerBeginOnTag(FGameplayTag TriggerBeginOnSpellTag);
    
};

