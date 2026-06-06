#include "CraftingMenu.h"

UCraftingMenu::UCraftingMenu() {
    this->m_ProductsInventory = NULL;
    this->m_IngredientsInventory = NULL;
    this->DiscreteItemsView_Recipes = NULL;
}

void UCraftingMenu::UpdateProductInventory(const UCraftingRecipeUIData* _RecipeData) {
}

void UCraftingMenu::UpdateIngredientInventory(const UCraftingRecipeUIData* _RecipeData) {
}

void UCraftingMenu::SetCurrentRecipeUIData(const UObject* _Item) {
}

void UCraftingMenu::SetCurrentRecipeIndex(int32 _Index) {
}

void UCraftingMenu::SetCraftingQuantity(int32 _Quantity) {
}






bool UCraftingMenu::IsSelectionValid() const {
    return false;
}

FItemTooltipInfo UCraftingMenu::GetProductTooltipInfo(int32 _ProductID) const {
    return FItemTooltipInfo{};
}

FItemTooltipInfo UCraftingMenu::GetIngredientTooltipInfo(int32 _IngredientID) const {
    return FItemTooltipInfo{};
}

UCraftingRecipeUIData* UCraftingMenu::GetCurrentRecipeUIData() const {
    return NULL;
}

int32 UCraftingMenu::GetCurrentRecipeIndex() const {
    return 0;
}

int32 UCraftingMenu::GetCraftingQuantity() const {
    return 0;
}

bool UCraftingMenu::CanCraftMultipleItems() const {
    return false;
}


