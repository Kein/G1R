#pragma once
#include "CoreMinimal.h"
#include "DocumentElement.h"
#include "DocumentElementChapterHeading.generated.h"

UCLASS(BlueprintType)
class G1R_API UDocumentElementChapterHeading : public UDocumentElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Text;
    
    UDocumentElementChapterHeading();

};

