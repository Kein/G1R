#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTask_InteractWith.h"
#include "Templates/SubclassOf.h"
#include "AbilityTask_PickUpItem.generated.h"

class AItemVisualWorld;
class UAbilityTask_PickUpItem;
class UGameplayAbility;
class UItemDefinition;

UCLASS()
class G1R_API UAbilityTask_PickUpItem : public UAbilityTask_InteractWith {
    GENERATED_BODY()
public:
    UAbilityTask_PickUpItem();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_PickUpItem* TaskPickUpSpecificItem(UGameplayAbility* OwningAbility, AItemVisualWorld* Item);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_PickUpItem* TaskFindAndPickUpItem(UGameplayAbility* OwningAbility, TSubclassOf<UItemDefinition> ItemDefinition, const FVector& AtLocation, float ItemSearchRadius, float AllowedWalkRadius);
    
};

