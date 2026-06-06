#pragma once
#include "CoreMinimal.h"
#include "DocumentElement.h"
#include "DocumentElementQuote.generated.h"

UCLASS(BlueprintType)
class G1R_API UDocumentElementQuote : public UDocumentElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText QuoteText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText QuoteSourceText;
    
    UDocumentElementQuote();

};

