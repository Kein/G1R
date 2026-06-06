#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ViewItemWidget.h"
#include "GlossarySlotWidget.generated.h"

class UGlossaryDocument;
class UGlossarySubcategory;

UCLASS(EditInlineNew)
class G1R_API UGlossarySlotWidget : public UViewItemWidget {
    GENERATED_BODY()
public:
    UGlossarySlotWidget();

protected:
    UFUNCTION(BlueprintPure)
    bool IsUnseen(const UGlossaryDocument* _Document) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UGlossarySubcategory* GetSubcategoryDefaultObject(TSubclassOf<UGlossarySubcategory> _Subcategory) const;
    
};

