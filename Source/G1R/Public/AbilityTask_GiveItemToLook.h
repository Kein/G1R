#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_GiveItem.h"
#include "Templates/SubclassOf.h"
#include "AbilityTask_GiveItemToLook.generated.h"

class AGothicCharacterState;
class UAbilityTask_GiveItemToLook;
class UGameplayAbility;
class UItemDefinition;

UCLASS()
class G1R_API UAbilityTask_GiveItemToLook : public UAbilityTask_GiveItem {
    GENERATED_BODY()
public:
    UAbilityTask_GiveItemToLook();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_GiveItemToLook* TaskGiveItemToLook(UGameplayAbility* OwningAbility, AGothicCharacterState* ReceivingCharacterStateLook, TSubclassOf<UItemDefinition> ItemToGiveLook, int32 CountLook);
    
};

