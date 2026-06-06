#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CraftingActionStartDelegate.generated.h"

class UItemRecipeDefinition;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCraftingActionStart, TSubclassOf<UItemRecipeDefinition>, SelectedRecipe, int32, RecipeQuantity);

