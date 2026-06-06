#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CraftingProductUIData.h"
#include "Templates/SubclassOf.h"
#include "CraftingRecipeUIData.generated.h"

class UCraftingIngredientUIData;
class UItemRecipeDefinition;
class UTexture2D;

UCLASS(BlueprintType)
class G1R_API UCraftingRecipeUIData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUnseenStateChangedDelegate, bool, HasUnseenChanges);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAmountChangedDelegate, int32, _NewAmount);
    
    UPROPERTY(BlueprintAssignable)
    FAmountChangedDelegate m_OnCraftableAmountChanged;
    
    UPROPERTY(BlueprintAssignable)
    FUnseenStateChangedDelegate m_OnUnseenStateChanged;
    
protected:
    UPROPERTY(Transient)
    TSubclassOf<UItemRecipeDefinition> m_ItemDefinitionClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool m_HasUnseenChanges;
    
    UPROPERTY(Transient)
    TArray<FCraftingProductUIData> m_Products;
    
    UPROPERTY(Transient)
    TArray<UCraftingIngredientUIData*> m_Ingredients;
    
public:
    UCraftingRecipeUIData();

    UFUNCTION(BlueprintPure)
    bool IsCraftable() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FCraftingProductUIData> GetProducts() const;
    
    UFUNCTION(BlueprintPure)
    FText GetName() const;
    
    UFUNCTION(BlueprintPure)
    TArray<UCraftingIngredientUIData*> GetIngredients() const;
    
    UFUNCTION(BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetIconSoftObjectPtr() const;
    
    UFUNCTION(BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCraftableAmount() const;
    
};

