#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayAbilityBase.h"
#include "GameplayAbilityManageTagUpdate.generated.h"

class UGothicAbilitySystemComponent;

UCLASS()
class G1R_API UGameplayAbilityManageTagUpdate : public UGameplayAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGameplayTag> m_LookForTags;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UGothicAbilitySystemComponent* m_AbilitySystemComponent;
    
public:
    UGameplayAbilityManageTagUpdate();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTagUpdate_Scriptable(FGameplayTag InTag, int32 NewCount);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEndAbility_Scriptable(const FGameplayAbilityActorInfo& GAActorInfo, bool WasCancelled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivateAbility_Scriptable(const FGameplayAbilityActorInfo& GAActorInfo, const FGameplayEventData& TriggerEventData);
    
};

