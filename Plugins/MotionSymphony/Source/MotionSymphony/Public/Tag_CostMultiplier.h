#pragma once
#include "CoreMinimal.h"
#include "TagSection.h"
#include "Tag_CostMultiplier.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class MOTIONSYMPHONY_API UTag_CostMultiplier : public UTagSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float CostMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool bOverride;
    
    UTag_CostMultiplier();

};

