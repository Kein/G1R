#include "CraftingIngredientUIData.h"

UCraftingIngredientUIData::UCraftingIngredientUIData() {
    this->m_ItemDefinitionClass = NULL;
}

void UCraftingIngredientUIData::SetCraftingAmount(int32 _Amount) {
}

int32 UCraftingIngredientUIData::GetRequiredAmount() const {
    return 0;
}

TSoftObjectPtr<UTexture2D> UCraftingIngredientUIData::GetIconSoftObjectPtr() const {
    return NULL;
}

int32 UCraftingIngredientUIData::GetCraftingAmount() const {
    return 0;
}

int32 UCraftingIngredientUIData::GetAvailableAmount() const {
    return 0;
}


