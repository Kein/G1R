#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask_WaitGameplayTagBase.h"
#include "EndEquipDelegateDelegate.h"
#include "AbilityTask_EndEquip.generated.h"

class UAbilityTask_EndEquip;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_EndEquip : public UAbilityTask_WaitGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEndEquipDelegate m_Ended;
    
    UAbilityTask_EndEquip();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_EndEquip* DoEndEquip(UGameplayAbility* OwningAbility, bool ignoreDrop, bool instant);
    
};

