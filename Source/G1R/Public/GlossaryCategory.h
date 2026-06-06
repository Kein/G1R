#pragma once
#include "CoreMinimal.h"
#include "AlkFilterCategory.h"
#include "Templates/SubclassOf.h"
#include "GlossaryCategory.generated.h"

class UGlossarySubcategory;

UCLASS(Abstract)
class G1R_API UGlossaryCategory : public UAlkFilterCategory {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<TSubclassOf<UGlossarySubcategory>> m_PossibleSubcategories;
    
public:
    UGlossaryCategory();

};

