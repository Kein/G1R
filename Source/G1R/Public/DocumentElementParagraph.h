#pragma once
#include "CoreMinimal.h"
#include "DocumentElement.h"
#include "DocumentElementParagraph.generated.h"

UCLASS(BlueprintType)
class G1R_API UDocumentElementParagraph : public UDocumentElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Text;
    
    UDocumentElementParagraph();

};

