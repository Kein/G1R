#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "AlkUserWidget.h"
#include "CraftingMenu_CraftingActionMetadata.h"
#include "ItemTooltipInfo.h"
#include "CraftingMenu.generated.h"

class UCraftingRecipeUIData;
class UDiscreteItemViewWidget;
class UInventoryBase;
class UObject;

UCLASS(EditInlineNew)
class G1R_API UCraftingMenu : public UAlkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FCraftingMenu_CraftingActionMetadata> m_CraftingActionMetadata;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_SectionUpRowHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle m_SectionDownRowHandle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FText m_WindowTitle;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TArray<UCraftingRecipeUIData*> m_RecipeUIData;
    
    UPROPERTY(Transient)
    UInventoryBase* m_ProductsInventory;
    
    UPROPERTY(Transient)
    UInventoryBase* m_IngredientsInventory;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UDiscreteItemViewWidget* DiscreteItemsView_Recipes;
    
public:
    UCraftingMenu();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateProductInventory(const UCraftingRecipeUIData* _RecipeData);
    
    UFUNCTION(BlueprintCallable)
    void UpdateIngredientInventory(const UCraftingRecipeUIData* _RecipeData);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCurrentRecipeUIData(const UObject* _Item);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentRecipeIndex(int32 _Index);
    
    UFUNCTION(BlueprintCallable)
    void SetCraftingQuantity(int32 _Quantity);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSectionUpTriggered();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSectionDownTriggered();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRecipesUpdated();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCraftingStationTypeChanged(const FGameplayTag& _GameplayTag);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCraftableAmountsChanged();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSelectionValid() const;
    
    UFUNCTION(BlueprintPure)
    FItemTooltipInfo GetProductTooltipInfo(int32 _ProductID) const;
    
    UFUNCTION(BlueprintPure)
    FItemTooltipInfo GetIngredientTooltipInfo(int32 _IngredientID) const;
    
    UFUNCTION(BlueprintPure)
    UCraftingRecipeUIData* GetCurrentRecipeUIData() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrentRecipeIndex() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCraftingQuantity() const;
    
    UFUNCTION(BlueprintPure)
    bool CanCraftMultipleItems() const;
    
};

