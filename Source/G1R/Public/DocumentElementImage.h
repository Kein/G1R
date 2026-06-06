#pragma once
#include "CoreMinimal.h"
#include "DocumentElement.h"
#include "DocumentElementImage.generated.h"

class UTexture2D;

UCLASS(BlueprintType)
class G1R_API UDocumentElementImage : public UDocumentElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Image;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText CaptionText;
    
    UDocumentElementImage();

};

