#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EInventoryFilterTypes.h"
#include "ItemVirtualData.h"
#include "Templates/SubclassOf.h"
#include "UIGameplayAbilityPick.generated.h"

class UUserWidget;

UCLASS(BlueprintType)
class G1R_API UUIGameplayAbilityPick : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UUserWidget* StandardNotificationList;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UUserWidget> StandardNotificationBPClass;
    
    UPROPERTY(BlueprintReadOnly)
    FText PickedItemName;
    
    UPROPERTY(BlueprintReadOnly)
    int32 PickedItemAmount;
    
    UPROPERTY(BlueprintReadOnly)
    EInventoryFilterTypes PickedItemCategory;
    
public:
    UUIGameplayAbilityPick();

protected:
    UFUNCTION()
    void ItemPicked(const FItemVirtualData& ItemToAdd);
    
};

