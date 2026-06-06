#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EInventoryOpenedStates.h"
#include "RuneStats.h"
#include "SelectedItemStats.h"
#include "TooltipInfoRecipe.h"
#include "ItemTooltipInfo.generated.h"

USTRUCT(BlueprintType)
struct FItemTooltipInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EInventoryOpenedStates InventoryOpenedState;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsValid;
    
    UPROPERTY(BlueprintReadOnly)
    FText ItemName;
    
    UPROPERTY(BlueprintReadOnly)
    FText ItemDescription;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ItemHotkey;
    
    UPROPERTY(BlueprintReadOnly)
    bool IsEquipped;
    
    UPROPERTY(BlueprintReadOnly)
    bool CanBeEquipped;
    
    UPROPERTY(BlueprintReadOnly)
    bool CanBePurchased;
    
    UPROPERTY(BlueprintReadOnly)
    bool CanAfford;
    
    UPROPERTY(BlueprintReadOnly)
    FText ItemType;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FGameplayTag, float> EquippedItemStats;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FGameplayTag, float> SelectedItemStats;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FSelectedItemStats> SelectedItemStatsArray;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FGameplayAttribute> PlayerAttributeName;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<float> PlayerAttributeValue;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FGameplayAttribute, float> WeaponRequiredStats;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTag ItemTypeTag;
    
    UPROPERTY(BlueprintReadOnly)
    FGameplayTagContainer ItemSpecTagContainer;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FGameplayAttribute, float> ItemAttributes;
    
    UPROPERTY(BlueprintReadOnly)
    TMap<FGameplayAttribute, float> OthersAttributes;
    
    UPROPERTY(BlueprintReadOnly)
    FRuneStats RuneStats;
    
    UPROPERTY(BlueprintReadOnly)
    FTooltipInfoRecipe InfoRecipe;
    
    G1R_API FItemTooltipInfo();
};

