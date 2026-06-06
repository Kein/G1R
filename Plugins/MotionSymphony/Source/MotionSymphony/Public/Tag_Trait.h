#pragma once
#include "CoreMinimal.h"
#include "TagSection.h"
#include "Tag_Trait.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class MOTIONSYMPHONY_API UTag_Trait : public UTagSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString TraitName;
    
    UTag_Trait();

};

