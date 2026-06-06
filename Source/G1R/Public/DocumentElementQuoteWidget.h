#pragma once
#include "CoreMinimal.h"
#include "DocumentElementWidget.h"
#include "DocumentElementQuoteWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class G1R_API UDocumentElementQuoteWidget : public UDocumentElementWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText QuoteText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText QuoteSourceText;
    
    UDocumentElementQuoteWidget();

};

