#pragma once
#include "CoreMinimal.h"
#include "DocumentElement.h"
#include "DocumentElementList.generated.h"

UCLASS(Abstract, BlueprintType)
class G1R_API UDocumentElementList : public UDocumentElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> ListEntries;
    
    UDocumentElementList();

};

