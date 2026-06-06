#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "AbilityTaskGeneric.h"
#include "GenericAbilityTask_WaitForEvent.generated.h"

class AActor;
class UAbilitySystemComponent;
class UGameplayAbility;
class UGenericAbilityTask_WaitForEvent;

UCLASS()
class G1R_API UGenericAbilityTask_WaitForEvent : public UAbilityTaskGeneric {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FGameplayTag EventToWaitFor;
    
    UPROPERTY(BlueprintReadWrite)
    bool bWaitForExactTagMatch;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayEventData ReceivedEvent;
    
    UPROPERTY(Instanced)
    UAbilitySystemComponent* OptionalExternalTarget;
    
    UGenericAbilityTask_WaitForEvent();

    UFUNCTION(BlueprintCallable)
    static UGenericAbilityTask_WaitForEvent* TaskWaitForEvent(UGameplayAbility* OwningAbility, FGameplayTag NewEventToWaitFor, bool bRequireExactTagMatch, AActor* OptionalUseOtherActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    UAbilitySystemComponent* GetTargetASC();
    
};

