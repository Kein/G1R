#pragma once
#include "CoreMinimal.h"
#include "DocumentElementWidget.h"
#include "DocumentElementParagraphWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class G1R_API UDocumentElementParagraphWidget : public UDocumentElementWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Text;
    
    UDocumentElementParagraphWidget();

};

