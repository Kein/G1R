#pragma once
#include "CoreMinimal.h"
#include "EInventoryTypes.h"
#include "ItemInShop.generated.h"

class UItemDefinition;
class UTexture2D;

USTRUCT(BlueprintType)
struct FItemInShop {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UItemDefinition* m_ItemDef;
    
    UPROPERTY()
    TSoftObjectPtr<UTexture2D> m_AlternativeIconPath;
    
    UPROPERTY()
    FString m_ItemName;
    
    UPROPERTY()
    int32 m_ItemAmount;
    
    UPROPERTY()
    int32 m_ItemPrice;
    
    UPROPERTY()
    int32 m_ItemPreviousPrice;
    
    UPROPERTY()
    int32 m_ItemId;
    
    UPROPERTY()
    EInventoryTypes m_eInventoryType;
    
    UPROPERTY()
    int32 m_SlotId;
    
private:
    UPROPERTY()
    int32 m_ItemAmountDefault;
    
public:
    G1R_API FItemInShop();
};

