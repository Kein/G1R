#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DocumentPage.generated.h"

class UDocumentElement;

UCLASS(BlueprintType)
class G1R_API UDocumentPage : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UDocumentElement*> Contents;
    
    UDocumentPage();

};

