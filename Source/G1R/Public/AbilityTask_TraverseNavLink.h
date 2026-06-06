#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "AbilityTask_StateBasedAction.h"
#include "AbilityTask_TraverseNavLink.generated.h"

class UAbilityTask_TraverseNavLink;
class UGameplayAbility;

UCLASS()
class G1R_API UAbilityTask_TraverseNavLink : public UAbilityTask_StateBasedAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FVector NavLinkStart;
    
    UPROPERTY()
    FVector NavLinkEnd;
    
    UPROPERTY()
    FGameplayTag ActionTag;
    
public:
    UAbilityTask_TraverseNavLink();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_TraverseNavLink* TaskNavLinkTraversal(UGameplayAbility* OwningAbility, const FGameplayTag& NewActionTag, const FVector& NewNavLinkStart, const FVector& NewNavLinkEnd);
    
};

