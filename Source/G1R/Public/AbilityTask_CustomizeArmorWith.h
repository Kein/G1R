#pragma once
#include "CoreMinimal.h"
#include "AbilityTask_StateBasedAction.h"
#include "AbilityTask_CustomizeArmorWith.generated.h"

class AGothicCharacterState;
class UAbilityTask_CustomizeArmorWith;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_CustomizeArmorWith : public UAbilityTask_StateBasedAction {
    GENERATED_BODY()
public:
    UPROPERTY()
    AGothicCharacterState* ArmorOwner;
    
    UAbilityTask_CustomizeArmorWith();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_CustomizeArmorWith* TaskCustomizeArmorWith(UGameplayAbility* OwningAbility, AGothicCharacterState* NewArmorOwner);
    
};

