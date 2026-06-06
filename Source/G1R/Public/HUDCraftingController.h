#pragma once
#include "CoreMinimal.h"
#include "EUICraftingStates.h"
#include "HUDControllerBase.h"
#include "Templates/SubclassOf.h"
#include "HUDCraftingController.generated.h"

class UCraftingInProgress;
class UCraftingMain;
class UItemRecipeDefinition;
class UObject;

UCLASS(BlueprintType)
class G1R_API UHUDCraftingController : public UHUDControllerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UCraftingMain* m_UICraftingMain;
    
    UPROPERTY(Instanced)
    UCraftingInProgress* m_UICraftingProgress;
    
    UPROPERTY()
    EUICraftingStates m_UICraftingState;
    
    UPROPERTY()
    FString RecipeName;
    
public:
    UHUDCraftingController();

private:
    UFUNCTION()
    void UpdateUIState();
    
public:
    UFUNCTION()
    void UpdateRecipes(TArray<TSubclassOf<UItemRecipeDefinition>> NewRecipes) const;
    
private:
    UFUNCTION()
    void UpdateInProgress();
    
    UFUNCTION()
    void UpdateActualRecipe(TSubclassOf<UItemRecipeDefinition> SelectedRecipe, int32 RecipeQuantity);
    
    UFUNCTION()
    void ShowMain();
    
    UFUNCTION()
    void ShowInProgress();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCraftingState(EUICraftingStates UICraftingState);
    
    UFUNCTION()
    void RefreshMenu() const;
    
private:
    UFUNCTION()
    void OnItemIsHoveredChangedIngredients(UObject* Item, bool bIsHovered);
    
    UFUNCTION()
    void HideMain();
    
public:
    UFUNCTION()
    void HideInProgress();
    
    UFUNCTION()
    void HideAll();
    
    UFUNCTION(BlueprintCallable)
    static FString GetBlueprintNameProgress();
    
    UFUNCTION(BlueprintCallable)
    static FString GetBlueprintNameMain();
    
};

