#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GenericAbilityTask_WaitForEvent.h"
#include "GenericAbilityTask_SendAndWaitForEvent.generated.h"

class AActor;
class UGameplayAbility;
class UGenericAbilityTask_SendAndWaitForEvent;

UCLASS()
class G1R_API UGenericAbilityTask_SendAndWaitForEvent : public UGenericAbilityTask_WaitForEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FGameplayTag EventToSend;
    
    UPROPERTY(BlueprintReadWrite)
    FGameplayEventData Payload;
    
    UGenericAbilityTask_SendAndWaitForEvent();

    UFUNCTION(BlueprintCallable)
    static UGenericAbilityTask_SendAndWaitForEvent* TaskSendAndWaitForEvent(UGameplayAbility* OwningAbility, FGameplayTag EventTagToSend, FGameplayTag EventTagToWaitFor, const FGameplayEventData& NewPayload, bool bRequireExactTagMatch, AActor* OptionalUseOtherActor);
    
};

