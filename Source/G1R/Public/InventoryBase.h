#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EInventoryTypes.h"
#include "ItemVirtualData.h"
#include "InventoryBase.generated.h"

class AActor;
class UItemDefinition;
class UTexture2D;

UCLASS(BlueprintType)
class G1R_API UInventoryBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FGameplayTagContainer ActiveTags;
    
private:
    UPROPERTY()
    TArray<FItemVirtualData> FilteredInventory;
    
public:
    UInventoryBase();

    UFUNCTION(BlueprintCallable)
    static void StaticMoveItemBetweenInventoryTypes(AActor* Actor, int32 ItemPos, EInventoryTypes InventorySlot1, EInventoryTypes InventorySlot2);
    
    UFUNCTION(BlueprintCallable)
    void MoveItemBetweenInventoryTypes(int32 ItemPos, EInventoryTypes InventorySlot1, EInventoryTypes InventorySlot2);
    
    UFUNCTION()
    int32 ItemsNum();
    
    UFUNCTION()
    bool IsItemValidByPos(int32 ItemPos);
    
    UFUNCTION()
    bool GetItemWearableEquipped(int32 ItemPos);
    
    UFUNCTION()
    int32 GetItemValueByPos(int32 ItemPos);
    
    UFUNCTION()
    FString GetItemType(UItemDefinition* Item);
    
    UFUNCTION()
    FText GetItemNameByPos(int32 ItemPos) const;
    
    UFUNCTION()
    EInventoryTypes GetItemInventoryTypeByPos(int32 ItemPos);
    
    UFUNCTION()
    int32 GetItemIdByPos(int32 ItemPos);
    
    UFUNCTION()
    int32 GetItemHotkeyByActorAndPos(int32 ItemPos);
    
    UFUNCTION()
    FText GetItemDescriptionByPos(int32 ItemPos) const;
    
    UFUNCTION()
    int32 GetItemAmountByPos(int32 ItemPos);
    
    UFUNCTION(BlueprintCallable)
    int32 GetInventoryOreCount();
    
    UFUNCTION()
    TSoftObjectPtr<UTexture2D> GetIconPathByPos(int32 ItemPos);
    
    UFUNCTION()
    UItemDefinition* GetBaseConfigByPos(int32 ItemPos) const;
    
};

