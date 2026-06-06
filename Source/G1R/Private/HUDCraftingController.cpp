#include "HUDCraftingController.h"
#include "Templates/SubclassOf.h"

UHUDCraftingController::UHUDCraftingController() {
    this->m_UICraftingMain = NULL;
    this->m_UICraftingProgress = NULL;
    this->m_UICraftingState = EUICraftingStates::Default;
}

void UHUDCraftingController::UpdateUIState() {
}

void UHUDCraftingController::UpdateRecipes(TArray<TSubclassOf<UItemRecipeDefinition>> NewRecipes) const {
}

void UHUDCraftingController::UpdateInProgress() {
}

void UHUDCraftingController::UpdateActualRecipe(TSubclassOf<UItemRecipeDefinition> SelectedRecipe, int32 RecipeQuantity) {
}

void UHUDCraftingController::ShowMain() {
}

void UHUDCraftingController::ShowInProgress() {
}

void UHUDCraftingController::SetCraftingState(EUICraftingStates UICraftingState) {
}

void UHUDCraftingController::RefreshMenu() const {
}

void UHUDCraftingController::OnItemIsHoveredChangedIngredients(UObject* Item, bool bIsHovered) {
}

void UHUDCraftingController::HideMain() {
}

void UHUDCraftingController::HideInProgress() {
}

void UHUDCraftingController::HideAll() {
}

FString UHUDCraftingController::GetBlueprintNameProgress() {
    return TEXT("");
}

FString UHUDCraftingController::GetBlueprintNameMain() {
    return TEXT("");
}


