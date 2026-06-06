#pragma once
#include "CoreMinimal.h"
#include "HUDNotificationData.h"
#include "HUDNotificationData_Recipe.generated.h"

class UCraftingRecipeUIData;

USTRUCT(BlueprintType)
struct FHUDNotificationData_Recipe : public FHUDNotificationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    UCraftingRecipeUIData* m_Recipe;
    
    G1R_API FHUDNotificationData_Recipe();
};

