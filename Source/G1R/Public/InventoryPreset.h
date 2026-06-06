#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EInventoryTypes.h"
#include "ItemsToAdd.h"
#include "Templates/SubclassOf.h"
#include "InventoryPreset.generated.h"

class AActor;
class UItemDefinition;

UCLASS(Abstract, BlueprintType)
class G1R_API UInventoryPreset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool CleanInventory;
    
    UPROPERTY(Transient)
    TArray<FGameplayTag> m_ItemTypes;
    
    UPROPERTY(EditAnywhere)
    bool ApplyArmor;
    
    UPROPERTY(Transient)
    TArray<FItemsToAdd> m_Items;
    
    UInventoryPreset();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyPreset(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable)
    void AddToTypeToPreset(FGameplayTag ItemType);
    
    UFUNCTION(BlueprintCallable)
    void AddToInventoryPreset(TSubclassOf<UItemDefinition> Item, int32 Amount, EInventoryTypes InventoryType);
    
};

