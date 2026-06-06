#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayAbilitySpecHandle.h"
#include "EInventoryTypes.h"
#include "Templates/SubclassOf.h"
#include "AIInventoryLibrary.generated.h"

class AActor;
class UItemDefinition;

UCLASS(BlueprintType, Deprecated, NotPlaceable)
class UDEPRECATED_AIInventoryLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDEPRECATED_AIInventoryLibrary();

    UFUNCTION(BlueprintCallable)
    static FGameplayAbilitySpecHandle UnEquipItem(AActor* Entity);
    
    UFUNCTION(BlueprintCallable)
    static void SetItemInSlot(AActor* Entity, EInventoryTypes Slot, const TSubclassOf<UItemDefinition> Item, int32 SlotId);
    
    UFUNCTION(BlueprintCallable)
    static int32 RemoveItem(const AActor* Entity, const TSubclassOf<UItemDefinition>& Item, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static bool IsItemEquipped(AActor* Entity);
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<UItemDefinition> GetItemInSlot(AActor* Entity, EInventoryTypes Slot);
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<UItemDefinition> GetEquippedItem(AActor* Entity);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCountOfItem(AActor* Entity, TSubclassOf<UItemDefinition> Item);
    
    UFUNCTION(BlueprintCallable)
    static void AddItem(const AActor* Entity, const TSubclassOf<UItemDefinition>& Item, int32 Count);
    
};

