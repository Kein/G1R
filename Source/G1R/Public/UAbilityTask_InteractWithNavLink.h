#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityTask_InteractWith.h"
#include "InteractionSpotHandle.h"
#include "UAbilityTask_InteractWithNavLink.generated.h"

class UGameplayAbility;
class UUAbilityTask_InteractWithNavLink;

UCLASS()
class G1R_API UUAbilityTask_InteractWithNavLink : public UAbilityTask_InteractWith {
    GENERATED_BODY()
public:
    UUAbilityTask_InteractWithNavLink();

    UFUNCTION(BlueprintCallable)
    static UUAbilityTask_InteractWithNavLink* TaskNavLinkSpot(UGameplayAbility* OwningAbility, FInteractionSpotHandle LinkInteractionSpot, FGameplayTag InAction, float InActionDuration);
    
    UFUNCTION(BlueprintCallable)
    static UUAbilityTask_InteractWithNavLink* TaskNavLink(UGameplayAbility* OwningAbility, FGameplayTag InAction, float InActionDuration);
    
};

