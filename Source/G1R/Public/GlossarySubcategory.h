#pragma once
#include "CoreMinimal.h"
#include "AlkFilterCategory.h"
#include "GlossarySubcategory.generated.h"

UCLASS(Abstract)
class G1R_API UGlossarySubcategory : public UAlkFilterCategory {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_ShowInFilters;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool m_ShowOnEntries;
    
public:
    UGlossarySubcategory();

};

