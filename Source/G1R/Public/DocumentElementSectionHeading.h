#pragma once
#include "CoreMinimal.h"
#include "DocumentElement.h"
#include "DocumentElementSectionHeading.generated.h"

UCLASS(BlueprintType)
class G1R_API UDocumentElementSectionHeading : public UDocumentElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Text;
    
    UDocumentElementSectionHeading();

};

