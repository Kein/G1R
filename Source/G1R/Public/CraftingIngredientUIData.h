#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "CraftingIngredientUIData.generated.h"

class UItemDefinition;
class UTexture2D;

UCLASS(BlueprintType)
class UCraftingIngredientUIData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAmountChangedDelegate, int32, _NewAmount);
    
    UPROPERTY(BlueprintAssignable)
    FAmountChangedDelegate m_OnAvailableAmountChanged;
    
    UPROPERTY(BlueprintAssignable)
    FAmountChangedDelegate m_OnCraftingAmountChanged;
    
protected:
    UPROPERTY(Transient)
    TSubclassOf<UItemDefinition> m_ItemDefinitionClass;
    
public:
    UCraftingIngredientUIData();

    UFUNCTION(BlueprintCallable)
    void SetCraftingAmount(int32 _Amount);
    
    UFUNCTION(BlueprintPure)
    int32 GetRequiredAmount() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetIconSoftObjectPtr() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCraftingAmount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAvailableAmount() const;
    
};

