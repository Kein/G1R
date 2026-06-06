#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AbilityTask_InteractWith.h"
#include "Templates/SubclassOf.h"
#include "AbilityTask_PickUpDroppedItem.generated.h"

class UAbilityTask_PickUpDroppedItem;
class UGameplayAbility;
class UItemDefinition;

UCLASS()
class G1R_API UAbilityTask_PickUpDroppedItem : public UAbilityTask_InteractWith {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UItemDefinition> ItemDefinition;
    
    UAbilityTask_PickUpDroppedItem();

    UFUNCTION(BlueprintCallable)
    static UAbilityTask_PickUpDroppedItem* TaskFindAndPickUpDroppedItem(UGameplayAbility* OwningAbility, TSubclassOf<UItemDefinition> NewItemDefinition, const FVector& AtLocation, float ItemSearchRadius, float AllowedWalkRadius);
    
};

