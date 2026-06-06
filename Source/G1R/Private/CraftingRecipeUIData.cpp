#include "CraftingRecipeUIData.h"

UCraftingRecipeUIData::UCraftingRecipeUIData() {
    this->m_ItemDefinitionClass = NULL;
    this->m_HasUnseenChanges = false;
}

bool UCraftingRecipeUIData::IsCraftable() const {
    return false;
}

TArray<FCraftingProductUIData> UCraftingRecipeUIData::GetProducts() const {
    return TArray<FCraftingProductUIData>();
}

FText UCraftingRecipeUIData::GetName() const {
    return FText::GetEmpty();
}

TArray<UCraftingIngredientUIData*> UCraftingRecipeUIData::GetIngredients() const {
    return TArray<UCraftingIngredientUIData*>();
}

TSoftObjectPtr<UTexture2D> UCraftingRecipeUIData::GetIconSoftObjectPtr() const {
    return NULL;
}

FText UCraftingRecipeUIData::GetDescription() const {
    return FText::GetEmpty();
}

int32 UCraftingRecipeUIData::GetCraftableAmount() const {
    return 0;
}


