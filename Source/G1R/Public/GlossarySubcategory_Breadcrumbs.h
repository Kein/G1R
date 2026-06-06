#pragma once
#include "CoreMinimal.h"
#include "GlossarySubcategory.h"
#include "GlossarySubcategory_Breadcrumbs.generated.h"

UCLASS(Abstract)
class G1R_API UGlossarySubcategory_Breadcrumbs : public UGlossarySubcategory {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FString> m_NameCrumbs;
    
public:
    UGlossarySubcategory_Breadcrumbs();

};

