#pragma once
#include "CoreMinimal.h"
#include "DocumentElementWidget.h"
#include "DocumentElementSectionHeadingWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class G1R_API UDocumentElementSectionHeadingWidget : public UDocumentElementWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Text;
    
    UDocumentElementSectionHeadingWidget();

};

